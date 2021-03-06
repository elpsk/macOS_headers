//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SegmentedTimecodeScrubber.h"

@class LGMAKitTimecodeFormatter;

@interface LogicSegmentedTimecodeScrubberBridge : SegmentedTimecodeScrubber
{
    LGMAKitTimecodeFormatter *formatter;
}

- (id)timecodeObjectValue;
- (struct TAbsPureClock)clockValueForSong:(const struct CSong *)arg1 useSMPTEViewOffset:(BOOL)arg2;
- (void)setClockValue:(struct TAbsPureClock)arg1 song:(const struct CSong *)arg2 useSMPTEViewOffset:(BOOL)arg3;
- (void)setScrubberTimeDisplayMode:(BOOL)arg1 smpteFrameRate:(int)arg2 sampleAccuracy:(BOOL)arg3;
- (void)setSubframeValue:(int)arg1;
- (int)subframeValue;
- (void)localInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

