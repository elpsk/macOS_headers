//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MABackgroundView.h"

#import "LgSectionView.h"

@class CLgView, NSColor;

@interface CLgSmartControlsInspectorView : MABackgroundView <LgSectionView>
{
    BOOL inspectorWantsToBeShown;
    CLgView *parentView;
    BOOL _showsVisualEQ;
    BOOL _showsRemixFX;
    BOOL _showsMasterFX;
}

@property(nonatomic) BOOL showsMasterFX; // @synthesize showsMasterFX=_showsMasterFX;
@property(nonatomic) BOOL showsRemixFX; // @synthesize showsRemixFX=_showsRemixFX;
@property(nonatomic) BOOL showsVisualEQ; // @synthesize showsVisualEQ=_showsVisualEQ;
@property BOOL inspectorWantsToBeShown; // @synthesize inspectorWantsToBeShown;
@property CLgView *parentView; // @synthesize parentView;
- (BOOL)acceptsFirstResponder;
@property(readonly) BOOL hasPlayhead;
@property(readonly) BOOL isContents;
@property(readonly) int section;
- (void)viewVisibilityChange:(BOOL)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly) NSColor *backgroundColor;
@property(readonly) BOOL isDragging;

@end

