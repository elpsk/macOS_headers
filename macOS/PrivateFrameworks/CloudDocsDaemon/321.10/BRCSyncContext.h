//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/BRCLowDiskDelegate-Protocol.h>

@class BRCAccountSession, BRCThrottleBase, BRCTransferStream, BRCUserDefaults, CDAttribute, CDBudget, CKContainer, NSString;

__attribute__((visibility("hidden")))
@interface BRCSyncContext : NSObject <BRCLowDiskDelegate>
{
    CKContainer *_ckContainer;
    NSString *_contextIdentifier;
    CDAttribute *_duetAttribute;
    CDBudget *_energyBudget;
    CDBudget *_dataBudget;
    NSString *_admissionTicket;
    BOOL _isInLowDisk;
    BOOL _isShared;
    BOOL _isCancelled;
    BRCAccountSession *_session;
    BRCThrottleBase *_readerThrottle;
    BRCThrottleBase *_applyThrottle;
    BRCThrottleBase *_downloadThrottle;
    BRCThrottleBase *_uploadThrottle;
    BRCTransferStream *_uploader;
    BRCTransferStream *_downloader;
}

+ (id)contextIdentifierForZone:(id)arg1;
@property(readonly, nonatomic) CDBudget *dataBudget; // @synthesize dataBudget=_dataBudget;
@property(readonly, nonatomic) CDBudget *energyBudget; // @synthesize energyBudget=_energyBudget;
@property(readonly, nonatomic) BOOL isShared; // @synthesize isShared=_isShared;
@property(readonly, nonatomic) BRCTransferStream *downloader; // @synthesize downloader=_downloader;
@property(readonly, nonatomic) BRCTransferStream *uploader; // @synthesize uploader=_uploader;
@property(readonly, nonatomic) BRCThrottleBase *uploadThrottle; // @synthesize uploadThrottle=_uploadThrottle;
@property(readonly, nonatomic) BRCThrottleBase *downloadThrottle; // @synthesize downloadThrottle=_downloadThrottle;
@property(readonly, nonatomic) BRCThrottleBase *applyThrottle; // @synthesize applyThrottle=_applyThrottle;
@property(readonly, nonatomic) BRCThrottleBase *readerThrottle; // @synthesize readerThrottle=_readerThrottle;
@property(readonly, nonatomic) NSString *contextIdentifier; // @synthesize contextIdentifier=_contextIdentifier;
@property(readonly, nonatomic) BRCAccountSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)lowDiskStatusChangedForDevice:(int)arg1 hasEnoughSpace:(BOOL)arg2;
- (void)close;
- (void)cancel;
- (void)resume;
- (void)addOperation:(id)arg1;
- (BOOL)allowsCellularAccess;
- (void)notifyDuetFromAccessByBundleID:(id)arg1;
@property(readonly, nonatomic) CKContainer *ckContainer;
- (void)setupIfNeeded;
@property(readonly, nonatomic) NSString *admissionTicket;
- (void)_setupDuetIfNeeded;
- (id)initWithZone:(id)arg1;
- (id)initWithSession:(id)arg1 contextIdentifier:(id)arg2 isShared:(BOOL)arg3;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) BRCUserDefaults *defaults;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

