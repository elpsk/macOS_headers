//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/NSCopying-Protocol.h>
#import <TSReading/NSMutableCopying-Protocol.h>
#import <TSReading/TSDMixing-Protocol.h>
#import <TSReading/TSSPreset-Protocol.h>
#import <TSReading/TSSPresetSource-Protocol.h>

@class NSString, TSUColor;

@interface TSDShadow : NSObject <TSDMixing, TSSPreset, TSSPresetSource, NSCopying, NSMutableCopying>
{
    double mAngle;
    double mOffset;
    double mRadius;
    double mOpacity;
    struct CGColor *mColor;
    BOOL mEnabled;
}

+ (id)mixableObjectClasses;
+ (BOOL)canMixWithNilObjects;
+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3;
+ (id)presetKinds;
+ (BOOL)automaticallyNotifiesObserversOfTSUColor;
+ (id)keyPathsForValuesAffectingTSUColor;
+ (id)curvedShadowWithOffset:(double)arg1 angle:(double)arg2 radius:(double)arg3 curve:(double)arg4 opacity:(double)arg5 color:(struct CGColor *)arg6 enabled:(BOOL)arg7;
+ (id)shadowWithNSShadow:(id)arg1;
+ (id)contactShadowWithAngle:(double)arg1 offset:(double)arg2 radius:(double)arg3 height:(double)arg4 opacity:(double)arg5 color:(struct CGColor *)arg6 enabled:(BOOL)arg7;
+ (id)shadowWithAngle:(double)arg1 offset:(double)arg2 radius:(double)arg3 opacity:(double)arg4 color:(struct CGColor *)arg5 enabled:(BOOL)arg6;
+ (id)defaultDisabledShadow;
+ (id)defaultShadow;
+ (id)p_defaultShadowEnabled:(BOOL)arg1;
@property(readonly, nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=mEnabled;
@property(readonly, nonatomic) struct CGColor *color; // @synthesize color=mColor;
@property(readonly, nonatomic) double opacity; // @synthesize opacity=mOpacity;
@property(readonly, nonatomic) double radius; // @synthesize radius=mRadius;
@property(readonly, nonatomic) double offset; // @synthesize offset=mOffset;
@property(readonly, nonatomic) double angle; // @synthesize angle=mAngle;
- (id)NSShadow;
- (id)shadowByTransformingByTransform:(struct CGAffineTransform)arg1;
- (id)mixedBaseObjectWithObject:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (SEL)mapThemeAssetSelector;
- (BOOL)isThemeEquivalent:(id)arg1;
@property(readonly, nonatomic) NSString *presetKind;
- (BOOL)differenceRequiresRebuilding:(id)arg1;
- (struct CGRect)shadowBoundsForRect:(struct CGRect)arg1 additionalAngle:(double)arg2;
- (struct CGRect)shadowBoundsForRect:(struct CGRect)arg1;
- (struct CGRect)shadowBoundsForRect:(struct CGRect)arg1 additionalTransform:(struct CGAffineTransform)arg2;
- (struct CGImage *)newShadowImageForRep:(id)arg1 withSize:(struct CGSize)arg2 drawSelector:(SEL)arg3 unflipped:(BOOL)arg4;
- (struct CGRect)boundsForRep:(id)arg1;
- (struct CGRect)boundsInNaturalSpaceForRep:(id)arg1;
- (void)applyToContext:(struct CGContext *)arg1 viewScale:(double)arg2 flipped:(BOOL)arg3 extraOffset:(struct CGSize)arg4;
- (void)applyToContext:(struct CGContext *)arg1 viewScale:(double)arg2 flipped:(BOOL)arg3;
- (void)applyToContext:(struct CGContext *)arg1 viewScale:(double)arg2;
@property(readonly, nonatomic) TSUColor *TSUColor;
@property(readonly, nonatomic) struct CGPoint offsetDelta;
- (id)typeDescription;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)shadowType;
- (BOOL)showForEditingText;
- (BOOL)isCurvedShadow;
- (BOOL)isDropShadow;
- (BOOL)isContactShadow;
- (unsigned long long)hash;
- (void)dealloc;
- (id)newShadowClampedForSwatches;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)clampOpacity:(double)arg1;
- (double)clampRadius:(double)arg1;
- (double)clampOffset:(double)arg1;
- (struct CGImage *)i_newEmptyImageWithSize:(struct CGSize)arg1;
- (id)i_initWithOpacity:(double)arg1 color:(struct CGColor *)arg2 enabled:(BOOL)arg3;

@end

