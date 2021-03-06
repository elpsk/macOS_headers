//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowKit/WFGalleryPage.h>

@class CKRecordID, NSArray, NSNumber, NSString;

@interface WFMutableGalleryPage : WFGalleryPage
{
    CKRecordID *identifier;
    NSString *name;
    NSNumber *minVersion;
    NSNumber *isRoot;
    NSArray *banners;
    NSArray *collections;
    NSArray *routines;
    NSString *language;
    CKRecordID *base;
    NSString *persistentIdentifier;
    NSArray *donations;
    NSArray *donationsGroupedByApp;
}

@property(copy, nonatomic) NSArray *donationsGroupedByApp; // @synthesize donationsGroupedByApp;
@property(copy, nonatomic) NSArray *donations; // @synthesize donations;
@property(copy, nonatomic) NSString *persistentIdentifier; // @synthesize persistentIdentifier;
@property(retain, nonatomic) CKRecordID *base; // @synthesize base;
@property(copy, nonatomic) NSString *language; // @synthesize language;
@property(copy, nonatomic) NSArray *routines; // @synthesize routines;
@property(copy, nonatomic) NSArray *collections; // @synthesize collections;
@property(copy, nonatomic) NSArray *banners; // @synthesize banners;
@property(copy, nonatomic) NSNumber *isRoot; // @synthesize isRoot;
@property(copy, nonatomic) NSNumber *minVersion; // @synthesize minVersion;
@property(copy, nonatomic) NSString *name; // @synthesize name;
@property(copy, nonatomic) CKRecordID *identifier; // @synthesize identifier;
- (void).cxx_destruct;

@end

