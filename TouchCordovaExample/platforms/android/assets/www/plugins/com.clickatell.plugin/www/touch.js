cordova.define("com.clickatell.plugin.Touch", function(require, exports, module) {
/*global cordova, module*/

module.exports = {
    start_chat: function (tenantIndex, successCallback, errorCallback) {
        cordova.exec(successCallback, errorCallback, "Touch", "showChat", [tenantIndex]);
    }
};

});
