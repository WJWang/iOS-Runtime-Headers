const PRIVATE_JSON_PATH = __dirname + '/src/json/private/';
const PUBLIC_JSON_PATH = __dirname + '/src/json/public/';


var _ = require('lodash');
var realFs = require('fs');
var gracefulFs = require('graceful-fs');
var uid = require('uid');

var TreeNode = require('treenode').TreeNode;
var recursive = require('recursive-readdir');



recursive(PRIVATE_JSON_PATH, function(err, files) {
  if(err) {
    throw err;
  } else {
    var a = 1;
    files.forEach(function(file) {
      var inheritList = [];
      var fileObj = require(file);
      var newList = recursiveInherit(fileObj.list);
      fileObj.list = newList;

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
      gracefulFs.writeFile(__dirname+'/src/json/private/' + fileObj.name + ".json", JSON.stringify(fileObj, null, 2), 'utf8', function(err) {
        console.log("DONE");
      });
    });
  }
});

recursive(PUBLIC_JSON_PATH, function(err, files) {
  if(err) {
    throw err;
  } else {
    var a = 1;
    files.forEach(function(file) {
      var inheritList = [];
      var fileObj = require(file);
      var newList = recursiveInherit(fileObj.list);
      fileObj.list = newList;

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
      gracefulFs.writeFile(__dirname+'/src/json/public/' + fileObj.name + ".json", JSON.stringify(fileObj, null, 2), 'utf8', function(err) {
        console.log("DONE");
      });
    });
  }
});

// function recursiveInherit(list) {
//   var reducedObj = list.reduce(function(pre, ele) {
//     if(pre.name === ele.name) {
//       return {
//         name : pre.name,
//         parent: pre.parent || ele.parent,
//         children : pre.children.concat(ele.children),
//       };
//     } else {
//       return ele;
//     }
//   });
//   inheritList.push(reducedObj);
//
//   var newList = _.filter(list, function(ele) {
//     return (ele.name !== reducedObj.name);
//   });
//
//   if(newList.length) {
//     recursiveInherit(newList);
//   }
//   return inheritList;
// }
