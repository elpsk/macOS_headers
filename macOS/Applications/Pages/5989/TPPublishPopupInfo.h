//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface TPPublishPopupInfo : NSObject
{
    NSMutableDictionary *_nameToItemMap;
    NSMutableDictionary *_codeToNameMap;
    NSMutableArray *_orderedItemNames;
    NSMutableArray *_disabledItemIndices;
    NSMutableArray *_separatorItemIndices;
}

+ (BOOL)isChooseItem:(id)arg1;
+ (id)optionalChooseItemLabel;
+ (id)chooseItemLabel;
@property(retain, nonatomic) NSMutableArray *separatorItemIndices; // @synthesize separatorItemIndices=_separatorItemIndices;
@property(retain, nonatomic) NSMutableArray *disabledItemIndices; // @synthesize disabledItemIndices=_disabledItemIndices;
@property(retain, nonatomic) NSMutableArray *orderedItemNames; // @synthesize orderedItemNames=_orderedItemNames;
@property(retain, nonatomic) NSMutableDictionary *codeToNameMap; // @synthesize codeToNameMap=_codeToNameMap;
@property(retain, nonatomic) NSMutableDictionary *nameToItemMap; // @synthesize nameToItemMap=_nameToItemMap;
- (void).cxx_destruct;
- (id)allInfoItemNames;
- (long long)indexForName:(id)arg1;
- (id)codeForName:(id)arg1;
- (id)itemNameForCode:(id)arg1;
- (id)itemForName:(id)arg1;
- (id)separatorIndices;
- (BOOL)hasSeparatorItems;
- (id)disabledIndices;
- (BOOL)hasDisabledItems;
- (id)itemNames;
- (id)initWithData:(id)arg1 manifest:(id)arg2 itemClass:(Class)arg3 chooseItemType:(long long)arg4;
- (id)initWithXml:(id)arg1 manifest:(id)arg2 itemClass:(Class)arg3 chooseItemType:(long long)arg4;
- (id)initWithArray:(id)arg1 manifest:(id)arg2 itemClass:(Class)arg3 chooseItemType:(long long)arg4;

@end

