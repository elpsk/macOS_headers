//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TViewController.h"

#import "NSDraggingSource-Protocol.h"
#import "NSSharingServiceDelegate-Protocol.h"
#import "NSSharingServicePickerDelegate-Protocol.h"
#import "NSSharingServicePickerTouchBarItemDelegate-Protocol.h"
#import "NSTouchBarDelegate-Protocol.h"
#import "TArchiveTaskDelegateProtocol-Protocol.h"
#import "TBrowserViewDelegate-Protocol.h"
#import "TDropOperationDelegateProtocol-Protocol.h"
#import "TFloatingInputWindowDelegateProtocol-Protocol.h"
#import "TGroupAsFolderDelegate-Protocol.h"
#import "TMarkTornDown-Protocol.h"
#import "TNodeRenameDelegate-Protocol.h"
#import "TNodeTaskDelegateProtocol-Protocol.h"
#import "TQLPreviewWindowControllerProtocol-Protocol.h"
#import "TTypeSelectDelegate-Protocol.h"
#import "_NSQuickActionItemSource-Protocol.h"

@class NSString, NSTouchBar, NSView, TNodeViewSettings;
@protocol NSServicesRequestor, _NSQuickActionItemSource;

@interface TBaseBrowserViewController : TViewController <NSDraggingSource, NSSharingServiceDelegate, NSSharingServicePickerDelegate, TBrowserViewDelegate, TDropOperationDelegateProtocol, TNodeTaskDelegateProtocol, TQLPreviewWindowControllerProtocol, TArchiveTaskDelegateProtocol, TGroupAsFolderDelegate, TNodeRenameDelegate, TTypeSelectDelegate, TMarkTornDown, NSSharingServicePickerTouchBarItemDelegate, _NSQuickActionItemSource, NSTouchBarDelegate, TFloatingInputWindowDelegateProtocol>
{
    struct TNSRef<NSTouchBar, void> _finderTouchBar;
    struct TNSRef<NSCustomTouchBarItem, void> _dfrBackForwardTouchBarItem;
    struct TNSRef<NSCustomTouchBarItem, void> _dfrViewSwitcherTouchBarItem;
    struct TNSRef<NSCustomTouchBarItem, void> _dfrEmptyTrashTouchBarItem;
    struct TNSRef<TNodeViewSettings, void> _viewSettings;
    double _iconSize;
    double _textSize;
    _Bool _showIconPreview;
    _Bool _isEditingTags;
    _Bool _isTornDown;
    _Bool _darkBackground;
    struct TNSRef<TBulkRenameController, void> _bulkRenameController;
    struct TFENode _nodeToDoubleClick;
    struct TFENodeVector fOrderedSelection;
    struct TNSRef<NSSharingServicePicker, void> _toolbarSharingServicePicker;
    struct TNSRef<NSView, void> _anchoringViewForSharingService;
    struct TNSRef<TCoverWindow, void> _desktopCoverWindow;
    struct TNotificationCenterObserver _browserViewWillMoveToWindowObserver;
    struct TNotificationCenterObserver _browserViewDidMoveToWindowObserver;
    struct TKeyValueObserver _browserViewEffectiveAppearanceObserver;
    struct TNotificationCenterObserver _browserViewBackingPropertiesObserver;
    struct TNotificationCenterObserver _browserWindowDidBecomeMainObserver;
    struct TNotificationCenterObserver _browserWindowDidResignMainObserver;
    struct TNotificationCenterObserver _browserWindowDidBecomeKeyObserver;
    struct TNotificationCenterObserver _browserWindowDidResignKeyObserver;
    struct TNotificationCenterObserver _tagsPopoverDidCloseObserver;
    struct TNSRef<NSTouchBar, void> _noSelectionOnDesktopTouchBar;
    _Bool _shouldShowNoSelectionOnDesktopTouchBar;
    struct TNSRef<NSPopoverTouchBarItem, void> _dfrViewOptionsTouchBarItem;
    struct TNSRef<NSCustomTouchBarItem, void> _dfrQuickLookTouchBarItem;
    struct TNSRef<NSSharingServicePickerTouchBarItem, void> _dfrShareTouchBarItem;
    struct TNSRef<NSPopoverTouchBarItem, void> _dfrAddTagsTouchBarItem;
    struct TNSRef<NSCustomTouchBarItem, void> _dfrNewFolderTouchBarItem;
    struct TNSRef<NSCustomTouchBarItem, void> _dfrNewFolderWithSelectionTouchBarItem;
    struct TNSRef<NSCustomTouchBarItem, void> _dfrNewWindowTouchBarItem;
    struct TNSRef<NSCustomTouchBarItem, void> _dfrNewTabTouchBarItem;
    struct TNSRef<NSCustomTouchBarItem, void> _dfrMoveToTrashTouchBarItem;
    struct TNSRef<NSCustomTouchBarItem, void> _dfrConnectToServerTouchBarItem;
    struct TNSRef<NSPopoverTouchBarItem, void> _dfrOpenWithTouchBarItem;
    struct TNSRef<NSCustomTouchBarItem, void> _dfrGoToTouchBarItem;
    struct TNSRef<NSPopoverTouchBarItem, void> _dfrMoveToTouchBarItem;
    struct TNSRef<NSPopoverTouchBarItem, void> _dfrCopyToTouchBarItem;
    struct TNSRef<NSCustomTouchBarItem, void> _dfrGetInfoTouchBarItem;
    _Bool _areMoveToTouchBarItemUpdatesDisabled;
    _Bool _shouldDFRMove;
    struct TNSRef<NSObject, void> _flagsChangedEventMonitor;
    _Bool _isCustomizingDFR;
    struct TNotificationCenterObserver _willEnterDFRCustomizationObserver;
    struct TNotificationCenterObserver _willExitDFRCustomizationObserver;
    _Bool _suppressesDFRPopoverDismissal;
    struct TNotificationCenterObserver _dfrTokenFieldTagEditorViewWillDisappearObserver;
}

