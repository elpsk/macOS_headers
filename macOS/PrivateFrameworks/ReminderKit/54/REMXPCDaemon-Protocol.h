//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSString, REMStoreContainerToken;

@protocol REMXPCDaemon
- (void)indexingPerformerWithReason:(NSString *)arg1 completion:(void (^)(id <REMXPCIndexingPerformer>, NSError *))arg2;
- (void)syncInterfacePerformerWithReason:(NSString *)arg1 completion:(void (^)(id <REMXPCSyncInterfacePerformer>, NSError *))arg2;
- (void)storePerformerWithProcessName:(NSString *)arg1 storeContainerToken:(REMStoreContainerToken *)arg2 reason:(NSString *)arg3 completion:(void (^)(id <REMXPCStorePerformer>, NSError *))arg4;
- (void)debugPerformerWithReason:(NSString *)arg1 completion:(void (^)(id <REMXPCDebugPerformer>, NSError *))arg2;
- (void)changeTrackingPerformerWithStoreContainerToken:(REMStoreContainerToken *)arg1 reason:(NSString *)arg2 completion:(void (^)(id <REMXPCChangeTrackingPerformer>, NSError *))arg3;
@end

