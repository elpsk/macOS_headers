//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIKBRenderFactory_Monolith.h>

__attribute__((visibility("hidden")))
@interface UIKBRenderFactory_MonolithLinear : UIKBRenderFactory_Monolith
{
}

- (id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2;
- (struct CGRect)_insetRectForSpaceKeyRect:(struct CGRect)arg1 yOffset:(double)arg2;
- (BOOL)forceVariantsInsideKeyplane;
- (BOOL)smallTextForSpaceAndClear;
- (BOOL)spaceKeyIsPressed;
- (BOOL)preferGlyphForClear;
- (BOOL)preferGlyphForDelete;
- (BOOL)includeDeleteInVariants;
- (double)tldKeyFontWeight;
- (double)tldKeyFontSize;

@end

