//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface HFAccessoryProfileFilterOptions : NSObject
{
    BOOL _byFavorites;
    NSSet *_byAccessories;
    NSSet *_byCategoryTypes;
    NSSet *_byClasses;
    NSSet *_byManufacturers;
    NSSet *_byModels;
    NSSet *_byRooms;
    CDUnknownBlockType _byFilter;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType byFilter; // @synthesize byFilter=_byFilter;
@property(copy, nonatomic) NSSet *byRooms; // @synthesize byRooms=_byRooms;
@property(copy, nonatomic) NSSet *byModels; // @synthesize byModels=_byModels;
@property(copy, nonatomic) NSSet *byManufacturers; // @synthesize byManufacturers=_byManufacturers;
@property(nonatomic) BOOL byFavorites; // @synthesize byFavorites=_byFavorites;
@property(copy, nonatomic) NSSet *byClasses; // @synthesize byClasses=_byClasses;
@property(copy, nonatomic) NSSet *byCategoryTypes; // @synthesize byCategoryTypes=_byCategoryTypes;
@property(copy, nonatomic) NSSet *byAccessories; // @synthesize byAccessories=_byAccessories;

@end

