//
//  ModusEchoSwift.h
//  HelloWorld
//
//  Created by Ihor Rapalyuk on 6/2/17.
//
//

#import <Cordova/CDV.h>
#import <Cordova/CDVPlugin.h>

@interface Touch : CDVPlugin

- (void)showChat:(CDVInvokedUrlCommand*)command;

@end
