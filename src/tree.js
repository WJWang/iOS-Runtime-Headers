var uid = require('uid');

var Tree = function(options) {
  this.id = uid(20);
  this.name = options.name;
  this.root = options.root;
  this.children = options.children;
};

Tree.prototype.isNodeExisted = function(node) {

};

Tree.prototype.merge = function(tree) {

};

module.exports = Tree;
