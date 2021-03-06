//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <OfficeImport/OADTableStyleResolver.h>

@class OADTextListStyle;

@interface OADTableUnnecessaryOverrideRemover : OADTableStyleResolver
{
    OADTextListStyle *_parentTextListStyle;
}

@property(readonly, nonatomic) OADTextListStyle *parentTextListStyle; // @synthesize parentTextListStyle=_parentTextListStyle;
- (void).cxx_destruct;
- (void)applyTextStyle:(id)arg1 toParagraph:(id)arg2;
- (void)applyResolvedPartStyle:(id)arg1 leftStroke:(id)arg2 rightStroke:(id)arg3 topStroke:(id)arg4 bottomStroke:(id)arg5 toCell:(id)arg6;
- (void)removeUnnecessaryOverridesInCellProperties:(id)arg1 strokeType:(int)arg2 resolvedStroke:(id)arg3;
- (void)fixFill:(id)arg1;
- (void)applyTextBodyPropertiesToCellPropertiesInCell:(id)arg1;
- (id)initWithTable:(id)arg1 parentTextListStyle:(id)arg2;

@end

