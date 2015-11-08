var realFs = require('fs');
var gracefulFs = require('graceful-fs');


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
        return ({
          father : tmp[1],
          childList : [tmp[0]]
        });
      }
    });

    cb({
      name : frameWorkName,
      list : list
    });
  });

};


module.exports = Utilities;
