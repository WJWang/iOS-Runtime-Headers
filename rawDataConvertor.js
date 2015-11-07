const PRIVATE_FRAMEWORKS_PATH = __dirname + '/PrivateFrameworks/';
const PUBLIC_FRAMEWORKS_PATH = __dirname + '/Frameworks/';
var _ = require('lodash');

var realFs = require('fs');
var gracefulFs = require('graceful-fs');

var Utils = require('./src/utils.js');
var recursive = require('recursive-readdir');


gracefulFs.readdir(PRIVATE_FRAMEWORKS_PATH, function(err, frameworkDirNameList) {
  if(err) {
    throw err;
  } else {
    frameworkDirNameList.forEach(function(frameworkDirName) {
      Utils.getFrameworkInherit(PRIVATE_FRAMEWORKS_PATH + frameworkDirName, frameworkDirName, function(result) {
        gracefulFs.writeFile(__dirname+'/src/json/private/' + frameworkDirName + ".json", JSON.stringify(result), 'utf8', function(err) {
          console.log("DONE ----- " +frameworkDirName+":" ,result);
        });
      });
    });
  }
});

gracefulFs.readdir(PUBLIC_FRAMEWORKS_PATH, function(err, frameworkDirNameList) {
  if(err) {
    throw err;
  } else {
    frameworkDirNameList.forEach(function(frameworkDirName) {
      Utils.getFrameworkInherit(PUBLIC_FRAMEWORKS_PATH + frameworkDirName, frameworkDirName, function(result) {
        gracefulFs.writeFile(__dirname+'/src/json/public/' + frameworkDirName + ".json", JSON.stringify(result), 'utf8', function(err) {
          console.log("DONE ----- " +frameworkDirName+":" ,result);
        });
      });
    });
  }
});
