//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Automator/_AMRowTemplateFactory.h>

@interface _AMMailItemsRowTemplateFactory : _AMRowTemplateFactory
{
}

+ (id)sharedInstance;
- (id)mailAccountTypeRowTemplatesWithName:(id)arg1 andKeyPath:(id)arg2;
- (id)convertToEvaluationPredicateFromComparisonUIPredicate:(id)arg1 withItemType:(id)arg2;
- (id)rowTemplatesForItemType:(id)arg1;
- (id)rowTemplatesForMailAccounts;
- (id)rowTemplatesForMailMailboxes;
- (id)rowTemplatesForMailMessages;

@end

