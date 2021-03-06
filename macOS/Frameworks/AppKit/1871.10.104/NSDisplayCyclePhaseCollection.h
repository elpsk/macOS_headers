//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMapTable, NSPointerArray;

__attribute__((visibility("hidden")))
@interface NSDisplayCyclePhaseCollection : NSObject
{
    unsigned long long _changeCount;
    NSMapTable *_earlierPhasesByPhase;
    NSPointerArray *_orderedPhases;
    struct _opaque_pthread_mutex_t _lock;
}

+ (id)globalCollection;
@property(readonly) NSArray *orderedPhases;
- (void)addPhase:(id)arg1;
@property(readonly) unsigned long long changeCount;
- (void)dealloc;
- (id)init;

@end

