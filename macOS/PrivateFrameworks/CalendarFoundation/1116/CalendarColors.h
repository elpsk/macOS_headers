//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CalendarColors : NSObject
{
}

+ (id)localizedColorNameForColorName:(id)arg1;
+ (id)textColorForName:(id)arg1;
+ (id)grayColor;
+ (id)facebookCalendarColor;
+ (id)birthdayCalendarColor;
+ (id)colorForName:(id)arg1;
+ (id)nameOfColor:(id)arg1;
+ (void)_rebuildColors;
+ (void)initialize;
+ (void)_bootstrapColorNameMapping;
+ (id)defaultCalendarColorNames;
+ (id)colorNamesOrderedForAssignment;
+ (int)countOfColor:(id)arg1 inArray:(id)arg2;
+ (id)symbolicColorForNewCalendarWithExistingSymbolicNames:(id)arg1;

@end

