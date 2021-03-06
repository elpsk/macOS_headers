//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SmallDocumentDialogController.h"

@class CLgUnilibSubView, LogicSegmentedTimecodeScrubberBridge, MAKitButton, MAKitPopUpButton, MAKitView, MATextField, NSButton, SegmentedClockScrubber, SegmentedNumberScrubber;

@interface TempoOperationsController : SmallDocumentDialogController
{
    MAKitPopUpButton *operationPopUp;
    SegmentedClockScrubber *positionLeft;
    SegmentedClockScrubber *positionRight;
    NSButton *positionLock;
    LogicSegmentedTimecodeScrubberBridge *timeLeft;
    LogicSegmentedTimecodeScrubberBridge *timeRight;
    NSButton *timeLock;
    SegmentedNumberScrubber *tempoLeft;
    SegmentedNumberScrubber *tempoRight;
    MAKitPopUpButton *curveShape;
    SegmentedNumberScrubber *curveFactor;
    MAKitPopUpButton *density;
    MAKitPopUpButton *roundTempoChangesValue;
    MAKitButton *continueWithNewTempo;
    MAKitView *tempoView;
    MAKitButton *cancel;
    MAKitButton *undo;
    MAKitButton *apply;
    MATextField *title1;
    MATextField *title2;
    MATextField *title3;
    SegmentedNumberScrubber *scale;
    SegmentedNumberScrubber *randomize;
    SegmentedClockScrubber *rightStretchClock;
    LogicSegmentedTimecodeScrubberBridge *rightStretchTime;
    CLgUnilibSubView *uniView;
    float controlsX;
    float controlsY1;
    float controlsY2;
    float controlsY3;
}

+ (id)nibName;
- (void)ui_action:(id)arg1;
- (void)updateUI;
- (void)setOperation:(int)arg1;
- (void)disableUndoButtonAfterUndo;
- (void)willBecomeVisible;
- (void)handleUM_LOCAT_id:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)awakeFromNib;
- (void)removeUnilibSubview;
- (void)addUnilibSubview;

@end

