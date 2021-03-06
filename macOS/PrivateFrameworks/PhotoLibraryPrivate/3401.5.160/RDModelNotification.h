//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LiAddressList, NSDate, NSSet, RDModelLoadOptions;
@protocol OS_dispatch_group;

@interface RDModelNotification : NSObject
{
    NSObject<OS_dispatch_group> *_workGroup;
    unsigned long long _cachedHash;
    NSDate *_createdDate;
    BOOL _mergedSome;
    unsigned int _deliveryQOS;
    LiAddressList *_modelAddressList;
    RDModelLoadOptions *_loadOptions;
    SEL _coalescingSelector;
    NSSet *_coalescingKeyPaths;
}

@property(retain) NSSet *coalescingKeyPaths; // @synthesize coalescingKeyPaths=_coalescingKeyPaths;
@property SEL coalescingSelector; // @synthesize coalescingSelector=_coalescingSelector;
@property(readonly) unsigned int deliveryQOS; // @synthesize deliveryQOS=_deliveryQOS;
@property(readonly, nonatomic) RDModelLoadOptions *loadOptions; // @synthesize loadOptions=_loadOptions;
@property(readonly, nonatomic) LiAddressList *modelAddressList; // @synthesize modelAddressList=_modelAddressList;
- (void).cxx_destruct;
- (void)waitForCoalescingBeforeDispatchingBlock:(CDUnknownBlockType)arg1;
- (void)notifyAfterWork:(CDUnknownBlockType)arg1;
- (void)endAsyncWork;
- (void)beginAsyncWork;
- (id)modelIdEnumerator;
- (void)mergeModels:(id)arg1;
- (BOOL)includesModelId:(unsigned long long)arg1;
- (void)modelObjectsWithLoadOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)modelObjectsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)modelObject:(unsigned long long)arg1 withLoadOptions:(id)arg2;
- (id)modelObject:(unsigned long long)arg1;
- (unsigned long long)modelCount;
- (id)modelObjects;
- (id)table;
- (id)database;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithTable:(id)arg1 modelIds:(id)arg2;
- (id)initWithModels:(id)arg1;

@end

