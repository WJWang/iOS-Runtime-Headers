var treeNode = function(options) {
  this.name = options.name;
  this.data = options.data;
  this.parent = options.parent;
  this.childList = [];
};

treeNode.prototype.setParent = function(node) {
  this.parent = node;
};

treeNode.prototype.addChild = function(node) {
  this.childList.push(node);
};

module.exports  = treeNode;
