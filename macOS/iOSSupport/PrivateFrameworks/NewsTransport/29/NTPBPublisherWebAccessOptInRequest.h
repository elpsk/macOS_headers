//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString;

@interface NTPBPublisherWebAccessOptInRequest : PBRequest <NSCopying>
{
    NSString *_channelId;
    NSString *_country;
    NSString *_email;
    NSString *_iapId;
    NSString *_language;
    NSString *_purchaseReceipt;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *country; // @synthesize country=_country;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(retain, nonatomic) NSString *iapId; // @synthesize iapId=_iapId;
@property(retain, nonatomic) NSString *purchaseReceipt; // @synthesize purchaseReceipt=_purchaseReceipt;
@property(retain, nonatomic) NSString *email; // @synthesize email=_email;
@property(retain, nonatomic) NSString *channelId; // @synthesize channelId=_channelId;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasCountry;
@property(readonly, nonatomic) BOOL hasLanguage;
@property(readonly, nonatomic) BOOL hasIapId;
@property(readonly, nonatomic) BOOL hasPurchaseReceipt;
@property(readonly, nonatomic) BOOL hasEmail;
@property(readonly, nonatomic) BOOL hasChannelId;

@end

