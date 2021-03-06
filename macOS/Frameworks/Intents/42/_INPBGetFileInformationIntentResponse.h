//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBGetFileInformationIntentResponse.h"

@class NSString, _INPBFileProperty, _INPBString;

@interface _INPBGetFileInformationIntentResponse : PBCodable <_INPBGetFileInformationIntentResponse, NSSecureCoding, NSCopying>
{
    CDStruct_f2ecb737 _has;
    BOOL _success;
    BOOL __encodeLegacyGloryData;
    _INPBString *_entityName;
    _INPBFileProperty *_property;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(nonatomic) BOOL success; // @synthesize success=_success;
@property(retain, nonatomic) _INPBFileProperty *property; // @synthesize property=_property;
@property(retain, nonatomic) _INPBString *entityName; // @synthesize entityName=_entityName;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(nonatomic) BOOL hasSuccess;
@property(readonly, nonatomic) BOOL hasProperty;
@property(readonly, nonatomic) BOOL hasEntityName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

