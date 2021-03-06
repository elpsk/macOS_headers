//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "PSMTabBarControl.h"

@class iTermDelayedPerform;
@protocol iTermTabBarControlViewDelegate;

@interface iTermTabBarControlView : PSMTabBarControl
{
    iTermDelayedPerform *_flashDelayedPerform;
    BOOL _cmdPressed;
    id <iTermTabBarControlViewDelegate> _itermTabBarDelegate;
    long long _flashState;
}

@property(nonatomic) long long flashState; // @synthesize flashState=_flashState;
@property(nonatomic) BOOL cmdPressed; // @synthesize cmdPressed=_cmdPressed;
@property(nonatomic) id <iTermTabBarControlViewDelegate> itermTabBarDelegate; // @synthesize itermTabBarDelegate=_itermTabBarDelegate;
- (void)updateFlashing;
@property(nonatomic) BOOL flashing;
- (void)fadeOut;
- (void)stopFlashInstantly;
- (void)scheduleFadeOutAfterDelay;
- (void)fadeIn;
- (void)setHidden:(BOOL)arg1;
- (void)setAlphaValue:(double)arg1 animated:(BOOL)arg2;
- (void)cancelFadeOut;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

