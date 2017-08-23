cordova.define('cordova/plugin_list', function(require, exports, module) {
module.exports = [
    {
        "id": "com.clickatell.plugin.Touch",
        "file": "plugins/com.clickatell.plugin/www/touch.js",
        "pluginId": "com.clickatell.plugin",
        "clobbers": [
            "Touch"
        ]
    }
];
module.exports.metadata = 
// TOP OF METADATA
{
    "me.tonny.cordova.plugins.multidex": "0.1.0",
    "cordova-plugin-cocoapod-support": "1.3.0",
    "com.clickatell.plugin": "0.0.18"
};
// BOTTOM OF METADATA
});