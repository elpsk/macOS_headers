//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIPrintPageRenderer;

@interface WFPageRenderer : NSObject
{
    BOOL _matchInputSize;
    BOOL _includeMargin;
    UIPrintPageRenderer *_renderer;
    struct CGSize _inputSize;
}

@property(nonatomic) BOOL includeMargin; // @synthesize includeMargin=_includeMargin;
@property(nonatomic) BOOL matchInputSize; // @synthesize matchInputSize=_matchInputSize;
@property(nonatomic) struct CGSize inputSize; // @synthesize inputSize=_inputSize;
- (void).cxx_destruct;
@property(readonly, nonatomic) double margin;
- (void)updateRendererSize;
@property(readonly, nonatomic) UIPrintPageRenderer *renderer; // @synthesize renderer=_renderer;
- (id)renderToImage;
- (void)renderPDFPageIndex:(long long)arg1 pages:(long long)arg2 measuredIndicesByFormatter:(id)arg3 drawnIndicesByFormatter:(id)arg4 linkMetricsByWebView:(id)arg5 y:(double)arg6 paperSize:(struct CGSize)arg7 shouldDrawPageAtIndexHandler:(CDUnknownBlockType)arg8 completionHandler:(CDUnknownBlockType)arg9;
- (void)_renderToPDF:(id)arg1 startingAtPage:(long long)arg2 endingAtPage:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)renderToPDF:(id)arg1 startingAtPage:(long long)arg2 endingAtPage:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (struct CGSize)sizeForPageAtIndex:(long long)arg1;

@end

