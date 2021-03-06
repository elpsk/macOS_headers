//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FinderKit/FI_TUpdateLayerView.h>

#import "NSDraggingDestination.h"
#import "TCollectionViewItemViewProtocol.h"
#import "TICloudBadgeButtonContainer.h"
#import "TImageAttachmentContainer.h"
#import "TMarkTornDown.h"

@class NSColor, NSFont, NSImage, NSObject<TDraggingDestinationDelegate><TSpringLoadingDestinationDelegate>, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface FI_TIconView : FI_TUpdateLayerView <TCollectionViewItemViewProtocol, TICloudBadgeButtonContainer, TImageAttachmentContainer, NSDraggingDestination, TMarkTornDown>
{
    struct TNSRef<FI_TTrackingImageView, void> _iconView;
    struct TNSRef<FI_TIconSelectionView, void> _iconSelectionView;
    TNSRef_cc605514 _badgeImageView;
    TNSRef_cc605514 _vendorBadgeImageView;
    struct TNSRef<FI_TDesktopInlineProgressView, void> _inlineProgressView;
    struct TNSRef<FI_TDesktopTitleBubbleView, void> _titleBubbleView;
    struct TNSRef<FI_TTextField, void> _subtitleField;
    struct TICloudStateCoordinator _iCloudStateCoordinator;
    function_b1fce659 _iCloudDownloadHandler;
    struct TString _iCloudSubtitleToolTip;
    struct CGSize _iconSize;
    struct TString _titleStr;
    struct TNSRef<NSFont, void> _titleFont;
    struct TNSRef<NSColor, void> _titleFontColor;
    NSSet *_subtitleStringSet;
    struct TNSRef<NSFont, void> _subtitleFont;
    struct TNSRef<NSColor, void> _subtitleFontColor;
    double _gridSpacing;
    vector_12bd641b _tagColorIndexes;
    struct TNSRef<NSImage, void> _badgeImage;
    struct TNSRef<NSImage, void> _vendorBadgeImage;
    struct TNSRef<NSColor, void> _superViewsBackgroundColor;
    struct TNSRef<NSImage, void> _placeholderTagImage;
    struct TNSRef<NSImage, void> _imageAttachment;
    _Bool _inlineProgressNeedsBaselineRefresh;
    _Bool _isTitleOnBottom;
    _Bool _isSelected;
    _Bool _isDropTarget;
    _Bool _isDragItem;
    _Bool _isTitleEnabled;
    _Bool _isSubtitleEnabled;
    _Bool _isEditing;
    _Bool _isSpringBlinkingOff;
    _Bool _useActiveAppearance;
    _Bool _isOverlappingTitle;
    _Bool _isSelectionBordered;
    _Bool _isTornDown;
    struct TNSWeakPtr<NSObject<TDraggingDestinationDelegate, TSpringLoadingDestinationDelegate>, void> _weakDelegate;
    struct TNSRef<NSAccessibilityCustomAction, void> _axOpenAction;
    struct TKeyValueBinder _titleBubbleViewHiddenBinder;
    struct TKeyValueBinder _titleBubbleViewSelectedBinder;
    struct TKeyValueBinder _subtitleFieldHiddenBinder;
    struct TKeyValueBinder _iconSelectionViewHiddenBinder;
    struct TKeyValueBinder _iconSelectionViewIconSizeBinder;
    _Bool _titleDimmed;
}

