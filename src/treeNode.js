var treeNode = function(options) {
  this.name = options.name;
  this.parent = options.parent;
};

treeNode.prototype.mergeSameParent = function(node) {
  if(ndoe.parent && this.parent && this.parent === node.parent ) {
    return new treeNode();
  } else {
    
  }
};

modules.export = treeNode;
