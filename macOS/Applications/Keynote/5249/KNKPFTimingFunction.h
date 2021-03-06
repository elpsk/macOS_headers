//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KNKPFReading-Protocol.h"

@class NSArray, NSString;

@interface KNKPFTimingFunction : NSObject <KNKPFReading>
{
    long long _timingFunction;
    NSArray *_timingControlPoints;
}

+ (id)timingFunctionName:(long long)arg1;
@property(copy, nonatomic) NSArray *timingControlPoints; // @synthesize timingControlPoints=_timingControlPoints;
@property(nonatomic) long long timingFunction; // @synthesize timingFunction=_timingFunction;
- (void)sfu_appendJsonStringToString:(id)arg1;
- (void)addToAnimation:(id)arg1;
- (BOOL)readFromKPFDictionary:(id)arg1 error:(out id *)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

