//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSScrubberDelegate.h"

@class FBScrubberLayout, NSScrubber;

@protocol FBScrubberLayoutDelegate <NSScrubberDelegate>

@optional
- (double)scrubber:(NSScrubber *)arg1 layout:(FBScrubberLayout *)arg2 spaceBeforeItemAtIndex:(long long)arg3;
- (struct CGSize)scrubber:(NSScrubber *)arg1 layout:(FBScrubberLayout *)arg2 sizeForItemAtIndex:(long long)arg3;
@end

