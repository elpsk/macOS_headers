//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MainObjProtocol-Protocol.h"
#import "NSPortDelegate-Protocol.h"

@class NSArray, NSString, SPeer, SPeer_FS, SSyncSet;

@interface MainObj : NSObject <MainObjProtocol, NSPortDelegate>
{
    NSArray *_clientVersion;
    SSyncSet *_defaultSyncSet;
    SPeer *_defaultPeer;
    NSArray *_exclusions;
    NSArray *_inclusions;
    NSString *_localPeerRootPath;
    SSyncSet *_preparedSyncSet;
    NSString *_preparedSyncSetName;
    SPeer_FS *_preparedLocalPeer;
}

+ (void)peerNetServiceDidNotResolve:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) SPeer_FS *preparedLocalPeer; // @synthesize preparedLocalPeer=_preparedLocalPeer;
@property(retain, nonatomic) SSyncSet *preparedSyncSet; // @synthesize preparedSyncSet=_preparedSyncSet;
@property(retain, nonatomic) NSString *preparedSyncSetName; // @synthesize preparedSyncSetName=_preparedSyncSetName;
@property(retain, nonatomic) NSString *localPeerRootPath; // @synthesize localPeerRootPath=_localPeerRootPath;
@property(retain, nonatomic) NSArray *inclusions; // @synthesize inclusions=_inclusions;
@property(retain, nonatomic) NSArray *exclusions; // @synthesize exclusions=_exclusions;
@property(retain, nonatomic) NSArray *clientVersion; // @synthesize clientVersion=_clientVersion;
- (void)launchedBySSHD:(id)arg1;
- (id)prepareLocalPeerForSyncSetName:(id)arg1 exclusions:(id)arg2 inclusions:(id)arg3 needServerSymlink:(BOOL)arg4;
- (id)preparePeer:(id)arg1 forSyncSet:(id)arg2 exclusions:(id)arg3 inclusions:(id)arg4;
- (BOOL)needServerSymlink:(id)arg1;
- (id)localSyncSetWithName:(id)arg1;
- (id)localPeerForSyncSetWithName:(id)arg1;
- (void)_initLocalPeerRootPath:(id)arg1;
- (void)shutdownAgent:(id)arg1;
- (void)emptyThread:(id)arg1;
- (void)peerNetServiceDidResolve:(id)arg1;
- (void)peerNetServicesRemoved:(id)arg1;
- (void)peerNetServicesAdded:(id)arg1;
- (void)handleMachMessage:(void *)arg1;
- (void)connectionDidDie:(id)arg1;
- (BOOL)connection:(id)arg1 shouldMakeNewConnection:(id)arg2;
- (void)shutdownAgent;
- (void)abortSync:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

