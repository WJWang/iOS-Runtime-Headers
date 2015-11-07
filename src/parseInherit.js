var fs = require('fs');
var Inherit = function(filePath) {
  this.filePath = filePath;
};

Inherit.prototype.getResult = function (cb) {
  fs.open(this.filePath, 'r', function(err, data) {
    console.log(err, data);
  });
};

modules.export = Inherit;
