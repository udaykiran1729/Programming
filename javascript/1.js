const http=require ("http");

http.createServer(function(req,res){
    res.writeHeader(200,{'Content-type':'type/HTML'});
    res.write("Hello Brooo");
    res.end();
}).listen(8080);