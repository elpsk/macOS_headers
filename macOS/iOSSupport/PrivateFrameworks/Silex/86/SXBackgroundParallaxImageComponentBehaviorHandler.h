//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Silex/SXComponentBehaviorHandler.h>

@class UIView;

@interface SXBackgroundParallaxImageComponentBehaviorHandler : SXComponentBehaviorHandler
{
    UIView *_windowedScrollContentView;
    double _originalYCenter;
    UIView *_clippingView;
    unsigned long long _viewHierarchyIndex;
    double _amplitude;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double amplitude; // @synthesize amplitude=_amplitude;
@property(nonatomic) unsigned long long viewHierarchyIndex; // @synthesize viewHierarchyIndex=_viewHierarchyIndex;
@property(retain, nonatomic) UIView *clippingView; // @synthesize clippingView=_clippingView;
@property(nonatomic) double originalYCenter; // @synthesize originalYCenter=_originalYCenter;
@property(retain, nonatomic) UIView *windowedScrollContentView; // @synthesize windowedScrollContentView=_windowedScrollContentView;
- (void)destroyWithBehaviorController:(id)arg1;
- (void)destroyWindowedScroll;
- (void)setupWindowedScroll;
- (void)updateWithBehaviorController:(id)arg1;
- (void)setupWithBehaviorController:(id)arg1;
- (id)initWithComponentView:(id)arg1 withBehavior:(id)arg2;

@end

