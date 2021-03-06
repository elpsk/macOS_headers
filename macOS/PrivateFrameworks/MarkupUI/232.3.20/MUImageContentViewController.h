//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MarkupUI/MUContentViewController.h>

#import <MarkupUI/AKControllerDelegateProtocol-Protocol.h>
#import <MarkupUI/MUContentViewControllerProtocol-Protocol.h>

@class MUImageView, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface MUImageContentViewController : MUContentViewController <AKControllerDelegateProtocol, MUContentViewControllerProtocol>
{
    struct CGImage *_contentImage;
    BOOL contentViewControllerCropEnabled;
    id _sourceContent;
    NSDictionary *_imageProperties;
    id _frameChangedObserver;
    MUImageView *_preloadedView;
}

@property(retain) MUImageView *preloadedView; // @synthesize preloadedView=_preloadedView;
@property(retain) id frameChangedObserver; // @synthesize frameChangedObserver=_frameChangedObserver;
@property(retain) NSDictionary *imageProperties; // @synthesize imageProperties=_imageProperties;
@property(retain) id sourceContent; // @synthesize sourceContent=_sourceContent;
@property BOOL contentViewControllerCropEnabled; // @synthesize contentViewControllerCropEnabled;
- (void).cxx_destruct;
- (void)_ensureContentImage;
- (long long)_exifOrientationFromImageProperties:(id)arg1;
- (void)_updateMinZoomFactor;
- (void)_imageViewFrameDidChange:(id)arg1;
- (BOOL)isScreenCaptureItemAtURL:(id)arg1;
- (void)editDetectedForAnnotationController:(id)arg1;
- (void)rotateLeft:(id)arg1;
- (void)rotateRight:(id)arg1;
- (BOOL)shouldPlaceProposedFormElementAtRect:(struct CGRect)arg1 onOverlayAtPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (BOOL)shouldPlaceFormElementAtPoint:(struct CGPoint)arg1 onOverlayAtPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (void)setPreferredCursor:(id)arg1 forAnnotationController:(id)arg2;
- (struct CGSize)idealContentSizeForScreenSize:(struct CGSize)arg1 windowDecorationSize:(struct CGSize)arg2;
- (long long)exifOrientation;
- (struct CGSize)contentSize;
- (id)layerContainingQuickBackgroundForLoupeOnOverlayAtPageIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2;
- (BOOL)controllerShouldDetectFormElements:(id)arg1;
- (struct CGRect)positioningRectForCandidatePicker;
- (void)positionSketchOverlay:(id)arg1 forAnnotationController:(id)arg2;
- (id)controller:(id)arg1 willSetToolbarItems:(id)arg2;
- (double)modelBaseScaleFactorOfPageAtIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2;
- (id)popoverPresentingViewControllerForAnnotationController:(id)arg1;
- (id)undoManagerForAnnotationController:(id)arg1;
- (id)newContentSnapshotPDFDataIncludingAdornments:(BOOL)arg1 atScale:(double)arg2 inRect:(struct CGRect)arg3 onOverlayAtPageIndex:(unsigned long long)arg4 forAnnotationController:(id)arg5;
- (struct CGRect)maxPageRectWithPageIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromModelToOverlayWithPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromOverlayToModelWithPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (struct CGRect)borderFrame;
- (struct CGRect)contentRect;
- (void)uninstallAllAnnotationControllerOverlays;
- (void)_uninstallOverlayOfController:(id)arg1 forPageAtIndex:(unsigned long long)arg2;
- (void)_installOverlayOfController:(id)arg1 forPageAtIndex:(unsigned long long)arg2;
- (void)loadContentWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_setupContentRectObservers;
- (void)viewDidLoad;
- (void)teardown;
- (void)setup;
- (void)dealloc;
- (id)initWithPreloadedImageView:(id)arg1 inSource:(id)arg2 archivedDataModel:(id)arg3 delegate:(id)arg4;
- (id)initWithSourceContent:(id)arg1 archivedDataModel:(id)arg2 delegate:(id)arg3;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

