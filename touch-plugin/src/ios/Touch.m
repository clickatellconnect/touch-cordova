//
//  ModusEchoSwift.m
//  HelloWorld
//
//  Created by Ihor Rapalyuk on 6/2/17.
//
//

#import "Touch.h"
#import <Cordova/CDV.h>
@import TouchSDK;

@implementation Touch

- (void)showChat:(CDVInvokedUrlCommand*)command
{
    //TODO
//    NSString* clickatellToken = [self.commandDelegate.settings objectForKey:[@"clickatell_token" lowercaseString]];
    
    ChatViewController *chatViewController = [[ChatViewController alloc] init];
    
    [self.viewController presentViewController:chatViewController animated:YES completion:^{
        [ServiceLocator getTenants:^(NSArray<Tenant *> * _Nonnull tennets) {
            int tenantIndex = [command.arguments[0] intValue];
            [chatViewController join:tennets[tenantIndex]];
        }];
        
    }];
}

@end