+ (void)addTagsItemsToFileMenu:(id)arg1;
+ (struct TTypeSelectController *)typeSelectControllerWithDelegate:(id)arg1;
+ (id)readStateAttachedToFile:(const struct TFENode *)arg1;
+ (void)attachState:(id)arg1 toFile:(const struct TFENode *)arg2;
@property(readonly, nonatomic, getter=isDarkBackground) _Bool darkBackground; // @synthesize darkBackground=_darkBackground;
@property struct TFENode nodeToDoubleClick; // @synthesize nodeToDoubleClick=_nodeToDoubleClick;
@property(nonatomic) _Bool suppressesDFRPopoverDismissal; // @synthesize suppressesDFRPopoverDismissal=_suppressesDFRPopoverDismissal;
@property(nonatomic) _Bool shouldDFRMove; // @synthesize shouldDFRMove=_shouldDFRMove;
@property(nonatomic) _Bool areMoveToTouchBarItemUpdatesDisabled; // @synthesize areMoveToTouchBarItemUpdatesDisabled=_areMoveToTouchBarItemUpdatesDisabled;
@property(readonly, getter=isTornDown) _Bool tornDown; // @synthesize tornDown=_isTornDown;
@property(readonly, nonatomic) _Bool isEditingTags; // @synthesize isEditingTags=_isEditingTags;
@property(nonatomic) _Bool showIconPreview; // @synthesize showIconPreview=_showIconPreview;
@property(nonatomic) double textSize; // @synthesize textSize=_textSize;
@property(nonatomic) double iconSize; // @synthesize iconSize=_iconSize;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)cmdPerformQuickActionFromButton:(id)arg1;
- (void)cmdPerformQuickActionFromMenuItem:(id)arg1;
- (void)performQuickAction:(id)arg1;
- (void)cmdBackUpNow:(id)arg1;
- (_Bool)validateBackUpNow:(id)arg1;
- (void)cmdMakeAlias:(id)arg1;
- (_Bool)validateMakeAlias:(id)arg1;
- (_Bool)newAliasCompletedCallback:(const struct TFENodeVector *)arg1 newAliasOp:(id)arg2;
- (void)cmdArchiveWithPassword:(id)arg1;
- (_Bool)validateArchiveWithPassword:(id)arg1;
- (void)cmdArchive:(id)arg1;
- (_Bool)validateArchive:(id)arg1;
- (_Bool)validateArchiveCommon:(id)arg1 forCommand:(SEL)arg2;
- (void)setProperties:(const struct TFENodePropertyList *)arg1 onArchiveNode:(const struct TFENode *)arg2;
- (_Bool)shouldAllowArchivingNodes:(const struct TFENodeVector *)arg1;
- (void)cmdNewBurnableFolder:(id)arg1;
- (_Bool)validateNewBurnableFolder:(id)arg1;
- (void)updateBulkRename;
- (void)bulkRenameComplete;
- (void)cmdRename:(id)arg1;
- (_Bool)validateRename:(id)arg1;
- (void)cmdNewFolderAtMouseLocation:(id)arg1;
- (_Bool)validateNewFolderAtMouseLocation:(id)arg1;
- (void)cmdNewFolder:(id)arg1;
- (_Bool)validateNewFolder:(id)arg1;
- (void)cmdNewFolderCommon:(const struct TFENodeVector *)arg1 createBurnFolder:(_Bool)arg2 createAtMouseLoc:(_Bool)arg3;
- (_Bool)commonValidateNewFolder:(SEL)arg1;
- (_Bool)newFolderCompletedCallback:(const struct TFENode *)arg1 createdBurnableFolder:(_Bool)arg2 newFolderOp:(id)arg3;
- (void)updatePreviewOptionsWindow;
- (void)cmdShowInspector:(id)arg1;
- (_Bool)validateShowInspector:(id)arg1;
- (void)updateInspectorWindow;
- (void)cmdShowStaticInfoSummary:(id)arg1;
- (_Bool)validateShowStaticInfoSummary:(id)arg1;
- (void)cmdShowStaticInfo:(id)arg1;
- (_Bool)validateShowStaticInfo:(id)arg1;
- (_Bool)commonValidateGetInfo:(id)arg1;
- (_Bool)validateGetInfoWithNodes:(const struct TFENodeVector *)arg1;
- (void)cmdManageStorage:(id)arg1;
- (_Bool)validateManageStorage:(id)arg1;
- (void)cmdEncrypt:(id)arg1;
- (_Bool)validateEncrypt:(id)arg1;
- (void)cmdEjectAll:(id)arg1;
- (void)cmdEjectOne:(id)arg1;
- (void)cmdEject:(id)arg1;
- (void)commonEject:(SEL)arg1 forceOne:(_Bool)arg2 forceAll:(_Bool)arg3;
- (_Bool)validateEjectAll:(id)arg1;
- (_Bool)validateEjectOne:(id)arg1;
- (_Bool)validateEject:(id)arg1;
- (_Bool)commonValidateEject:(id)arg1 forceOne:(_Bool)arg2 forceAll:(_Bool)arg3;
- (void)cmdRemoveLabel7:(id)arg1;
- (void)cmdRemoveLabel6:(id)arg1;
- (void)cmdRemoveLabel5:(id)arg1;
- (void)cmdRemoveLabel4:(id)arg1;
- (void)cmdRemoveLabel3:(id)arg1;
- (void)cmdRemoveLabel2:(id)arg1;
- (void)cmdRemoveLabel1:(id)arg1;
- (void)commonRemoveLabel:(long long)arg1;
- (void)cmdSetTagColor:(id)arg1;
- (void)cmdSetLabel7:(id)arg1;
- (void)cmdSetLabel6:(id)arg1;
- (void)cmdSetLabel5:(id)arg1;
- (void)cmdSetLabel4:(id)arg1;
- (void)cmdSetLabel3:(id)arg1;
- (void)cmdSetLabel2:(id)arg1;
- (void)cmdSetLabel1:(id)arg1;
- (void)commonSetLabel:(long long)arg1;
- (void)cmdSetLabel0:(id)arg1;
- (void)cmdSetLabel:(id)arg1;
- (_Bool)validateSetLabel:(id)arg1;
- (void)cmdEraseRewritableDisc:(id)arg1;
- (_Bool)validateEraseRewritableDisc:(id)arg1;
- (_Bool)validateDecreaseIconSize:(id)arg1;
- (_Bool)validateIncreaseIconSize:(id)arg1;
- (void)cmdBurn:(id)arg1;
- (_Bool)validateBurn:(id)arg1;
- (void)cmdArrange:(id)arg1;
- (_Bool)validateArrange:(id)arg1;
- (void)cmdSortBy:(id)arg1;
- (_Bool)validateSortBy:(id)arg1;
- (void)cmdPrintItems:(id)arg1;
- (_Bool)validatePrintItems:(id)arg1;
- (void)cmdQuickLookFromToolbar:(id)arg1;
- (_Bool)validateQuickLookFromToolbar:(id)arg1;
- (void)cmdSlideshow:(id)arg1;
- (_Bool)validateSlideshow:(id)arg1;
- (void)cmdQuickLook:(id)arg1;
- (_Bool)validateQuickLook:(id)arg1;
- (_Bool)validateQuickLookWithNodes:(const struct TFENodeVector *)arg1;
- (void)cmdShowOriginal:(id)arg1;
- (_Bool)validateShowOriginal:(id)arg1;
- (void)cmdShowInEnclosingFolder:(id)arg1;
- (_Bool)validateShowInEnclosingFolder:(id)arg1;
- (void)cmdOpenParentAltBrowse:(id)arg1;
- (_Bool)validateOpenParentAltBrowse:(id)arg1;
- (void)cmdOpenParent:(id)arg1;
- (void)cmdOpenParentCommon:(id)arg1;
- (_Bool)validateOpenParent:(id)arg1;
- (_Bool)validateOpenParentCommon:(id)arg1;
- (struct TFENode)parentNodeToOpenForTarget:(struct TFENode)arg1;
- (void)cmdAlwaysOpenWith:(id)arg1;
- (_Bool)validateAlwaysOpenWith:(id)arg1;
- (void)cmdOpenWith:(id)arg1;
- (void)openWithCommon:(id)arg1;
- (_Bool)validateOpenWith:(id)arg1;
- (_Bool)commonValidateOpenWith:(id)arg1;
- (void)cmdOpenWithOther:(id)arg1;
- (void)cmdOpenWithAppStore:(id)arg1;
- (_Bool)validateOpenWithOther:(id)arg1;
- (void)cmdOpenWithDownArrow:(id)arg1;
- (void)cmdOpenWithOptionDownArrow:(id)arg1;
- (_Bool)validateOpenWithDownArrow:(id)arg1;
- (void)cmdOpenAltBrowse:(id)arg1;
- (_Bool)validateOpenAltBrowse:(id)arg1;
- (void)cmdOpenOptionBrowse:(id)arg1;
- (_Bool)validateOpenOptionBrowse:(id)arg1;
- (void)cmdOpenShiftBrowse:(id)arg1;
- (_Bool)validateOpenShiftBrowse:(id)arg1;
- (void)cmdOpenInNewWindow:(id)arg1;
- (void)spawnInWindow;
- (void)cmdOpenInNewTab:(id)arg1;
- (void)cmdOpen:(id)arg1;
- (_Bool)validateOpen:(id)arg1;
- (_Bool)commonValidateOpen:(id)arg1;
- (_Bool)handleValidateOpen:(const struct TFENodeVector *)arg1;
- (void)cmdShowPackageContents:(id)arg1;
- (_Bool)validateShowPackageContents:(id)arg1;
- (void)showingTagsPopover:(id)arg1;
- (void)handleCmdEditTags:(id)arg1;
- (struct TFENode)wellPositionedNodeFromNodes:(const struct TFENodeVector *)arg1;
- (_Bool)handleValidateEditTags:(id)arg1;
- (void)cmdToggleFavoriteTag:(id)arg1;
- (_Bool)validateToggleFavoriteTag:(id)arg1;
- (void)cmdRemoveAllTags:(id)arg1;
- (_Bool)validateRemoveAllTags:(id)arg1;
- (void)cmdRemoveTag:(id)arg1;
- (_Bool)validateRemoveTag:(id)arg1;
- (void)handleMoveToTrashCommand:(const struct TFENodeVector *)arg1 immediately:(_Bool)arg2;
- (void)handleMoveToTrashOrPutBackCommand:(const struct TFENodeVector *)arg1;
- (void)cmdEvictNow:(id)arg1;
- (_Bool)validateEvictNow:(id)arg1;
- (void)cmdDownloadNow:(id)arg1;
- (_Bool)validateDownloadNow:(id)arg1;
- (void)cmdMoveToTrashFromToolbar:(id)arg1;
- (_Bool)validateMoveToTrashFromToolbar:(id)arg1;
- (void)cmdMoveToTrash:(id)arg1;
- (_Bool)validateMoveToTrash:(id)arg1;
- (void)cmdDeleteImmediately:(id)arg1;
- (_Bool)validateDeleteImmediately:(id)arg1;
- (void)cmdMoveItemsHere:(id)arg1;
- (_Bool)validateMoveItemsHere:(id)arg1;
- (void)cmdDuplicateExactly:(id)arg1;
- (_Bool)validateDuplicateExactly:(id)arg1;
- (void)cmdAddToSidebar:(id)arg1;
- (_Bool)validateAddToSidebar:(id)arg1;
- (void)cmdAddToDock:(id)arg1;
- (_Bool)validateAddToDock:(id)arg1;
- (void)handleCmdGroupAsFolder:(id)arg1;
- (_Bool)handleValidateGroupAsFolder:(id)arg1;
- (_Bool)canGroupNodesAsFolder:(const struct TFENodeVector *)arg1 minimumItemCount:(unsigned long long)arg2 maxNodesToCheck:(unsigned long long)arg3;
- (void)cmdDuplicate:(id)arg1;
- (_Bool)validateDuplicate:(id)arg1;
- (void)handleDuplicateCommand:(const struct TFENodeVector *)arg1 exactly:(_Bool)arg2;
- (void)cmdPasteExactly:(id)arg1;
- (_Bool)validatePasteExactly:(id)arg1;
- (void)importFromDevice:(id)arg1;
- (void)paste:(id)arg1;
- (_Bool)validatePaste:(id)arg1;
- (_Bool)commonValidatePaste:(SEL)arg1 itemCount:(unsigned long long *)arg2;
- (void)cmdCopyAsPathname:(id)arg1;
- (_Bool)validateCopyAsPathname:(id)arg1;
- (void)copy:(id)arg1;
- (_Bool)validateCopy:(id)arg1;
- (_Bool)validateCopyCommon:(const struct TFENodeVector *)arg1;
- (void)cut:(id)arg1;
- (_Bool)validateCut:(id)arg1;
- (_Bool)validateDeselectAll:(id)arg1;
- (void)cmdDeselectAll:(id)arg1;
- (_Bool)validateSelectAll:(id)arg1;
- (void)selectAll:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (struct TriStateBool)includeTargetForCommandSelector:(SEL)arg1;
- (_Bool)canHaveRedundantReplicaNodes;
- (_Bool)groupingByTag;
- (void)attemptToSelectPendingNodes;
- (struct TFENodeVector)pendingNodesToSelectUpTo:(unsigned long long)arg1;
- (struct TFENodeVector)commandTarget:(SEL)arg1;
- (struct TFENodeVector)commandTarget:(SEL)arg1 upTo:(unsigned long long)arg2;
- (struct TFENodeVector)commandValidationTarget:(SEL)arg1 isPartial:(_Bool *)arg2;
- (struct TFENodeVector)commandValidationTarget:(SEL)arg1;
- (unsigned long long)getCommandTarget:(SEL)arg1 outNodes:(struct TFENodeVector *)arg2 upTo:(unsigned long long)arg3;
- (unsigned long long)getCommandTarget:(SEL)arg1 outNodes:(struct TFENodeVector *)arg2;
- (void)clearNoSelectionOnDesktopTouchBarIfNeeded;
- (void)updateShouldShowNoSelectionOnDesktopTouchBar:(const struct TFENodeVector *)arg1;
- (void)willExitCustomization:(id)arg1;
- (void)willEnterCustomization:(id)arg1;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (id)makeTouchBar;
- (void)configureTouchBar:(id)arg1 selectedItems:(const struct TFENodeVector *)arg2;
- (id)copyToTouchBarItemForNodes:(const struct TFENodeVector *)arg1;
- (id)dfrCopyToTouchBarItem;
- (id)goToTouchBarItem;
- (id)openWithTouchBarItemForNodes:(const struct TFENodeVector *)arg1;
- (id)connectToServerTouchBarItem;
- (id)moveToTrashTouchBarItemForNodes:(const struct TFENodeVector *)arg1;
- (id)newTabTouchBarItem;
- (id)newWindowTouchBarItem;
- (id)viewOptionsTouchBarItem;
- (id)viewSwitcherTouchBarItem;
- (void)updateViewSwitcherTouchBarItemClickHandlers;
- (void)validateViewSwitcherDFR;
- (id)backForwardTouchBarItem;
- (void)updateBackForwardTouchBarItemClickHandlers;
- (void)validateBackForwardDFR;
- (id)quickLookTouchBarItemForNodes:(const struct TFENodeVector *)arg1;
- (id)getInfoTouchBarItemForNodes:(const struct TFENodeVector *)arg1;
- (id)newFolderTouchBarItem;
- (id)shareTouchBarItemForNodes:(const struct TFENodeVector *)arg1;
- (id)itemsForSharingServicePickerTouchBarItem:(id)arg1;
- (id)moveToTouchBarItemForNodes:(const struct TFENodeVector *)arg1;
- (id)dfrMoveToTouchBarItem;
- (void)updateMoveToTouchBarItem:(_Bool)arg1 isTargetNodesEmpty:(_Bool)arg2;
- (id)addTagsTouchBarItemForNodes:(const struct TFENodeVector *)arg1;
- (id)dfrAddTagsViewController;
- (id)dfrAddTagsTouchBarItem;
- (id)newFolderWithSelectionTouchBarItemForNodes:(const struct TFENodeVector *)arg1;
- (id)emptyTrashTouchBarItem;
- (id)deleteButtonsGroupTouchBarItemForNodes:(const struct TFENodeVector *)arg1;
- (id)deleteSelectionTouchBarItemForNodes:(const struct TFENodeVector *)arg1;
- (id)deleteAllTouchBarItemForNodes:(const struct TFENodeVector *)arg1;
- (id)putBackTouchBarItemForNodes:(const struct TFENodeVector *)arg1;
- (void)validateTouchBar;
- (_Bool)validateTouchBarItemIdentifier:(struct TString)arg1 targetNodes:(const struct TFENodeVector *)arg2;
@property(retain, nonatomic) NSTouchBar *finderTouchBar;
- (id)allItemIdentifiersForTouchBar:(id)arg1;
- (void)dismissDFRPopovers;
- (void)groupAsFolderUndoCompleted:(struct TNodeTask *)arg1 forGroupFolder:(const struct TFENode *)arg2 nodes:(const struct TFENodeVector *)arg3 status:(int)arg4;
- (void)groupAsFolderUndoStarted:(struct TNodeTask *)arg1 forFolder:(const struct TFENode *)arg2;
- (void)groupAsFolderCompleted:(struct TNodeTask *)arg1 withFolder:(const struct TFENode *)arg2 status:(int)arg3;
- (void)groupAsFolder:(struct TNodeTask *)arg1 createdGroupFolder:(const struct TFENode *)arg2;
- (_Bool)shouldGroupAsFolderOpenInNewWindow:(const struct TFENode *)arg1;
- (id)popoverAnchorViewForNode:(const struct TFENode *)arg1;
- (struct CGRect)globalZoomRectForNode:(const struct TFENode *)arg1;
- (struct CGRect)zoomRectForNode:(const struct TFENode *)arg1;
- (struct CGRect)globalIconFrameForNode:(const struct TFENode *)arg1;
- (struct CGRect)iconFrameForNode:(const struct TFENode *)arg1;
- (struct CGRect)globalFrameForNode:(const struct TFENode *)arg1;
- (struct CGRect)frameForNode:(const struct TFENode *)arg1;
- (_Bool)cmdOpenQuickActionsPrefPane:(id)arg1;
- (_Bool)cmdTrimMedia:(id)arg1;
- (_Bool)validateTrimMedia:(id)arg1;
- (_Bool)cmdMarkup:(id)arg1;
- (_Bool)validateMarkup:(id)arg1;
- (_Bool)editSelectionWithQuicklookEditMode:(long long)arg1;
- (void)cmdCreateAndOpenPDF:(id)arg1;
- (_Bool)validateCreateAndOpenPDF:(id)arg1;
- (void)cmdCreatePDF:(id)arg1;
- (_Bool)validateCreatePDF:(id)arg1;
- (void)createPDFAndOpen:(_Bool)arg1;
- (void)cmdRotateCounterclockwise:(id)arg1;
- (void)cmdRotateClockwise:(id)arg1;
- (void)rotateNodes:(const struct TFENodeVector *)arg1 clockwise:(_Bool)arg2;
- (_Bool)commonValidateRotate:(id)arg1;
- (_Bool)validateRotateCounterclockwise:(id)arg1;
- (_Bool)validateRotateClockwise:(id)arg1;
- (_Bool)validateQuickAction:(id)arg1;
- (void)cmdQuickActions:(id)arg1;
- (void)sharingService:(id)arg1 didShareItems:(id)arg2;
- (void)sharingService:(id)arg1 didFailToShareItems:(id)arg2 error:(id)arg3;
- (id)anchoringViewForSharingService:(id)arg1 showRelativeToRect:(struct CGRect *)arg2 preferredEdge:(unsigned long long *)arg3;
- (void)sharingServicePicker:(id)arg1 didChooseSharingService:(id)arg2;
- (void)sharingService:(id)arg1 willShareItems:(id)arg2;
- (id)sharingServicePicker:(id)arg1 sharingServicesForItems:(id)arg2 proposedSharingServices:(id)arg3;
- (void)handlePreflightServicewithItems:(id)arg1 service:(id)arg2;
- (id)sharingServicePicker:(id)arg1 delegateForSharingService:(id)arg2;
- (id)sharingService:(id)arg1 sourceWindowForShareItems:(id)arg2 sharingContentScope:(long long *)arg3;
- (id)sharingService:(id)arg1 transitionImageForShareItem:(id)arg2 contentRect:(struct CGRect *)arg3;
- (struct CGRect)sharingService:(id)arg1 sourceFrameOnScreenForShareItem:(id)arg2;
- (void)cmdShareFromToolbarItem:(id)arg1;
@property(retain, nonatomic) NSView *anchoringViewForSharingService;
- (void)shareWithSharingService:(id)arg1;
- (_Bool)validateShare:(id)arg1;
- (void)cmdShare:(id)arg1;
@property(readonly) __weak id <NSServicesRequestor> servicesRequestor;
- (void)quickAction:(id)arg1 didFailWithRequestor:(id)arg2 error:(id)arg3;
- (void)quickAction:(id)arg1 didPerformWithRequestor:(id)arg2;
- (void)quickAction:(id)arg1 willPerformWithRequestor:(id)arg2;
- (_Bool)writeSelectionToPasteboard:(id)arg1 types:(id)arg2;
- (id)validRequestorForSendType:(id)arg1 returnType:(id)arg2;
- (_Bool)validateImportFromDevice;
- (_Bool)getSelectionForServices:(struct TFENodeVector *)arg1;
- (struct CGRect)dragFlockingFrameForDraggingItem:(id)arg1 dropTargetView:(id)arg2 mouseLocationInView:(const struct CGPoint *)arg3;
- (struct CGRect)dragFlockingFrameForNode:(const struct TFENode *)arg1 dropTargetView:(id)arg2;
- (struct CGSize)dragFlockingFrameSizeForDropTargetView:(id)arg1;
- (id)dragFlockingImageComponentsForNode:(const struct TFENode *)arg1 dropTargetView:(id)arg2;
- (unsigned long long)dragOperationWhenMovingInsideTargetAndCheckingModifiers;
- (struct TFENode)nodeForDraggingItem:(id)arg1;
- (_Bool)checkForTEFFilesInContainer:(const struct TFENode *)arg1;
- (void)updateDraggingItemsForDrag:(id)arg1 dropTargetView:(id)arg2;
- (_Bool)waitingForThumbnailForNode:(const struct TFENode *)arg1;
- (_Bool)performDragOperation:(id)arg1 dropTargetView:(id)arg2;
- (void)draggingEnded:(id)arg1 dropTargetView:(id)arg2;
- (void)draggingExited:(id)arg1 dropTargetView:(id)arg2;
- (unsigned long long)draggingEntered:(id)arg1 dropTargetView:(id)arg2;
- (void)configureDraggedTypes;
- (id)draggedTypesForDropTargetView:(id)arg1;
- (BOOL)ignoreModifierKeysForDraggingSession:(id)arg1;
- (void)draggingSession:(id)arg1 endedAtPoint:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;
- (id)beginDraggingNodes:(const struct TFENodeVector *)arg1 mouseDownEvent:(id)arg2;
- (_Bool)isActiveQLWindowController;
- (void)resignActiveQLWindowController;
- (void)becomeActiveQLWindowController;
- (void)updatePreviewPanel;
- (void)closePreviewPanel;
- (void)openPreviewPanelInFullScreen:(_Bool)arg1;
- (void)togglePreviewPanelWithFullScreen:(_Bool)arg1;
- (void)openQuickLookNode:(const struct TFENode *)arg1;
- (id)quickLookSharedPreviewView;
- (id)zoomImageForNode:(const struct TFENode *)arg1 contentRect:(struct CGRect *)arg2;
- (_Bool)quickLookHandleEvent:(id)arg1;
- (_Bool)filterQuickLookNodes:(const struct TFENodeVector *)arg1 originalNodes:(struct TFENodeVector *)arg2 nodesToPreview:(struct TFENodeVector *)arg3 allowFolders:(_Bool)arg4;
- (void)getQuickLookNodes:(struct TFENodeVector *)arg1;
- (_Bool)handleQuickLookWithEvent:(id)arg1;
- (_Bool)handleKeyDown:(id)arg1 currentKey:(unsigned short)arg2;
- (void)springNode:(const struct TFENode *)arg1 globalMouse:(const struct CGPoint *)arg2 spawnNewWindow:(_Bool)arg3;
- (void)springNode:(const struct TFENode *)arg1;
- (_Bool)nodeIsSpringable:(const struct TFENode *)arg1;
- (unsigned long long)springLoadingUpdated:(id)arg1 dropTargetView:(id)arg2;
- (void)springLoadingActivated:(BOOL)arg1 draggingInfo:(id)arg2 dropTargetView:(id)arg3;
- (void)getDropTargetNode:(struct TFENode *)arg1 fromDraggingInfo:(id)arg2 inDropTargetView:(id)arg3;
- (void)typeSelectNode:(const struct TFENode *)arg1;
- (unsigned long long)typeSelectGetSelectedNodes:(struct TFENodeVector *)arg1;
- (struct TFENode)nextNodeInViewAfter:(const struct TFENodeVector *)arg1;
- (struct TFENodeVector)typeSelectCandidateNodes;
- (_Bool)shouldTypeSelectForEvent:(id)arg1 withCurrentSearchString:(id)arg2;
- (_Bool)handleUnicodeTextInput:(id)arg1 atTime:(double)arg2;
- (_Bool)isTypeSelectInProgressWithTime:(double)arg1;
- (void)clearTypeSelectBuffer;
- (_Bool)typeSelectEvent:(const struct TString *)arg1 atTime:(double)arg2;
- (void)selectContextMenuTargetNodesForCommand:(SEL)arg1;
- (void)revealNodes:(const struct TFENodeVector *)arg1 select:(_Bool)arg2;
- (void)deselectAllNodes;
- (void)selectAllNodes;
- (void)selectNodesForTask:(const struct TFENodeVector *)arg1 startEditing:(_Bool)arg2;
- (void)selectNodesNowOrLater:(const struct TFENodeVector *)arg1;
- (unsigned long long)getSelectedNodesForQuickLook:(struct TFENodeVector *)arg1 includeTarget:(_Bool)arg2 upTo:(unsigned long long)arg3;
- (unsigned long long)getSelectedNodesForQuickLook:(struct TFENodeVector *)arg1 includeTarget:(_Bool)arg2;
- (unsigned long long)getTargetSelection:(struct TFENodeVector *)arg1 includeTarget:(_Bool)arg2 upTo:(unsigned long long)arg3;
- (unsigned long long)getTargetSelection:(struct TFENodeVector *)arg1 includeTarget:(_Bool)arg2;
- (unsigned long long)getSelectedNodesInFocus:(struct TFENodeVector *)arg1 upTo:(unsigned long long)arg2;
- (unsigned long long)getSelectedNodesInFocus:(struct TFENodeVector *)arg1;
- (unsigned long long)selectedNodesCountInFocus;
- (void)setSelectedNodes:(const struct TFENodeVector *)arg1 byExtendingSelection:(_Bool)arg2;
- (unsigned long long)getSelectedNodesFromView:(struct TFENodeVector *)arg1 upTo:(unsigned long long)arg2;
- (unsigned long long)getSelectedNodes:(struct TFENodeVector *)arg1 upTo:(unsigned long long)arg2;
- (void)updateOrderedSelection;
- (unsigned long long)getSelectedNodes:(struct TFENodeVector *)arg1;
@property(readonly, nonatomic) unsigned long long selectedNodesCount; // @dynamic selectedNodesCount;
- (void)selectionChanged;
- (void)finishedShrinkToFitTextAboutToOpen:(_Bool)arg1 forNode:(const struct TFENode *)arg2;
- (void)updateSTFEditorLocation;
- (void)titleOfNode:(const struct TFENode *)arg1 didChangeTo:(id)arg2 renameOp:(id)arg3;
- (void)stopEditing:(_Bool)arg1;
- (_Bool)startEditingWithNode:(const struct TFENode *)arg1 renameOp:(id)arg2;
- (_Bool)startEditingNodeNowOrLater:(const struct TFENode *)arg1 renameOp:(id)arg2;
- (void)prepareSnapToGridForNode:(const struct TFENode *)arg1;
- (_Bool)useSpecialInFlightAnimation;
- (void)offsetSpatialData:(struct IconSpatialData *)arg1;
- (void)addOffsetSpatialDataFromNodes:(const struct TFENodeVector *)arg1 toPropertyList:(vector_d50fdf79 *)arg2;
- (void)addSpatialDataForLocationInView:(const struct CGPoint *)arg1 toPropertyList:(struct TFENodePropertyList *)arg2;
- (struct TFENode)nodeAtPoint:(const struct CGPoint *)arg1 includeTarget:(_Bool)arg2;
- (void)windowDidResignKey:(id)arg1;
- (void)windowDidBecomeKey:(id)arg1;
- (void)windowDidResignMain:(id)arg1;
- (void)windowDidBecomeMain:(id)arg1;
- (void)browserViewDidMoveToWindow;
- (void)browserViewWillMoveToWindow:(id)arg1;
- (void)checkDarkBackground;
- (void)browserViewEffectiveAppearanceChanged;
- (void)browserViewBackingPropertiesChanged;
@property(readonly, nonatomic) double scaleFactor;
@property(retain) TNodeViewSettings *viewSettings; // @dynamic viewSettings;
- (void)flushNodeEventsWithCompletion:(const function_b1fce659 *)arg1;
- (void)cancelDelayedNodeEventHandling;
- (void)delayNodeEventHandling:(double)arg1;
- (void)flushNodeEvents;
- (void)openSelectedNodes:(const struct TFENodeVector *)arg1 modifiers:(unsigned long long)arg2 allowTabs:(_Bool)arg3;
- (void)openSelectionWithModifiers:(unsigned long long)arg1 allowTabs:(_Bool)arg2;
- (void)openSelection;
- (void)reloadIconsInView;
- (struct TFENode)parentNodeToOpen:(const struct TFENode *)arg1;
- (struct TString)pathPrettyStringForNode:(struct TFENode)arg1;
- (struct TString)titleForICloudContainer:(const struct TFENode *)arg1;
- (struct TFENode)cloudLibrariesContainer;
- (_Bool)nodeCanReveal:(const struct TFENode *)arg1;
- (struct TFENode)mapToUserVisibleCloudLocation:(const struct TFENode *)arg1;
- (int)cloudFolderTypeForNode:(const struct TFENode *)arg1;
- (_Bool)nodeIsAnICloudRoot:(const struct TFENode *)arg1;
- (_Bool)iCloudNodeIsUserVisible:(const struct TFENode *)arg1;
- (_Bool)nodeIsInICloud:(const struct TFENode *)arg1 allowQueryHits:(_Bool)arg2;
- (struct TFENode)cloudDocsNodeForNode:(struct TFENode)arg1;
- (struct TFENode)theICloudNode;
- (_Bool)isTheICloudNode:(const struct TFENode *)arg1;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2;
- (id)windowCreationOptionsWithSpawnOption:(int)arg1;
- (id)originatingWindowController;
- (void)openNodes:(const struct TFENodeVector *)arg1 windowOptions:(id)arg2;
- (void)openNodes:(const struct TFENodeVector *)arg1 windowOptions:(id)arg2 searchString:(const struct TString *)arg3 openFlags:(struct OpenFlags)arg4;
- (unsigned long long)itemCount;
- (struct TString)searchString;
- (_Bool)isLTRLocalization;
- (_Bool)inBrowseMode;
- (_Bool)isBackupBrowser;
- (_Bool)isTimeMachineBrowser;
- (_Bool)isDesktopBrowser;
- (_Bool)targetIsSearch;
- (_Bool)focusedOnSearchResults;
- (const struct TFENodeVector *)resolvedTargetPath;
- (struct TFENode)focusNode;
- (const struct TFENode *)target;
- (id)scrollView;
- (id)browserView;
- (void)aboutToTearDown;
- (void)viewLoaded;

// Remaining properties
@property(readonly) id <_NSQuickActionItemSource> additionalQuickActionItemSource;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

