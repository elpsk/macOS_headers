//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MailSupport/MSTriageAction.h>

@class ECMessageFlagChange, EMMailbox;

@interface MSMoveTriageAction : MSTriageAction
{
    EMMailbox *_destinationMailbox;
    long long _destinationMailboxType;
    ECMessageFlagChange *_flagChange;
    BOOL _copyMessages;
}

- (void).cxx_destruct;
- (id)_changeAction;
- (id)initWithMessageListSelection:(id)arg1 destinationMailboxType:(long long)arg2 flagChange:(id)arg3 copyMessages:(BOOL)arg4;
- (id)initWithMessageListSelection:(id)arg1 destinationMailbox:(id)arg2 flagChange:(id)arg3 copyMessages:(BOOL)arg4;

@end

