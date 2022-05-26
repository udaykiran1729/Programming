$(document).ready(function(){
    $("button").click(function(){
        if ($("tabel tr td#availability").text()!="Available") {
            alert("The Book is not available");
        }
    });
});