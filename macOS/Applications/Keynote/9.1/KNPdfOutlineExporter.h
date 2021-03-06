//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KNPdfExporter.h"

@class KNInteractiveCanvasController, KNMacOutlineViewController, KNSlideTreeEditor, NSClipView, NSMutableArray, TMAColorView;

@interface KNPdfOutlineExporter : KNPdfExporter
{
    KNInteractiveCanvasController *_interactiveCanvasController;
    KNSlideTreeEditor *_slideTreeEditor;
    NSMutableArray *_offsetForPage;
    unsigned long long _outlinePageNumber;
    double _outlineViewHeight;
    KNMacOutlineViewController *_viewController;
    TMAColorView *_bottomClipView;
    NSClipView *_clipView;
    struct CGRect _printRect;
}

@property(nonatomic) struct CGRect printRect; // @synthesize printRect=_printRect;
@property(retain, nonatomic) KNSlideTreeEditor *slideTreeEditor; // @synthesize slideTreeEditor=_slideTreeEditor;
@property(retain, nonatomic) KNInteractiveCanvasController *interactiveCanvasController; // @synthesize interactiveCanvasController=_interactiveCanvasController;
- (void).cxx_destruct;
- (void)drawInView:(id)arg1 rect:(struct CGRect)arg2;
- (BOOL)usesViewForDrawing;
- (void)setPrintView:(id)arg1;
- (unsigned long long)pageCount;
- (BOOL)preparePage:(unsigned long long)arg1;
- (void)precalcPageOffsetsForOutlineView:(id)arg1 bounds:(struct CGRect)arg2;
- (void)dealloc;

@end

