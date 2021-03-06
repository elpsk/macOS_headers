//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, _INPBDateTimeRange, _INPBString, _INPBWellnessValue;

@protocol _INPBSaveHealthSampleIntentResponse <NSObject>
+ (Class)valuesUserProvidedUnitType;
+ (Class)valuesDefaultUnitType;
+ (Class)sampleUuidsType;
@property(readonly, nonatomic) unsigned long long valuesUserProvidedUnitsCount;
@property(copy, nonatomic) NSArray *valuesUserProvidedUnits;
@property(readonly, nonatomic) unsigned long long valuesDefaultUnitsCount;
@property(copy, nonatomic) NSArray *valuesDefaultUnits;
@property(readonly, nonatomic) BOOL hasUserProvidedUnit;
@property(retain, nonatomic) _INPBString *userProvidedUnit;
@property(readonly, nonatomic) unsigned long long sampleUuidsCount;
@property(copy, nonatomic) NSArray *sampleUuids;
@property(readonly, nonatomic) BOOL hasRecordDate;
@property(retain, nonatomic) _INPBDateTimeRange *recordDate;
@property(readonly, nonatomic) BOOL hasPunchoutUrl;
@property(retain, nonatomic) _INPBString *punchoutUrl;
@property(readonly, nonatomic) BOOL hasDefaultUnit;
@property(retain, nonatomic) _INPBString *defaultUnit;
- (_INPBWellnessValue *)valuesUserProvidedUnitAtIndex:(unsigned long long)arg1;
- (void)addValuesUserProvidedUnit:(_INPBWellnessValue *)arg1;
- (void)clearValuesUserProvidedUnits;
- (_INPBWellnessValue *)valuesDefaultUnitAtIndex:(unsigned long long)arg1;
- (void)addValuesDefaultUnit:(_INPBWellnessValue *)arg1;
- (void)clearValuesDefaultUnits;
- (_INPBString *)sampleUuidsAtIndex:(unsigned long long)arg1;
- (void)addSampleUuids:(_INPBString *)arg1;
- (void)clearSampleUuids;
@end

