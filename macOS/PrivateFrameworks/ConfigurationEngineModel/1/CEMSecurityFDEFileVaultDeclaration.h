//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSNumber, NSString;

@interface CEMSecurityFDEFileVaultDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
}

+ (id)allowedReasons;
+ (id)allowedStatusKeys;
+ (id)restrictionPayloadKeys;
+ (id)allowedPayloadKeys;
+ (id)profileType;
+ (id)registeredType;
+ (id)registeredClass;
- (id)serializePayload:(id)arg1 withAssetProviders:(id)arg2;
- (BOOL)validStatusDictionary:(id)arg1 error:(id *)arg2;
- (BOOL)validPayloadDictionary:(id)arg1 error:(id *)arg2;
- (id)assetReferences;
- (int)activationLevel;
- (BOOL)mustBeSupervised;
- (BOOL)multipleAllowed;
@property(readonly, nonatomic) NSString *payloadCertificateIdentifier;
@property(readonly, nonatomic) NSNumber *payloadDeferDontAskAtUserLogout;
@property(readonly, nonatomic) NSNumber *payloadDeferForceAtUserLoginMaxBypassAttempts;
@property(readonly, nonatomic) NSNumber *payloadUseKeychain;
@property(readonly, nonatomic) NSString *payloadPassword;
@property(readonly, nonatomic) NSString *payloadUsername;
@property(readonly, nonatomic) NSString *payloadOutputPath;
@property(readonly, nonatomic) NSNumber *payloadShowRecoveryKey;
@property(readonly, nonatomic) NSNumber *payloadUseRecoveryKey;
@property(readonly, nonatomic) NSNumber *payloadUserEntersMissingInfo;
@property(readonly, nonatomic) NSNumber *payloadDefer;
@property(readonly, nonatomic) NSString *payloadEnable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

