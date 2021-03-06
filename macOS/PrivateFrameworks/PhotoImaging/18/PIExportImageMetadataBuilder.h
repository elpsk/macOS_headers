//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoImaging/PIExportMetadataBuilder.h>

@class NSDictionary, NSMutableDictionary;

@interface PIExportImageMetadataBuilder : PIExportMetadataBuilder
{
    NSMutableDictionary *_iptcMutableDictionary;
    NSMutableDictionary *_exifMutableDictionary;
    NSMutableDictionary *_tiffMutableDictionary;
}

+ (id)gpsDictionaryForLocation:(id)arg1;
+ (id)_gpsDateFormatter;
+ (id)_gpsTimeFormatter;
+ (id)_dateFormatterTemplate;
+ (id)_exifTimeZoneOffsetFormatter;
+ (id)_exifSubsecTimeFormatter;
+ (id)_exifDateTimeFormatter;
+ (id)iptcTimeFormatter;
+ (id)iptcDateFormatter;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *tiffMutableDictionary; // @synthesize tiffMutableDictionary=_tiffMutableDictionary;
@property(retain, nonatomic) NSMutableDictionary *exifMutableDictionary; // @synthesize exifMutableDictionary=_exifMutableDictionary;
@property(retain, nonatomic) NSMutableDictionary *iptcMutableDictionary; // @synthesize iptcMutableDictionary=_iptcMutableDictionary;
@property(readonly, copy, nonatomic) NSDictionary *tiffDictionary;
@property(readonly, copy, nonatomic) NSDictionary *exifDictionary;
@property(readonly, copy, nonatomic) NSDictionary *iptcDictionary;
- (void)setPeopleNames:(id)arg1;
- (void)setKeywords:(id)arg1;
- (void)setCaption:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)_updateCreationDate;
- (void)setCreationDate:(id)arg1 timeZone:(id)arg2;
- (id)init;

@end

