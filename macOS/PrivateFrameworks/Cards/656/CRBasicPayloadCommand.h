//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CRPayloadCommand.h"

@class NSDictionary, NSString;

@interface CRBasicPayloadCommand : NSObject <CRPayloadCommand>
{
    id <NSSecureCoding><NSCopying> payload;
    NSDictionary *userInfo;
    unsigned long long commandDirection;
}

@property(nonatomic) unsigned long long commandDirection; // @synthesize commandDirection;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo;
@property(retain, nonatomic) id <NSSecureCoding><NSCopying> payload; // @synthesize payload;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

