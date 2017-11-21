//
//  AppDelegate.m
//  air
//
//  Created by kuzindmitry on 17.10.2017.
//  Copyright © 2017 kuzindmitry. All rights reserved.
//

#import "AppDelegate.h"
#import "DataManager.h"
#import "TabBarController.h"
#import "NotificationCenter.h"

@interface AppDelegate ()

@end

@implementation AppDelegate


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {

    CGRect windowFrame = [[UIScreen mainScreen] bounds];
    self.window = [[UIWindow alloc] initWithFrame: windowFrame];
    
    TabBarController *tabBarController = [[TabBarController alloc] init];
    
    self.window.rootViewController = tabBarController;
    [self.window makeKeyAndVisible];
    
    [[NotificationCenter sharedInstance] registerService];
    
    return YES;
}

- (void)application:(UIApplication *)application didReceiveLocalNotification:(UILocalNotification *)notification {
    
}

@end
