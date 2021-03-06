//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Slideshows/MREffect.h>

#import "MZEffectTiming.h"

@class MRContext, NSMutableArray, NSMutableDictionary;

@interface MREffectFloating : MREffect <MZEffectTiming>
{
    long long mTotalImages;
    NSMutableArray *mFrontSlideOrder;
    NSMutableArray *mMiddleSlideOrder;
    NSMutableArray *mBackSlideOrder;
    BOOL mNeedsUpdate;
    BOOL mNeedsMoreSlides;
    long long mIterationOffset;
    NSMutableDictionary *mSlideTimes;
    float *mVBOData;
    unsigned int mVBO;
    MRContext *mHackContext;
}

+ (id)customTimingWithEffectID:(id)arg1 effectAttributes:(id)arg2 slideInformation:(id)arg3 textInformation:(id)arg4 inAspectRatio:(double)arg5;
+ (unsigned long long)typicalSlideBatchSizeForEffectID:(id)arg1;
+ (BOOL)supportsDynamicExpansionForEffectID:(id)arg1;
+ (BOOL)hasCustomTiming;
@property(nonatomic) long long totalImages; // @synthesize totalImages=mTotalImages;
- (double)_rotationForRelative:(double)arg1 directionFactor:(double)arg2;
- (double)_zTranslationForRelativeTime:(double)arg1;
- (void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (void)_orderImages;
- (double)displayTimeForTextAtIndex:(unsigned long long)arg1;
- (double)displayTimeForSlideAtIndex:(unsigned long long)arg1;
- (double)lowestDisplayTime;
- (double)showDurationForSlideAtIndex:(unsigned long long)arg1;
- (double)showTimeForSlideAtIndex:(unsigned long long)arg1;
- (void)_bestTimeInfoFor:(id)arg1 time:(double)arg2 start:(double *)arg3 end:(double *)arg4;
- (void)_applyTimingToSlideProviders;
- (void)_applySizeScript;
- (void)setPhaseInDuration:(double)arg1 mainDuration:(double)arg2 phaseOutDuration:(double)arg3;
- (void)appendSlideInformation:(id)arg1 andTextInformation:(id)arg2;
- (BOOL)needsMoreSlidesAtTime:(double)arg1;
- (void)setMultiImageSlideRange:(struct _NSRange)arg1;
- (double)_mainDurationForImageCount:(long long)arg1;
- (void)setPixelSize:(struct CGSize)arg1;
- (BOOL)isOpaque;
- (unsigned long long)firstSlideIndexStillNeededAtTime:(double)arg1;
- (long long)typicalSlideBatchSize;
- (BOOL)supportsDynamicExpansion;
- (void)_cleanup;
- (id)initWithEffectID:(id)arg1;
- (void)_unload;

// Remaining properties
@property(readonly, nonatomic) double mainDuration; // @dynamic mainDuration;
@property(readonly, nonatomic) double phaseInDuration; // @dynamic phaseInDuration;
@property(readonly, nonatomic) double phaseOutDuration; // @dynamic phaseOutDuration;

@end

