//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class INCExtensionConnection;

@interface INCAppProxy : NSObject
{
    INCExtensionConnection *_connection;
}

+ (BOOL)shouldLaunchAppInBackgroundWithIntent:(id)arg1 intentResponse:(id)arg2;
+ (void)initialize;
@property(readonly, nonatomic) __weak INCExtensionConnection *_connection; // @synthesize _connection;
- (void).cxx_destruct;
- (id)_initWithConnection:(id)arg1;
- (void)launchAppInBackground:(BOOL)arg1 restrictAppsToCarPlay:(BOOL)arg2 userActivityIdentifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)launchAppInBackground:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

