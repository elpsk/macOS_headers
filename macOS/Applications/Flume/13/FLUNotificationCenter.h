//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSUserNotificationCenterDelegate.h"

@class FLUManagedObjectContext, NSSet, NSString, NSTimer;

@interface FLUNotificationCenter : NSObject <NSUserNotificationCenterDelegate>
{
    BOOL _ignoreModifiedObjectsNotification;
    FLUManagedObjectContext *_moc;
    NSSet *_queuedActivityNotifications;
    NSSet *_queuedMediaNotifications;
    NSSet *_queuedUserNotifications;
    NSTimer *_queuedNotificationTimer;
    NSTimer *_dockBadgeTimer;
}

+ (id)shared;
@property(retain, nonatomic) NSTimer *dockBadgeTimer; // @synthesize dockBadgeTimer=_dockBadgeTimer;
@property(retain, nonatomic) NSTimer *queuedNotificationTimer; // @synthesize queuedNotificationTimer=_queuedNotificationTimer;
@property(retain, nonatomic) NSSet *queuedUserNotifications; // @synthesize queuedUserNotifications=_queuedUserNotifications;
@property(retain, nonatomic) NSSet *queuedMediaNotifications; // @synthesize queuedMediaNotifications=_queuedMediaNotifications;
@property(retain, nonatomic) NSSet *queuedActivityNotifications; // @synthesize queuedActivityNotifications=_queuedActivityNotifications;
@property(nonatomic) BOOL ignoreModifiedObjectsNotification; // @synthesize ignoreModifiedObjectsNotification=_ignoreModifiedObjectsNotification;
@property(retain, nonatomic) FLUManagedObjectContext *moc; // @synthesize moc=_moc;
- (void).cxx_destruct;
- (id)authorNamesWithMaxNumberOfParticipants:(long long)arg1 forMedia:(id)arg2;
- (id)authorNamesWithMaxNumberOfParticipants:(long long)arg1 forUsers:(id)arg2;
- (void)postNotificationForType:(unsigned long long)arg1 title:(id)arg2 description:(id)arg3 image:(id)arg4 identityImage:(id)arg5 soundFilename:(id)arg6 showButtons:(BOOL)arg7 showReplyButton:(BOOL)arg8 userInfo:(id)arg9;
- (void)shouldPostQueuedNotifications;
- (void)showNewDesktopNotifications:(id)arg1;
- (BOOL)shouldBadgeDockIcon;
- (void)postDockIconBadgeUpdatedNotification;
- (void)updateDockIconNotificationBadge;
- (unsigned long long)badgeCountForUnreadFollowerRequests;
- (unsigned long long)badgeCountForUnreadMessages;
- (unsigned long long)countForUnalertedActivity;
- (unsigned long long)badgeCountForUnreadActivity;
- (unsigned long long)badgeCountForUnreadPosts;
- (void)userNotificationCenter:(id)arg1 didActivateNotification:(id)arg2;
- (BOOL)userNotificationCenter:(id)arg1 shouldPresentNotification:(id)arg2;
- (void)userDidLogout:(id)arg1;
- (void)applicationDidPruneDatabase:(id)arg1;
- (void)applicationWillPruneDatabase:(id)arg1;
- (void)applicationDidEmptyLocalCache:(id)arg1;
- (void)applicationWillEmptyLocalCache:(id)arg1;
- (void)didReceivePushNotification:(id)arg1;
- (void)applicationDidModifyObjects:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

