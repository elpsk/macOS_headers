//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "MFPBrush.h"

@class NSArray;

@interface MFPGradientBrush : MFPBrush
{
    struct CGAffineTransform mTransform;
    NSArray *mBlend;
    NSArray *mColorBlend;
    int mWrapMode;
    NSArray *mStops;
    struct CGShading *mShading;
    struct CGFunction *mShadingFunction;
}

- (void).cxx_destruct;
- (void)createPhoneBrush;
- (id)color;
- (void)fillPath:(id)arg1;
- (void)setWrapMode:(int)arg1;
- (void)setColorBlend:(id)arg1;
- (void)setBlend:(id)arg1;
- (void)setTransform:(struct CGAffineTransform)arg1;
- (void)dealloc;
- (id)init;
- (void)createShading;
- (void)createShadingFunction;
- (void)createStopsFromStartAndEndColors;
- (void)createStopsFromBlend;
- (void)createStopsFromColorBlend;
- (id)colorAtPosition:(float)arg1;
- (id)endColor;
- (id)startColor;

@end

