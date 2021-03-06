//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSCH3DSceneRenderPipeline.h"

#import "TSCH3DMultipassRenderPipeline-Protocol.h"

@class TSCH3DChartElementEdgeOverdrawSceneObject, TSCH3DGLFramebuffer, TSCH3DScene;

@interface TSCH3DGeometryAntialiasingSceneRenderPipeline : TSCH3DSceneRenderPipeline <TSCH3DMultipassRenderPipeline>
{
    TSCH3DScene *mOverdraw;
    TSCH3DGLFramebuffer *mRenderingFBO;
    TSCH3DChartElementEdgeOverdrawSceneObject *mGeometry;
    long long mPass;
}

@property(retain, nonatomic) TSCH3DGLFramebuffer *renderingFBO; // @synthesize renderingFBO=mRenderingFBO;
@property(retain, nonatomic) TSCH3DScene *overdraw; // @synthesize overdraw=mOverdraw;
- (BOOL)render;
- (void)skipLowQualityPass;
- (void)resetMultipassRendering;
- (BOOL)multipassRenderingIsDone;
- (BOOL)updatesTargetFramebuffer;
- (void)setFramebuffer:(id)arg1;
- (void)setScene:(id)arg1;
- (void)releaseResources;
- (void)dealloc;
- (id)initWithProcessor:(id)arg1 session:(id)arg2 scene:(id)arg3;
- (id)renderingFBOResource;

@end

