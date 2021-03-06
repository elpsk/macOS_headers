//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "iTermCursorRenderer.h"

@class NSColor;

@interface iTermFrameCursorRenderer : iTermCursorRenderer
{
    id <MTLTexture> _texture;
    struct CGSize _textureSize;
    id <MTLTexture> _cachedTexture;
    NSColor *_cachedColor;
    struct CGSize _cachedTextureSize;
}

@property(retain, nonatomic) NSColor *cachedColor; // @synthesize cachedColor=_cachedColor;
@property(nonatomic) struct CGSize cachedTextureSize; // @synthesize cachedTextureSize=_cachedTextureSize;
@property(retain, nonatomic) id <MTLTexture> cachedTexture; // @synthesize cachedTexture=_cachedTexture;
- (void).cxx_destruct;
- (void)drawWithFrameData:(id)arg1 transientState:(id)arg2;
- (void)initializeTransientState:(id)arg1;
- (Class)transientStateClass;

@end

