//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSImageView, NSTextField;

@interface LoginIconNotificationImageView : NSView
{
    NSImageView *_userImage;
    NSTextField *_userNameLabel;
    NSTextField *_enterPasswordLabel;
    NSImageView *_nearLockIconImage;
}

@property(retain, nonatomic) NSImageView *nearLockIconImage; // @synthesize nearLockIconImage=_nearLockIconImage;
@property(retain, nonatomic) NSTextField *enterPasswordLabel; // @synthesize enterPasswordLabel=_enterPasswordLabel;
@property(retain, nonatomic) NSTextField *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(retain, nonatomic) NSImageView *userImage; // @synthesize userImage=_userImage;
- (void).cxx_destruct;
- (double)alphaForNearLockOn:(BOOL)arg1;
- (void)showNearLockIcon:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setupView;

@end

