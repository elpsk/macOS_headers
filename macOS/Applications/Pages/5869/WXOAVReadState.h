//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "OAVReadState.h"

@class NSMutableDictionary, WDParagraph, WXReadState;

@interface WXOAVReadState : OAVReadState
{
    WDParagraph *mParagraph;
    NSMutableDictionary *mNextVmlShapeIdToTextBoxMap;
    WXReadState *_wxReadState;
}

@property(nonatomic) __weak WXReadState *wxReadState; // @synthesize wxReadState=_wxReadState;
- (void).cxx_destruct;
- (id)nextVmlShapeIdToTextBoxMap;
- (void)setCurrentParagraph:(id)arg1;
- (id)currentParagraph;
- (id)initWithWXReadState:(id)arg1;

@end

