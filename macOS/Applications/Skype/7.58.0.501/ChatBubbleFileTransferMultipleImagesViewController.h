//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "ChatBubbleFileTransferBaseViewController.h"

@class ChatBubbleImageGalleryItemView, ClickableURLTextField, NSAttributedString, NSButton, NSMutableArray, NSString, NSTextField;

@interface ChatBubbleFileTransferMultipleImagesViewController : ChatBubbleFileTransferBaseViewController
{
    NSMutableArray *_subControllers;
    BOOL _observesSelf;
    NSTextField *_uncollapseLabel;
    ClickableURLTextField *_actionLabel;
    NSButton *_collapseButton;
    NSTextField *_hiddenImagesLabel;
    ChatBubbleImageGalleryItemView *_expandItem;
    unsigned long long _expandState;
    unsigned long long _hiddenImageCount;
}

+ (id)keyPathsForValuesAffectingExpandItemVisible;
+ (id)keyPathsForValuesAffectingCollapseButtonVisible;
+ (id)keyPathsForValuesAffectingHiddenImagesLabelText;
+ (id)keyPathsForValuesAffectingActionLabelVisible;
+ (id)keyPathsForValuesAffectingActionLabelText;
+ (double)expectedHeightForMessage:(id)arg1 forWidth:(double)arg2;
@property(nonatomic) unsigned long long hiddenImageCount; // @synthesize hiddenImageCount=_hiddenImageCount;
@property(nonatomic) unsigned long long expandState; // @synthesize expandState=_expandState;
@property __weak ChatBubbleImageGalleryItemView *expandItem; // @synthesize expandItem=_expandItem;
@property __weak NSTextField *hiddenImagesLabel; // @synthesize hiddenImagesLabel=_hiddenImagesLabel;
@property __weak NSButton *collapseButton; // @synthesize collapseButton=_collapseButton;
@property __weak ClickableURLTextField *actionLabel; // @synthesize actionLabel=_actionLabel;
@property __weak NSTextField *uncollapseLabel; // @synthesize uncollapseLabel=_uncollapseLabel;
- (void).cxx_destruct;
- (void)expandClick:(id)arg1;
- (void)collapseButtonClick:(id)arg1;
- (BOOL)textField:(id)arg1 openURL:(id)arg2 withRect:(struct CGRect)arg3;
- (void)buildSubControllers;
- (void)updateSubControllerTransfers;
@property(readonly, nonatomic) BOOL expandItemVisible;
@property(readonly, nonatomic) BOOL collapseButtonVisible;
@property(readonly, nonatomic) __weak NSAttributedString *hiddenImagesLabelText;
@property(readonly, nonatomic) BOOL actionLabelVisible;
@property(readonly, nonatomic) __weak NSString *actionLabelText;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateLayout;
- (void)placeChildControls;
- (void)addFileTransfers:(id)arg1;
- (id)contextMenuForBaseMenu:(id)arg1;
- (void)revealInFinder:(id)arg1;
- (void)closeQuickLookClick:(id)arg1;
- (void)quickLook:(id)arg1;
- (double)realItemWidth;
- (void)awakeFromNib;
- (void)dealloc;
- (id)init;

@end

