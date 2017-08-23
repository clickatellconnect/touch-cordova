cordova.define('cordova/plugin_list', function(require, exports, module) {
module.exports = [
    {
        "id": "com.clickatell.plugin.plugin",
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
    "com.clickatell.plugin": "0.0.18",
    "me.tonny.cordova.plugins.multidex": "0.1.0"
};
// BOTTOM OF METADATA
});