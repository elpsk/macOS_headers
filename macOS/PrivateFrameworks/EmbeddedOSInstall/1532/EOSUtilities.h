//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface EOSUtilities : NSObject
{
}

+ (void)initializeRestoreLogging;
+ (BOOL)isRunningAppleInternalBuild;
+ (BOOL)isOnAppleInternalNetwork;
+ (BOOL)isInSafeBootMode;
+ (id)bootArgs;
+ (id)sandboxURLWithLabel:(id)arg1;
+ (id)signedManifestFromRestoreOptions:(id)arg1;
+ (id)personalizedURLsInBundle:(id)arg1;

@end

