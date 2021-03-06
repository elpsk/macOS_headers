//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "GSSPMessageBase.h"

@class NSString;

@interface GSSPCalculationEngineAstCrossTableReferenceExtraInfo : GSSPMessageBase
{
    NSString *mTableId;
    NSString *mReferenceWhitespaceAfterSheetName;
    NSString *mReferenceWhitespaceBeforeTableName;
    NSString *mReferenceWhitespaceAfterTableName;
    NSString *mReferenceWhitespaceBeforeCellAddress;
    BOOL mDefinedReferenceWhitespaceAfterSheetName;
    BOOL mDefinedReferenceWhitespaceBeforeTableName;
    BOOL mDefinedReferenceWhitespaceAfterTableName;
    BOOL mDefinedReferenceWhitespaceBeforeCellAddress;
}

+ (Class)realClass;
+ (void)registerRealGsspClass:(Class)arg1;
@property(readonly, nonatomic) BOOL definedReferenceWhitespaceBeforeCellAddress; // @synthesize definedReferenceWhitespaceBeforeCellAddress=mDefinedReferenceWhitespaceBeforeCellAddress;
@property(readonly, nonatomic) BOOL definedReferenceWhitespaceAfterTableName; // @synthesize definedReferenceWhitespaceAfterTableName=mDefinedReferenceWhitespaceAfterTableName;
@property(readonly, nonatomic) BOOL definedReferenceWhitespaceBeforeTableName; // @synthesize definedReferenceWhitespaceBeforeTableName=mDefinedReferenceWhitespaceBeforeTableName;
@property(readonly, nonatomic) BOOL definedReferenceWhitespaceAfterSheetName; // @synthesize definedReferenceWhitespaceAfterSheetName=mDefinedReferenceWhitespaceAfterSheetName;
- (id)description;
- (id)dspClassName;
- (id)jsonNSDictionaryValue;
- (void)populateJsonNSDictionaryValueToDictionary:(id)arg1;
- (int)p_getDiffEncodingScoreWith:(id)arg1;
- (void)p_populateStructHashKey:(struct GSSPHashKeyBuilder *)arg1;
- (unsigned long long)p_getStructHashKeyLength;
- (int)getStructHashId;
- (void)serializeRequiredFieldsWithSerializationContext:(struct GSSPSerializationContext *)arg1 withNextFieldNeedSerialize:(BOOL)arg2 diffBy:(id)arg3;
- (void)serializeOptionalFieldsWithSerializationContext:(struct GSSPSerializationContext *)arg1 withNextFieldNeedSerialize:(BOOL)arg2 diffBy:(id)arg3;
- (id)dspTypeIdString;
- (void)populateRequiredField:(int)arg1 fromContext:(struct GSSPDeserializationContext *)arg2;
- (void)populateOptionalField:(int)arg1 fromContext:(struct GSSPDeserializationContext *)arg2;
- (void)shallowCopyAllFieldsFrom:(id)arg1;
- (void)dealloc;
- (BOOL)clearReferenceWhitespaceBeforeCellAddress;
- (BOOL)clearReferenceWhitespaceAfterTableName;
- (BOOL)clearReferenceWhitespaceBeforeTableName;
- (BOOL)clearReferenceWhitespaceAfterSheetName;
- (void)setReferenceWhitespaceBeforeCellAddress:(id)arg1;
- (id)referenceWhitespaceBeforeCellAddress;
- (void)setReferenceWhitespaceAfterTableName:(id)arg1;
- (id)referenceWhitespaceAfterTableName;
- (void)setReferenceWhitespaceBeforeTableName:(id)arg1;
- (id)referenceWhitespaceBeforeTableName;
- (void)setReferenceWhitespaceAfterSheetName:(id)arg1;
- (id)referenceWhitespaceAfterSheetName;
- (void)setTableId:(id)arg1;
- (id)tableId;

@end

