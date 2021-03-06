//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCache.h"

@class NSOperationQueue;

@interface FLUImageCache : NSCache
{
    NSCache *_cache;
    NSOperationQueue *_queue;
}

+ (void)destroy;
+ (id)shared;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSCache *cache; // @synthesize cache=_cache;
- (void).cxx_destruct;
- (void)purge;
- (void)imageForMediaVersion:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end

