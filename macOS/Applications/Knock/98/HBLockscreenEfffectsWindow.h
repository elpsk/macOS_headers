//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "NSWindowDelegate-Protocol.h"

@class HBAvatarView, NSDate, NSString, NSView;

@interface HBLockscreenEfffectsWindow : NSWindowController <NSWindowDelegate>
{
    NSView *_view;
    HBAvatarView *_avatarView;
    id _eventMonitor;
    struct _NSModalSession *_session;
    CDUnknownBlockType _selectServiceSuccessBlock;
    unsigned long long _coalesceCount;
    id _activityToken;
    NSDate *_dateWindowWentOnScreen;
    double _intervalWindowStayedOnScreen;
}

+ (id)sharedInstance;
@property double intervalWindowStayedOnScreen; // @synthesize intervalWindowStayedOnScreen=_intervalWindowStayedOnScreen;
@property(retain) NSDate *dateWindowWentOnScreen; // @synthesize dateWindowWentOnScreen=_dateWindowWentOnScreen;
@property(retain) id activityToken; // @synthesize activityToken=_activityToken;
@property unsigned long long coalesceCount; // @synthesize coalesceCount=_coalesceCount;
@property(copy, nonatomic) CDUnknownBlockType selectServiceSuccessBlock; // @synthesize selectServiceSuccessBlock=_selectServiceSuccessBlock;
@property(nonatomic) struct _NSModalSession *session; // @synthesize session=_session;
@property(nonatomic) id eventMonitor; // @synthesize eventMonitor=_eventMonitor;
@property HBAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property NSView *view; // @synthesize view=_view;
- (void)reloadViews;
- (void)windowDidLoad;
- (void)awakeFromNib;
- (void)dealloc;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)showTouchLockSuccessAnimation;
- (void)peripheralWasKnocked;
@property(readonly) double intervalWindowStayedOrHasBeenOnScreen;
- (void)_closeWindow;
- (void)hideWindow;
- (void)placeWindow;
- (void)showWindow;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

