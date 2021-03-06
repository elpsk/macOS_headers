//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSResponder.h>

#import "InviteViewControllerDelegate-Protocol.h"

@class FTOutgoingCallInfo, NSString, TUCall;
@protocol AVControllerDelegateProtocol;

@interface AVController : NSResponder <InviteViewControllerDelegate>
{
    BOOL _provisionallyMuted;
    BOOL _isShowingShareKit;
    id <AVControllerDelegateProtocol> _delegate;
    TUCall *_call;
    TUCall *_onHoldCall;
    FTOutgoingCallInfo *_outgoingCall;
}

+ (void)addReminderForCall:(id)arg1 withTimeIntervalSinceNow:(double)arg2 completionBlock:(CDUnknownBlockType)arg3;
@property(nonatomic) BOOL isShowingShareKit; // @synthesize isShowingShareKit=_isShowingShareKit;
@property(nonatomic) BOOL provisionallyMuted; // @synthesize provisionallyMuted=_provisionallyMuted;
@property(retain, nonatomic) FTOutgoingCallInfo *outgoingCall; // @synthesize outgoingCall=_outgoingCall;
@property(retain, nonatomic) TUCall *onHoldCall; // @synthesize onHoldCall=_onHoldCall;
@property(retain, nonatomic) TUCall *call; // @synthesize call=_call;
@property(nonatomic) __weak id <AVControllerDelegateProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)inviteViewController:(id)arg1 remindMeAfter:(double)arg2;
- (void)inviteViewControllerRequestedMessageUI:(id)arg1;
- (void)inviteViewControllerMessageCanceled:(id)arg1;
- (void)inviteViewController:(id)arg1 sendMessage:(id)arg2;
- (void)inviteViewControllerDeclined:(id)arg1;
- (void)inviteViewControllerAccepted:(id)arg1;
- (BOOL)windowShouldClose:(id)arg1;
- (void)sendDeclineWithMessageMessage;
- (void)dismissDeclineWithMessageUI;
- (void)requestDeclineWithMessageUI;
- (void)toggleMute;
- (void)updateUI;
- (void)exitFullscreen;
- (BOOL)isWindowFullScreen;
- (BOOL)isFullscreen;
- (BOOL)hasReplyWithMessageUI;
- (BOOL)hasCallPromptUI;
- (BOOL)hasFailureUI;
- (void)dismissFailureOrCallPromptUI;
- (void)showCallPrompt:(id)arg1;
- (void)putCurrentCallOnHoldAndAddCall:(id)arg1;
- (void)notifyHasSetupAV;
- (id)window;
- (void)showWindow;
- (void)showWindowAsNotification;
- (void)close;
- (BOOL)receiveInvitationFrom:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

