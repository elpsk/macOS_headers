//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WorkflowNode-Protocol.h"

@class Device, NSString, NSThread, ProgressMessage;
@protocol DeviceTolerantMessagingNodeDelegate, WorkflowNodeDelegate;

@interface DeviceTolerantMessagingNode : NSObject <WorkflowNode>
{
    int tolerance;
    Device *device;
    ProgressMessage *progressMessage;
    Device *secondDevice;
    NSThread *processThread;
    id <WorkflowNodeDelegate> delegates;
    id <DeviceTolerantMessagingNodeDelegate> _delegateDeviceTolerance;
}

@property(nonatomic) __weak id <DeviceTolerantMessagingNodeDelegate> delegateDeviceTolerance; // @synthesize delegateDeviceTolerance=_delegateDeviceTolerance;
@property(retain) id <WorkflowNodeDelegate> delegates; // @synthesize delegates;
@property(retain) NSThread *processThread; // @synthesize processThread;
@property(retain) Device *secondDevice; // @synthesize secondDevice;
@property(retain) ProgressMessage *progressMessage; // @synthesize progressMessage;
@property int tolerance; // @synthesize tolerance;
@property(retain) Device *device; // @synthesize device;
- (void).cxx_destruct;
- (void)waitForDevice:(float)arg1 range:(float)arg2 progressOffset:(float)arg3;
- (void)onErrored:(id)arg1;
- (void)onProgress:(float)arg1;
- (void)onFinished;
- (void)onTryAgain:(id)arg1;
- (void)onTooManyAttempt;
- (unsigned long long)onCalculateMaxRetries;
- (void)onLoggableStartAttempt;
- (id)getTitle;
- (void)cancel;
- (void)startWithContext:(id)arg1;
- (void)start;
- (id)initWithDelegate:(id)arg1 withDevice:(id)arg2 withSecondDevice:(id)arg3 tolerance:(int)arg4;
- (id)initWithDelegate:(id)arg1 withDevice:(id)arg2 tolerance:(int)arg3;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

