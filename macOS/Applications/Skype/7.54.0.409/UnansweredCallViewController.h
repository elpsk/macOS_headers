//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "BaseConversationViewController.h"

#import "SKPopoverMenuDelegate-Protocol.h"

@class GlyphButton, NSString, RoundImageView;

@interface UnansweredCallViewController : BaseConversationViewController <SKPopoverMenuDelegate>
{
    BOOL _dismissTelemetrySent;
    GlyphButton *_textMessageButton;
    GlyphButton *_videoMessageButton;
    GlyphButton *_retryButton;
    GlyphButton *_cancelButton;
    RoundImageView *_avatarView;
}

+ (id)keyPathsForValuesAffectingDescriptionString;
@property(getter=isDismissTelemetrySent) BOOL dismissTelemetrySent; // @synthesize dismissTelemetrySent=_dismissTelemetrySent;
@property(nonatomic) __weak RoundImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(nonatomic) __weak GlyphButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) __weak GlyphButton *retryButton; // @synthesize retryButton=_retryButton;
@property(nonatomic) __weak GlyphButton *videoMessageButton; // @synthesize videoMessageButton=_videoMessageButton;
@property(nonatomic) __weak GlyphButton *textMessageButton; // @synthesize textMessageButton=_textMessageButton;
- (void).cxx_destruct;
- (void)menuActionCall:(id)arg1;
- (void)menuActionDialNumber:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (void)cancelClick:(id)arg1;
- (void)videoMessageClick:(id)arg1;
- (void)textMessageClick:(id)arg1;
@property(readonly, nonatomic) NSString *statsLeaveReason;
@property(readonly, nonatomic) NSString *descriptionString;
- (unsigned long long)leaveReasonType;
- (void)sendDismissedTelemetry:(id)arg1;
- (void)setRepresentedObject:(id)arg1;
- (void)loadView;
- (void)dealloc;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

