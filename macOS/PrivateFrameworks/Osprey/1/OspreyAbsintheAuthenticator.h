//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSURL, OspreyGRPCChannel, OspreyKeychain;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface OspreyAbsintheAuthenticator : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    struct NACContextOpaque_ *_nacContext;
    NSData *_certificateData;
    OspreyGRPCChannel *_channel;
    long long _state;
    NSData *_sessionInfo;
    NSDate *_sessionExpireOn;
    NSURL *_server;
    OspreyKeychain *_keychainStorage;
}

+ (void)initialize;
@property(nonatomic) __weak OspreyKeychain *keychainStorage; // @synthesize keychainStorage=_keychainStorage;
@property(retain, nonatomic) NSURL *server; // @synthesize server=_server;
@property(retain, nonatomic) NSDate *sessionExpireOn; // @synthesize sessionExpireOn=_sessionExpireOn;
@property(retain, nonatomic) NSData *sessionInfo; // @synthesize sessionInfo=_sessionInfo;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)createClientSessionWithData:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)fetchAbsintheServerCertificate:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)_initializeAbsintheClientWithCertificateData:(id)arg1 success:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
- (void)_ensureAuthenticatedWithCompletion:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (BOOL)_isSessionInfoExpired;
- (BOOL)isSessionInfoExpired;
- (id)_signData:(id)arg1;
- (void)signData:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)didMoveToState:(long long)arg1;
- (void)willMoveToState:(long long)arg1;
- (BOOL)_readyToSignClientData;
- (void)setCachedCertificateData:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)cachedCertificateDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 endpoint:(id)arg2 keychainStorage:(id)arg3;
- (id)initWithQueue:(id)arg1 endpoint:(id)arg2;
- (id)initWithQueue:(id)arg1;

@end

