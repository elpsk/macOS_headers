//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TSDCanvasMessageHUDController;

@protocol TSDCanvasMessageHUDControllerDelegate <NSObject>
@property(readonly, nonatomic) double contentsScale;
- (void)positionDidUpdateForCanvasMessageHUDController:(TSDCanvasMessageHUDController *)arg1;
- (void)removeCanvasMessageHUDController:(TSDCanvasMessageHUDController *)arg1;
- (void)addCanvasMessageHUDController:(TSDCanvasMessageHUDController *)arg1;
@end

