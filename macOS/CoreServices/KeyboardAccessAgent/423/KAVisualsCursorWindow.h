//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AccessibilitySupport/AXVBorderedWindow.h>

@class NSColor;

@interface KAVisualsCursorWindow : AXVBorderedWindow
{
    BOOL _isCursorShowing;
    NSColor *_cursorColor;
    double _cursorSize;
    struct CGRect _cursorRect;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL isCursorShowing; // @synthesize isCursorShowing=_isCursorShowing;
@property(nonatomic) struct CGRect cursorRect; // @synthesize cursorRect=_cursorRect;
@property(nonatomic) double cursorSize; // @synthesize cursorSize=_cursorSize;
@property(retain, nonatomic) NSColor *cursorColor; // @synthesize cursorColor=_cursorColor;
- (id)init;

@end