+ (id)keyPathsForValuesAffectingSubtitleFieldIsHidden;
+ (id)keyPathsForValuesAffectingTitleBubbleViewIsHidden;
+ (id)keyPathsForValuesAffectingTitleBubbleViewIsSelected;
+ (id)keyPathsForValuesAffectingIconSelectionViewIsHidden;
+ (Class)iconSelectionViewClass;
@property(getter=isTornDown) _Bool tornDown; // @synthesize tornDown=_isTornDown;
@property(getter=isSpringBlinkingOff) _Bool springBlinkingOff; // @synthesize springBlinkingOff=_isSpringBlinkingOff;
@property(getter=isEditing) _Bool editing; // @synthesize editing=_isEditing;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionNames;
- (BOOL)isAccessibilitySelected;
- (id)accessibilityTitle;
- (id)accessibilityHelp;
- (id)accessibilityFilename;
- (id)accessibilityRoleDescription;
- (id)accessibilityRole;
- (struct CGRect)accessibilityFrame;
- (BOOL)isAccessibilityEnabled;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void)layoutVendorBadgeImageView:(const struct CGRect *)arg1;
- (void)layoutBadgeImageView:(const struct CGRect *)arg1;
- (void)dirtyLayoutIfNeededWithBadge:(id)arg1 badgeImageView:(TNSRef_cc605514 *)arg2;
- (void)layoutSubtitleField:(const struct CGRect *)arg1;
- (void)configureSubtitleFieldBeforeLayout;
- (void)dirtyLayoutForSubtitleBubbleViewIfNeeded;
- (void)layoutTitleBubbleView:(const struct CGRect *)arg1;
- (void)configureTitleBubbleViewBeforeLayout;
- (void)dirtyLayoutForTitleBubbleViewIfNeeded;
- (void)layoutIconSelectionView:(struct CGRect)arg1;
- (void)dirtyLayoutForIconSelectionViewIfNeeded;
- (void)layoutTitleAndSubtitleInBounds:(const struct CGRect *)arg1 iconViewFrame:(const struct CGRect *)arg2;
- (void)layout;
- (_Bool)isAnimating;
- (id)subtitleFieldAttributesWithParagraphStyleHint:(id)arg1;
- (void)updateSubtitleFieldAttributes;
- (id)titleFieldAttributesWithParagraphStyleHint:(id)arg1;
- (void)updateTitleFieldAttributes;
- (void)updateInlineProgressBaselineLayout:(const struct CGRect *)arg1;
- (void)updateInlineProgressView;
- (void)updateInlineProgressViewCancelHandler:(const function_b1fce659 *)arg1;
- (void)setInlineProgressStatus:(const struct TNodeProgressStatus *)arg1 cancelHandler:(const function_b1fce659 *)arg2;
- (_Bool)subtitleFieldIsHiddenForLayout;
- (_Bool)subtitleFieldIsHidden;
- (_Bool)titleBubbleViewIsHiddenForLayout;
- (_Bool)titleBubbleViewIsHidden;
- (_Bool)titleBubbleViewIsSelected;
- (_Bool)iconSelectionViewIsHidden;
- (void)clearIconTracking;
- (_Bool)isIconTracking:(id)arg1;
- (void)stopIconTracking:(id)arg1;
- (void)startIconTracking:(id)arg1 options:(unsigned long long)arg2 userInfo:(id)arg3;
- (_Bool)isIconOrTextInRect:(const struct CGRect *)arg1;
- (id)hitTestInIconOrText:(const struct CGPoint *)arg1;
- (id)_hitTestInIconOrTextWithLocalPoint:(const struct CGPoint *)arg1;
- (id)hitTestInText:(const struct CGPoint *)arg1;
- (id)_hitTestInTextWithLocalPoint:(const struct CGPoint *)arg1;
- (id)hitTestInIcon:(struct CGPoint)arg1;
- (id)_hitTestInIconWithLocalPoint:(const struct CGPoint *)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (id)_hitTestWithLocalPoint:(const struct CGPoint *)arg1;
- (BOOL)wantsPeriodicDraggingUpdates;
- (void)concludeDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)updateDraggingItemsForDrag:(id)arg1;
- (void)draggingEnded:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)_windowChangedKeyState;
- (BOOL)acceptsFirstResponder;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)mouseDown:(id)arg1;
- (struct CGRect)titleEditingFrame;
- (struct CGRect)titleDraggingFrame;
- (_Bool)overlappingTitle:(id)arg1 inCollectionView:(id)arg2;
- (id)titleBubbleView;
- (struct CGRect)titleBubbleFrame;
- (struct CGRect)titleFrame;
- (struct CGRect)_iconFrame;
- (struct CGRect)iconFrame;
- (id)dragFlockingTitleImage:(struct CGRect *)arg1;
- (id)dragFlockingIconImage:(struct CGRect *)arg1;
- (id)_titleViews;
- (_Bool)isLTRLocalization;
@property _Bool useActiveAppearance; // @synthesize useActiveAppearance=_useActiveAppearance;
@property(getter=isDragItem) _Bool dragItem; // @synthesize dragItem=_isDragItem;
@property(getter=isDropTarget) _Bool dropTarget; // @synthesize dropTarget=_isDropTarget;
@property(getter=isOverlappingTitle) _Bool overlappingTitle; // @dynamic overlappingTitle;
@property(getter=isSelectionBordered) _Bool selectionBordered; // @synthesize selectionBordered=_isSelectionBordered;
@property(getter=isSelected) _Bool selected; // @synthesize selected=_isSelected;
@property(getter=isTitleDimmed) _Bool titleDimmed; // @synthesize titleDimmed=_titleDimmed;
@property(getter=isIconDimmed) _Bool iconDimmed; // @dynamic iconDimmed;
- (_Bool)isDimmed;
@property(getter=isSubtitleEnabled) _Bool subtitleEnabled; // @dynamic subtitleEnabled;
@property(getter=isTitleEnabled) _Bool titleEnabled; // @dynamic titleEnabled;
@property(getter=isTitleOnBottom) _Bool titleOnBottom; // @dynamic titleOnBottom;
@property(getter=isIconHidden) _Bool iconHidden; // @dynamic iconHidden;
@property double gridSpacing; // @dynamic gridSpacing;
@property const vector_12bd641b *tagColorIndexes; // @dynamic tagColorIndexes;
@property(copy) NSImage *vendorBadgeImage;
@property(copy) NSImage *badgeImage; // @dynamic badgeImage;
@property(copy) NSColor *subtitleFontColor; // @dynamic subtitleFontColor;
- (id)_subtitleFontColor;
- (double)_subtitleFontSize;
- (double)subtitleFontSize;
- (void)updateSubtitleFontForTitleFontChange;
@property(copy) NSFont *subtitleFont;
@property(copy) NSSet *subtitleStringSet; // @dynamic subtitleStringSet;
- (_Bool)setImageAttachment:(id)arg1 toolTip:(const struct TString *)arg2;
- (void)setICloudBadge:(int)arg1 toolTip:(const struct TString *)arg2 clickHandler:(const function_b1fce659 *)arg3;
@property(copy) NSColor *titleFontColor; // @dynamic titleFontColor;
- (id)_titleFontColor;
- (double)titleFontSize;
@property(copy) NSFont *titleFont; // @dynamic titleFont;
@property(copy) NSString *titleStr; // @dynamic titleStr;
@property struct CGSize iconSize; // @dynamic iconSize;
@property(copy) NSImage *iconImage; // @dynamic iconImage;
@property __weak NSObject<TDraggingDestinationDelegate><TSpringLoadingDestinationDelegate> *delegate; // @dynamic delegate;
- (id)popoverAnchorView;
- (void)updateSuperViewsBackgroundColor:(id)arg1;
- (void)prepareForReuse;
- (void)aboutToTearDown;
- (void)initCommon;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

