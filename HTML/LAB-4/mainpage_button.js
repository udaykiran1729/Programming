$(document).ready(function(){
    $("button").click(function(){
        if ($("td#availability").text()!="Available") {
            alert("The Book is not available");
            
        }
    });
});x