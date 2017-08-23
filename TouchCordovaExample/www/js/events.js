(function(window){

    $('#start_chat0').click(function(){
        var success = function(message) {
            alert(message);
        }

        var failure = function(message) {
            alert(message);
        }
        // clickatell API provides list of available tenants, use index to show chat with selected tenant
        window.Touch.start_chat(0, success, failure);
    });

    $('#start_chat1').click(function(){
        var success = function(message) {
            alert(message);
        }

        var failure = function(message) {
            alert(message);
        }
        // clickatell API provides list of available tenants, use index to show chat with selected tenant
        window.Touch.start_chat(1, success, failure);
    });

})(window);

function alertDismissed() {
    console.log("oops");
}
