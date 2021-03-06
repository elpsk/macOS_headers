//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface DisruptiveUISuppressionManager : NSObject
{
    NSMutableArray *_requestQueue;
    BOOL _showingSheet;
    BOOL _suppress;
    BOOL _didConsumeFreebie;
}

@property(nonatomic) BOOL didConsumeFreebie; // @synthesize didConsumeFreebie=_didConsumeFreebie;
@property(nonatomic, getter=shouldSuppress) BOOL suppress; // @synthesize suppress=_suppress;
@property(nonatomic, getter=isShowingSheet) BOOL showingSheet; // @synthesize showingSheet=_showingSheet;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *requestQueue;
- (id)dequeueRequest;
- (void)enqueueRequest:(id)arg1;
- (void)clearQueue;
- (void)reset;
- (id)init;

@end

