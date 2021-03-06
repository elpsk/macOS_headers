//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SidecarCore/NSProgressReporting-Protocol.h>

@class NSArray, NSProgress, NSString, SidecarSession;
@protocol SidecarTransferDelegate;

__attribute__((visibility("hidden")))
@interface SidecarTransfer : NSObject <NSProgressReporting>
{
    id <SidecarTransferDelegate> _delegate;
    NSProgress *_progress;
    long long _requestID;
    SidecarSession *_session;
    long long _transferID;
    long long _type;
    NSArray *_items;
}

@property(nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) long long transferID; // @synthesize transferID=_transferID;
@property(readonly, nonatomic) long long requestID; // @synthesize requestID=_requestID;
@property(readonly, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) __weak id <SidecarTransferDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setItems:(id)arg1;
- (id)dataForType:(id)arg1;
@property(readonly, nonatomic) SidecarSession *session;
- (id)initWithSession:(id)arg1 requestID:(long long)arg2;
- (id)initWithSession:(id)arg1 requestID:(long long)arg2 transferID:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

