//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVCaptureVideoSettings, AVWeakReference, NSArray;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVCaptureVideoDataOutputInternal : NSObject
{
    AVWeakReference *weakReferenceDelegate;
    NSObject<OS_dispatch_queue> *clientQueue;
    struct __CFDictionary *videoDecompressorUnits;
    struct __CFDictionary *videoFrameRateGovernorUnits;
    struct __CFDictionary *videoCompressorUnits;
    struct __CFDictionary *videoToProcsUnits;
    struct __CFDictionary *callbackData;
    AVCaptureVideoSettings *videoSettings;
    BOOL alwaysDiscardsLateVideoFrames;
    NSArray *availableVideoCVPixelFormatTypes;
    struct os_unfair_lock_s internalLock;
}

- (void)dealloc;
- (id)init;

@end

