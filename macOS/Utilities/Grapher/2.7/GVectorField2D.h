//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GVectorField.h"

@class NSBezierPath;

@interface GVectorField2D : GVectorField
{
    NSBezierPath *mPath;
    NSBezierPath *mHandles;
}

- (double)handleRadius;
- (void)encodeStateWithCoder:(id)arg1;
- (void)decodeStateWithCoder:(id)arg1;
- (BOOL)touchedByRect:(struct CGRect)arg1;
- (void)updateContentFrame;
- (void)drawSelection;
- (void)drawContent;
- (double)lengthOfVector:(id)arg1;
- (void)dealloc;
- (void)awake;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

