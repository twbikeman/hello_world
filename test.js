var fs = require('fs');
fs.readFile('play.json','utf8',function(err, contents){
  console.log(contents);
});
