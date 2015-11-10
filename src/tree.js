var uid = require('uid');

var Tree = function(options) {
  this.name = options.name;
  this.children = options.children;
};

Tree.prototype.findChild = function(name, cb) {
  var list = [];
  this.children.forEach(function(child, idx) {
    if(child.name === name) {
      child.index = idx;
      list.push(child);
    }
  });
  cb(list);
};

Tree.prototype.setChildNode = function(childNodeIdx, newNode) {
  this.children[childNodeIdx].children.push(newNode);
};

Tree.merge = function(tree1, tree2, cb) {
  //traversal tree1
    //treversal tree2
      //compare node name
        //same name
          // do merger and cb([tree1])
        //do nothing
  //DONE traversal cb([tree1, tree2])

};
module.exports = Tree;
