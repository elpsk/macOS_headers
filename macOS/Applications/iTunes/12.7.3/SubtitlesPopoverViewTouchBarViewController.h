//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TouchBarViewController.h"

@class NSArray, NSScrollView, NSStackView, NSTextField;

@interface SubtitlesPopoverViewTouchBarViewController : TouchBarViewController
{
    NSArray *_subtitleButtons;
    NSArray *_audioButtons;
    NSStackView *_stackView;
    NSTextField *_subtitlesTextField;
    NSTextField *_audioTextField;
    NSScrollView *_scrollView;
}

@property(retain, nonatomic) NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSTextField *audioTextField; // @synthesize audioTextField=_audioTextField;
@property(retain, nonatomic) NSTextField *subtitlesTextField; // @synthesize subtitlesTextField=_subtitlesTextField;
@property(retain, nonatomic) NSStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) NSArray *audioButtons; // @synthesize audioButtons=_audioButtons;
@property(retain, nonatomic) NSArray *subtitleButtons; // @synthesize subtitleButtons=_subtitleButtons;
- (void)withAlternateTrackKind:(unsigned int)arg1 perform:(CDUnknownBlockType)arg2;
- (void)setAlternateTrackTag:(long long)arg1 withKind:(unsigned int)arg2;
- (long long)currentAlternateTrackTagWithKind:(unsigned int)arg1;
- (shared_ptr_9e57bccb)alternateTrackHandlerWithKind:(unsigned int)arg1;
- (shared_ptr_677ff865)currentPlayerHandler;
- (void)installHandlers;
- (void)handleAlternateTrackDidChange:(id)arg1;
@property long long selectedAudioTag;
@property long long selectedSubtitleTag;
- (void)updateUI;
- (void)selectButtonTag:(long long)arg1 inButtons:(id)arg2;
- (void)loadView;
- (void)installButtons:(id)arg1 withAlternateTrackKind:(unsigned int)arg2 withAction:(SEL)arg3;
- (void)audioChanged:(id)arg1;
- (void)subtitlesChanged:(id)arg1;
- (void)dealloc;

@end

