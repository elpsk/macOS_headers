//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PLSeasonsUtilities : NSObject
{
}

+ (BOOL)isCountryCodePartOfSouthernHemisphere:(id)arg1;
+ (BOOL)isCountryCodePartOfNorthernHemisphere:(id)arg1;
+ (id)_seasonCountryCodesDictionary;
+ (id)_southernMeteorologicalSeasonKeyForMonthNumber:(unsigned long long)arg1;
+ (id)_northernMeteorologicalSeasonKeyForMonthNumber:(unsigned long long)arg1;
+ (id)_seasonKeyForMonthNumber:(unsigned long long)arg1 locale:(id)arg2;
+ (id)_seasonNameForKey:(id)arg1;
+ (id)localizedSeasonNameForDate:(id)arg1 calendar:(id)arg2 locale:(id)arg3;

@end

