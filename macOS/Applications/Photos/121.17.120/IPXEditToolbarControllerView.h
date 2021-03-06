//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UXKit/UXView.h>

@class IPXEditToolbarControllerVisualEffectView, NSImage, NSView;

__attribute__((visibility("hidden")))
@interface IPXEditToolbarControllerView : UXView
{
    NSView *_containerView;
    BOOL _visualEffectEnabled;
    NSImage *_maskImage;
    IPXEditToolbarControllerVisualEffectView *_visualEffectView;
}

@property(readonly, nonatomic) IPXEditToolbarControllerVisualEffectView *visualEffectView; // @synthesize visualEffectView=_visualEffectView;
@property(retain, nonatomic) NSImage *maskImage; // @synthesize maskImage=_maskImage;
@property(nonatomic, getter=isVisualEffectEnabled) BOOL visualEffectEnabled; // @synthesize visualEffectEnabled=_visualEffectEnabled;
- (void).cxx_destruct;
- (void)setUserInteractionEnabled:(BOOL)arg1;
- (void)_addConstraintsForViews:(id)arg1;
- (void)setClearBlur:(BOOL)arg1;
- (void)setSubviews:(id)arg1;
- (void)addSubview:(id)arg1 positioned:(long long)arg2 relativeTo:(id)arg3;
- (void)addSubview:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setPreventMouseClicks:(BOOL)arg1;

@end

