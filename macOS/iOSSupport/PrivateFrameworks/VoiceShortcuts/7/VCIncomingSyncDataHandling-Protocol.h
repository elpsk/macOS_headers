//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VoiceShortcuts/VCPBMessageTyped-Protocol.h>

@class NSArray;
@protocol VCShortcutSyncService;

@protocol VCIncomingSyncDataHandling <VCPBMessageTyped>
- (BOOL)deleteSyncedData:(id *)arg1;
- (BOOL)applyChanges:(NSArray *)arg1 fromSyncService:(id <VCShortcutSyncService>)arg2 error:(id *)arg3;
@end

