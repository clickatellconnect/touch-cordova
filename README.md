# Touch Cordova

## Cordova sample application

To use Touch SDK in a Cordova project, you will use cordova plugin
1. Use touch-plugin from this repository
2. Add plugin to your project, run command
cordova plugin add “path to plugin”\touch-plugin
3. Due to that fact that Touch SDK exceeds methods limit it is required to add multidex support to your app, doc can be found here - https://developer.android.com/studio/build/multidex.html.

For Cordova apps you could use this plugin https://github.com/jwall149/cordova-multidex

4. Before you run your app, you'll need to add your Clickatell token to config.xml .
```xml
<preference name="clickatell_token" value="your token here" />
```
Now installation process is finished.

## Public API

To start chat screen with selected tenant, you have to run such code
```JavaScript
window.Touch.start_chat(tenant_index, success, failure);
```
Where tenant_index is index in the received list of tenants
