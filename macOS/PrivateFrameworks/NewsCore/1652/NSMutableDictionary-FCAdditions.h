//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSMutableDictionary.h>

@interface NSMutableDictionary (FCAdditions)
- (void)fc_mergeWithDictionary:(id)arg1 withValueCombiner:(CDUnknownBlockType)arg2;
- (void)fc_removeObjectsForKeysNotInSet:(id)arg1;
- (void)fc_removeObjectsForKeysNotInArray:(id)arg1;
- (void)fc_safelySetObjectAllowingNil:(id)arg1 forKey:(id)arg2;
- (void)fc_safelySetObjectAllowingNil:(id)arg1 forKeyAllowingNil:(id)arg2;
- (void)fc_transformValuesWithKeyAndValueBlock:(CDUnknownBlockType)arg1;
- (void)fc_safelySetObject:(id)arg1 forKey:(id)arg2;
@end

