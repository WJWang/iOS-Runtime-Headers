const PRIVATE_FRAMEWORKS_PATH = __dirname + '/PrivateFrameworks/';

var _ = require('lodash');

var realFs = require('fs');
var gracefulFs = require('graceful-fs');

var Utils = require('./src/utils.js');
var recursive = require('recursive-readdir');

recursive(PRIVATE_FRAMEWORKS_PATH, function(err, frameworkDirNameList) {
  if(err) {
    throw err;
  } else {
    // console.log(frameworkDirNameList);
    // frameworkDirNameList.forEach(function(frameworkDirName) {
    //
    //   var tmp = frameworkDirName.split(".");
    //   recursive(PRIVATE_FRAMEWORKS_PATH +'/'+ frameworkDirName, function(err, frameworkClassNameList) {
    //     console.log(frameworkClassNameList);
    gracefulFs.writeFile(__dirname+'/src/json/PrivateFrameworksNameList/PrivateFrameworksNameList.json', JSON.stringify(frameworkDirNameList, null, 2), 'utf8', function(err) {
      console.log(__dirname);
      // console.log("DONE ----- " );
    });
    //   });
    // });
  }
});
