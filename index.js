const PRIVATE_JSON_PATH = __dirname + '/src/json/private/';
const PUBLIC_JSON_PATH = __dirname + '/src/json/public/';

var _ = require('lodash');
var realFs = require('fs');
var gracefulFs = require('graceful-fs');

var recursive = require('recursive-readdir');

recursive(PRIVATE_JSON_PATH, function(err, files) {
  files.forEach(function(file) {
    var frameworkObj = require(file);
    console.log(frameworkObj.name);
  });
});


var tmp = {
  name:"frameEorkName",
  list: [
    {
      father:"FatherClassName",
      childList: ["childClassName",""]
    },
  ]
};
