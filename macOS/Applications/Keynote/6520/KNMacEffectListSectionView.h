//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSStackView.h"

@class KNMacEffectListSectionViewController, NSArray;

@interface KNMacEffectListSectionView : NSStackView
{
    double _instrisicHeight;
    BOOL _mouseIsOver;
    KNMacEffectListSectionViewController *_viewController;
}

@property(nonatomic) BOOL mouseIsOver; // @synthesize mouseIsOver=_mouseIsOver;
@property(nonatomic) __weak KNMacEffectListSectionViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (id)updateMouseIsOverForMousePoint:(struct CGPoint)arg1;
- (id)p_hitButtonViewForHitView:(id)arg1;
- (void)p_clearMouseIsOverInAllButtonViewsExcept:(id)arg1;
- (void)clearMouseIsOver;
- (struct CGSize)intrinsicContentSize;
- (void)setViews:(id)arg1 inGravity:(long long)arg2;
@property(readonly, nonatomic) NSArray *buttonViews;

@end

