//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FRPageViewControllerScrollViewAccessibilityDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class FRPageViewControllerScrollView, NSMutableArray, NSString;
@protocol FRPageViewControllerDataSource, FRPageViewControllerDelegate;

@interface FRPageViewController : UIViewController <UIScrollViewDelegate, FRPageViewControllerScrollViewAccessibilityDelegate>
{
    BOOL _gestureEnabled;
    BOOL _cancelScrollViewDidScroll;
    BOOL _appeared;
    BOOL _isTransitioning;
    BOOL _scrollViewStartedScrolling;
    UIViewController *_visibleViewController;
    unsigned long long _numberOfLoadedViewControllers;
    id <FRPageViewControllerDataSource> _dataSource;
    id <FRPageViewControllerDelegate> _delegate;
    FRPageViewControllerScrollView *_scrollView;
    UIViewController *_managedForViewController;
    NSMutableArray *_previousViewControllers;
    NSMutableArray *_nextViewControllers;
    UIViewController *_possibleNextViewController;
    UIViewController *_originalVisibleViewController;
    UIViewController *_appearingViewController;
    UIViewController *_disappearingViewController;
    struct CGSize _transitioningSize;
}

@property(nonatomic) BOOL scrollViewStartedScrolling; // @synthesize scrollViewStartedScrolling=_scrollViewStartedScrolling;
@property(readonly, nonatomic) struct CGSize transitioningSize; // @synthesize transitioningSize=_transitioningSize;
@property(readonly, nonatomic) BOOL isTransitioning; // @synthesize isTransitioning=_isTransitioning;
@property(nonatomic) BOOL appeared; // @synthesize appeared=_appeared;
@property(nonatomic) BOOL cancelScrollViewDidScroll; // @synthesize cancelScrollViewDidScroll=_cancelScrollViewDidScroll;
@property(retain, nonatomic) UIViewController *disappearingViewController; // @synthesize disappearingViewController=_disappearingViewController;
@property(retain, nonatomic) UIViewController *appearingViewController; // @synthesize appearingViewController=_appearingViewController;
@property(retain, nonatomic) UIViewController *originalVisibleViewController; // @synthesize originalVisibleViewController=_originalVisibleViewController;
@property(retain, nonatomic) UIViewController *possibleNextViewController; // @synthesize possibleNextViewController=_possibleNextViewController;
@property(readonly, nonatomic) NSMutableArray *nextViewControllers; // @synthesize nextViewControllers=_nextViewControllers;
@property(readonly, nonatomic) NSMutableArray *previousViewControllers; // @synthesize previousViewControllers=_previousViewControllers;
@property(retain, nonatomic) UIViewController *managedForViewController; // @synthesize managedForViewController=_managedForViewController;
@property(readonly, nonatomic) FRPageViewControllerScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) BOOL gestureEnabled; // @synthesize gestureEnabled=_gestureEnabled;
@property(nonatomic) __weak id <FRPageViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <FRPageViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) unsigned long long numberOfLoadedViewControllers; // @synthesize numberOfLoadedViewControllers=_numberOfLoadedViewControllers;
@property(retain, nonatomic) UIViewController *visibleViewController; // @synthesize visibleViewController=_visibleViewController;
- (void).cxx_destruct;
- (BOOL)isTransitioningToViewController;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)transitionToSize:(struct CGSize)arg1;
- (void)accessibilityHandleRequestToGoForewardForPageViewControllerScrollView:(id)arg1;
- (void)accessibilityHandleRequestToGoBackForPageViewControllerScrollView:(id)arg1;
- (void)switchToPreviousViewController;
- (void)keyboardSwitchToPreviousViewController;
- (void)keyboardSwitchToNextViewController;
- (void)_keyboardSwitchGoingRight:(BOOL)arg1;
- (BOOL)canSwitchToNextViewController;
- (BOOL)canSwitchToPreviousViewController;
- (void)switchToNextViewController;
- (BOOL)_assistiveTechnologyIsRunning;
- (BOOL)_shouldIgnoreDidScrollWithScrollView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)callLastViewAppearanceMethods;
- (void)_handleScrollEnd;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)reindexViewControllers;
- (void)addViewController:(id)arg1;
- (void)removeViewController:(id)arg1;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)setCenterOfViewController:(id)arg1;
- (void)managePreviousAndNextViewController;
- (void)fixAllCenters;
- (struct CGPoint)centerForIndex:(unsigned long long)arg1;
- (void)updateContentOffset;
- (void)updateContentSize;
- (void)updateScrollView;
@property(readonly, nonatomic) struct CGSize pageSize;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)ppt_scrollView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

