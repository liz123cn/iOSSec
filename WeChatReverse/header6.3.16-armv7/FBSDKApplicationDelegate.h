//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FBSDKApplicationDelegate : NSObject
{
    id <FBSDKURLOpening> _pendingURLOpen;
    BOOL _expectingResign;
    BOOL _active;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_init;
- (BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (BOOL)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)dealloc;
- (id)init;
@property(readonly, nonatomic, getter=isActive) BOOL active; // @synthesize active=_active;
- (BOOL)openURL:(id)arg1 sender:(id)arg2;

@end
