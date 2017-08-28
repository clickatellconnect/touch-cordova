package com.clickatell.plugin;

import org.apache.cordova.*;
import android.content.Intent;
import org.json.JSONArray;
import org.json.JSONException;
import com.clickatell.chatsecure.androidsdk.sdk2.TouchSdk;
import com.clickatell.chatsecure.androidsdk.ChatActivity;
import android.app.Activity;
import com.clickatell.chatsecure.androidsdk.sdk2.model.Tenant;
import com.clickatell.chatsecure.androidsdk.ChatActivity;
import com.clickatell.chatsecure.androidsdk.data.model.ChatModel;
import com.clickatell.chatsecure.androidsdk.sdk2.PersistenceService;
import com.clickatell.chatsecure.androidsdk.sdk2.api.ApiCall;
import com.clickatell.chatsecure.androidsdk.sdk2.api.Callback;
import com.clickatell.chatsecure.androidsdk.utils.Configuration;
import com.clickatell.chatsecure.androidsdk.services.XMPPService;

import java.util.Arrays;
import java.util.List;

import android.util.Log;
import android.support.annotation.NonNull;

public class Touch extends CordovaPlugin {
    private static final String TAG = Touch.class.getSimpleName();

    Activity mActivity;

    @Override
    public void initialize(CordovaInterface cordova, CordovaWebView webView) {
        super.initialize(cordova, webView);
        mActivity = cordova.getActivity();
        String clickatellToken = preferences.getString("clickatell_token", "");
        Log.v(TAG, "clickatellToken " + clickatellToken);
        TouchSdk.LOG = true;
        Configuration configuration = new Configuration(mActivity.getApplication());
        configuration.selectedEnvironment().setToken(clickatellToken);
        TouchSdk.getInstance().install(mActivity.getApplication(), configuration);
    }

    @Override
    public boolean execute(String action, JSONArray data, CallbackContext callbackContext) throws JSONException {
        if (action.equals("showChat")) {
            fetchTenants(data.optInt(0, 0));
            return true;
        } else {
            return false;
        }
    }

    private void fetchTenants(final int tenantIndex) {
        ApiCall<List<Tenant>> apiCall = TouchSdk.getInstance().service().tenants();
        apiCall.enqueue(new Callback<List<Tenant>>() {
            @Override
            public void onSuccess(@NonNull List<Tenant> tenants) {
                Log.d(TAG, "tenants " + Arrays.asList(tenants.toArray()));
                if (tenants.size() > tenantIndex) {
                    ChatActivity.startActivity(mActivity/*activity or fragment*/, tenants.get(tenantIndex));
                }
            }

            @Override
            public void onError(Throwable throwable) {
                Log.e(TAG, "tenants call error", throwable);
            }
        });

        //To cancel request(e.g, when activity/fragment is no longer available)
        //apiCall.cancel();
    }

    @Override
    public void onDestroy() {
        mActivity.stopService(new Intent(mActivity, XMPPService.class));
    }

}
