const PRIVATE_JSON_PATH = __dirname + '/src/json/private/';
const PUBLIC_JSON_PATH = __dirname + '/src/json/public/';


var _ = require('lodash');
var realFs = require('fs');
var gracefulFs = require('graceful-fs');
var uid = require('uid');

var Tree = require('./src/tree.js');
var recursive = require('recursive-readdir');

//1. Get all files and turn all list element
// to Tree and maintain in one array "OTL"

//2. Set recursive function should to the folling things by itertate
// the OTL
// 0.new List
//    recursive()
//     1.do reduce and return new Merge tree and remove trees in OTL or
//      origin tree and 0 remove trees in OTL
// 1.push redurn element in new List
// and remove trees in OTL use remain OTL do second recursive
// 2.DONE rule whel OTL length = 0;
