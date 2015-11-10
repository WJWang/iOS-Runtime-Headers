var realFs = require('fs');
var gracefulFs = require('graceful-fs');
var _ = require('lodash');

var REGEX_STR = /\s{1}\w+\s{1}[:]{1}\s{1}\w+\s/g;

var recursive = require('recursive-readdir');


var Utilities = function () {

};


Utilities.getFrameworkInherit = function(dirPath, frameWorkName, cb) {

  recursive(dirPath, function(err, files) {

    var list = files.map(function(file) {
      var data = gracefulFs.readFileSync(file, 'utf8');
      if (Array.isArray(data.match(REGEX_STR))) {
        var tmp = data.match(REGEX_STR)[0];
        tmp = tmp.split(":").map(function(str) {
          return str.trim();
        });

        if(tmp[0] && tmp[1]) {
          return ({
            name : tmp[1],
            parent : null,
            children : [{
              name : tmp[0],
              children : [],
              framework : frameWorkName
            }]
          });
        }
      } else {
        return {
          parent: null,
          name: null,
          children : []
        };
      }
    });

    var inheritList = [];
    function recursiveInherit(list) {
      var reducedObj = list.reduce(function(pre, ele) {
        if(pre.name === ele.name) {
          return {
            name : pre.name,
            parent: pre.parent || ele.parent,
            children : pre.children.concat(ele.children),
          };
        } else {
          return ele;
        }
      });
      inheritList.push(reducedObj);

      var newList = _.filter(list, function(ele) {
        return (ele.name !== reducedObj.name);
      });

      if(newList.length) {
        recursiveInherit(newList);
      }
      return inheritList;
    }


    var groupParentsList = recursiveInherit(list);
    cb({
      name : frameWorkName,
      list :  groupParentsList
    });
  });

};


module.exports = Utilities;
