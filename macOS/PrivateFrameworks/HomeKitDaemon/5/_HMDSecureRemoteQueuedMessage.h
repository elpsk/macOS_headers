//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMFObject.h"

@class HMDRemoteMessage, HMFTimer, NSArray, NSString;

@interface _HMDSecureRemoteQueuedMessage : HMFObject <HMFObject>
{
    HMDRemoteMessage *_message;
    HMFTimer *_timer;
}

@property(readonly, nonatomic) HMFTimer *timer; // @synthesize timer=_timer;
@property(readonly, nonatomic) HMDRemoteMessage *message; // @synthesize message=_message;
- (void).cxx_destruct;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly, copy) NSString *shortDescription;
- (id)initWithMessage:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *privateDescription;
@property(readonly) Class superclass;

@end

