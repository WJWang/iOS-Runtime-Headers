const PRIVATE_JSON_PATH = __dirname + '/src/json/private/';
const PUBLIC_JSON_PATH = __dirname + '/src/json/public/';


var _ = require('lodash');
var realFs = require('fs');
var gracefulFs = require('graceful-fs');
var uid = require('uid');

var Tree = require('./src/tree.js');
var recursive = require('recursive-readdir');

var Weather = require('./src/json/private/Weather.framework.json');


var WeatherInheritList = Weather.list;
var treeList = WeatherInheritList.map(function(element) {
  return new Tree(element);
});

var tree = new Tree(WeatherInheritList[0]);
// console.log(tree);
tree.findChild('WeatherXMLHTTPRequest', function(data) {
  // console.log(data);
  tree.setChildNode(data[0].index, {name:'test'});
  console.log(tree);
});
