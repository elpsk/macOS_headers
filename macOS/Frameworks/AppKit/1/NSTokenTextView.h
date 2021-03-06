//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSTextView.h>

@interface NSTokenTextView : NSTextView
{
}

+ (id)tokenTextViewForWindow:(id)arg1;
+ (id)trackingTokenTextView:(BOOL)arg1;
- (id)initWithCoder:(id)arg1;
- (id)tokenizingCharacterSet;
- (struct _NSRange)rangeForUserCompletion;
- (void)insertText:(id)arg1 replacementRange:(struct _NSRange)arg2;
- (BOOL)_characterAtIndex:(unsigned long long)arg1 shouldTerminateString:(id)arg2;
- (void)insertNewline:(id)arg1;
- (void)draggingEnded:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)readSelectionFromPasteboard:(id)arg1 type:(id)arg2;
- (BOOL)writeSelectionToPasteboard:(id)arg1 type:(id)arg2;
- (id)readablePasteboardTypes;
- (id)writablePasteboardTypes;
- (id)acceptableDragTypes;
- (void)rightMouseDown:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (id)_tokenAttachmentForPoint:(struct CGPoint)arg1 glyphIndex:(out unsigned long long *)arg2 drawingRect:(out struct CGRect *)arg3;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_detachFieldEditorFromWindow:(id)arg1;

@end

