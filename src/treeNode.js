var treeNode = function(options) {
  this.name = options.name;
  this.children = [];
};

treeNode.prototype.setParent = function(node) {
  this.parent = node;
};

treeNode.prototype.addChild = function(node) {
  this.childList.push(node);
};

module.exports  = treeNode;
