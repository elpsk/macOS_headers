//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class AVPlayer, GlyphButton, NSLayoutConstraint, NSTextField, NSView, _TtC5Skype14SwiftCardStack, _TtC5Skype25SeekableProgressIndicator;

@interface Skype.SwiftCardAudioSectionViewController : NSViewController
{
    // Error parsing type: , name: audio
    // Error parsing type: , name: card
    // Error parsing type: , name: stack
    // Error parsing type: , name: topConstraint
    // Error parsing type: , name: bottomConstraint
    // Error parsing type: , name: leadingConstraint
    // Error parsing type: , name: trailingConstraint
    // Error parsing type: , name: containerView
    // Error parsing type: , name: playButton
    // Error parsing type: , name: progressIndicator
    // Error parsing type: , name: progressLabel
    // Error parsing type: , name: edgeInsets
    // Error parsing type: , name: isBuffering
    // Error parsing type: , name: isObservingPlayer
    // Error parsing type: , name: isObservingPlayerItem
    // Error parsing type: , name: playbackObserver
    // Error parsing type: , name: playerEndObserver
    // Error parsing type: , name: playerDidStartPlayingObserver
    // Error parsing type: , name: stallObserver
    // Error parsing type: , name: audioPlayer
    // Error parsing type: , name: audioPlayerItem
    // Error parsing type: , name: loadingSpinner
    // Error parsing type: , name: loadingSymbolLabel
    // Error parsing type: , name: failureButton
    // Error parsing type: , name: isPreparingAudioStream
    // Error parsing type: , name: resumePlayingAfterBuffering
    // Error parsing type: , name: showsLoadingSpinner
    // Error parsing type: , name: showsFailureButton
    // Error parsing type: , name: hasUserInteracted
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)seekableProgressIndicator:(id)arg1 seekToValue:(double)arg2;
- (void)pause:(id)arg1;
- (void)play:(id)arg1;
- (void)toggleAudio:(id)arg1;
@property(nonatomic) BOOL hasUserInteracted; // @synthesize hasUserInteracted;
@property(nonatomic) BOOL showsFailureButton; // @synthesize showsFailureButton;
@property(nonatomic) BOOL showsLoadingSpinner; // @synthesize showsLoadingSpinner;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(nonatomic, retain) AVPlayer *audioPlayer; // @synthesize audioPlayer;
- (void)startLoadingAudioStream;
@property(nonatomic) struct NSEdgeInsets edgeInsets; // @synthesize edgeInsets;
- (void)loadView;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
@property(nonatomic, retain) NSTextField *progressLabel; // @synthesize progressLabel;
@property(nonatomic, retain) _TtC5Skype25SeekableProgressIndicator *progressIndicator; // @synthesize progressIndicator;
@property(nonatomic, retain) GlyphButton *playButton; // @synthesize playButton;
@property(nonatomic, retain) NSView *containerView; // @synthesize containerView;
@property(nonatomic, retain) NSLayoutConstraint *trailingConstraint; // @synthesize trailingConstraint;
@property(nonatomic, retain) NSLayoutConstraint *leadingConstraint; // @synthesize leadingConstraint;
@property(nonatomic, retain) NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint;
@property(nonatomic, retain) NSLayoutConstraint *topConstraint; // @synthesize topConstraint;
@property(nonatomic, readonly) _TtC5Skype14SwiftCardStack *stack; // @synthesize stack;

@end

