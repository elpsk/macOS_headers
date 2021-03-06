//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RCSerializable.h"

@class NSArray, NSString;

@interface RCDebugOverrides : NSObject <RCSerializable>
{
    BOOL _disableAbTesting;
    BOOL _ignoreCache;
    BOOL _enableExtraLogs;
    NSArray *_overrideSegmentSetIDs;
    NSArray *_additionalSegmentSetIDs;
    unsigned long long _configurationSource;
    unsigned long long _debugEnvironment;
}

+ (id)defaultDebugOverrides;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL enableExtraLogs; // @synthesize enableExtraLogs=_enableExtraLogs;
@property(readonly, nonatomic) BOOL ignoreCache; // @synthesize ignoreCache=_ignoreCache;
@property(readonly, nonatomic) unsigned long long debugEnvironment; // @synthesize debugEnvironment=_debugEnvironment;
@property(readonly, nonatomic) unsigned long long configurationSource; // @synthesize configurationSource=_configurationSource;
@property(readonly, copy, nonatomic) NSArray *additionalSegmentSetIDs; // @synthesize additionalSegmentSetIDs=_additionalSegmentSetIDs;
@property(readonly, copy, nonatomic) NSArray *overrideSegmentSetIDs; // @synthesize overrideSegmentSetIDs=_overrideSegmentSetIDs;
@property(readonly, nonatomic) BOOL disableAbTesting; // @synthesize disableAbTesting=_disableAbTesting;
@property(readonly, nonatomic) BOOL onlyUseFallbackURL;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithDisableAbTesting:(BOOL)arg1 overrideSegmentSetIDs:(id)arg2 additionalSegmentSetIDs:(id)arg3 configurationSource:(unsigned long long)arg4 debugEnvironment:(unsigned long long)arg5 ignoreCache:(BOOL)arg6 enableExtraLogs:(BOOL)arg7;
- (id)initWithDisableAbTesting:(BOOL)arg1 overrideSegmentSetIDs:(id)arg2 additionalSegmentSetIDs:(id)arg3 configurationSource:(unsigned long long)arg4 debugEnvironment:(unsigned long long)arg5 ignoreCache:(BOOL)arg6;
- (id)initWithDisableAbTesting:(BOOL)arg1 overrideSegmentSetIDs:(id)arg2 additionalSegmentSetIDs:(id)arg3 onlyUseFallbackURL:(BOOL)arg4 debugEnvironment:(unsigned long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

