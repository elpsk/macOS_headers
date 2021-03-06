//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <TSDrawables/TSDPathEditor.h>

#import "TSDKeyValueProxyVendingEditor-Protocol.h"

@class NSString;

@interface KNActionGhostEditor : TSDPathEditor <TSDKeyValueProxyVendingEditor>
{
}

+ (BOOL)shouldSuppressMultiselection;
- (id)p_canvasEditor;
- (void)p_handleTabIsBackwards:(BOOL)arg1;
- (void)insertBacktab:(id)arg1;
- (void)insertTab:(id)arg1;
- (void)p_deleteSelectedInfos;
- (void)delete:(id)arg1;
- (void)willResignCurrentEditor;
- (BOOL)wantsToReceiveTextInput;
- (BOOL)shouldRemainOnEditorStackForSelection:(id)arg1 inSelectionPath:(id)arg2 withNewEditors:(id)arg3;
- (void)canvasSelectionDidChangeFromSelection:(id)arg1 toSelection:(id)arg2 withFlags:(unsigned long long)arg3;
- (void)selectionDidChangeFromSelection:(id)arg1 toSelection:(id)arg2 withFlags:(unsigned long long)arg3;
- (id)selectionWillChangeFromSelection:(id)arg1 toSelection:(id)arg2 withFlags:(unsigned long long)arg3 inSelectionPath:(id)arg4 withNewEditors:(id)arg5;
- (BOOL)canAddKnobsForRep:(id)arg1;
@property(readonly, nonatomic) BOOL hasMixedGhostAndDrawableSelection;
- (void)didCollapseActionSequenceForDrawables:(id)arg1;
- (void)willCollapseActionSequenceForDrawables:(id)arg1;
- (id)p_pathSource;
- (BOOL)p_selectedNodesAreHomogeneousForType:(int)arg1;
- (BOOL)p_pathNodeIsSelected;
- (BOOL)p_firstOrLastNodeIsSelected;
- (long long)canPerformEditorAction:(SEL)arg1 withSender:(id)arg2;
- (id)selectedObjectsSupportingSmartShapeAttributes;
- (id)selectedObjectsSupportingFill;
- (id)selectedObjectsSupportingOpacity;
- (id)selectedObjectsSupportingReflection;
- (id)selectedObjectsSupportingShadow;
- (id)selectedObjectsSupportingStroke;
- (void)showPathHUD;
- (id)newMouseEventHandlerAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)tma_formatInspectorPanesShouldContinueEditorStackTraversal;
- (id)keynoteFormatInspectorPaneIdentifiers;
- (id)kn_keynoteAnimationInspectorPaneIdentifiers;
- (id)keyValueProxy;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

