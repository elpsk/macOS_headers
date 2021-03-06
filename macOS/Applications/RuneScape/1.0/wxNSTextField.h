//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextField.h"

#import "NSTextFieldDelegate.h"

@class NSString, wxNSTextFieldEditor;

@interface wxNSTextField : NSTextField <NSTextFieldDelegate>
{
    wxNSTextFieldEditor *fieldEditor;
}

+ (void)initialize;
- (void)controlTextDidEndEditing:(id)arg1;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (id)control:(id)arg1 textView:(id)arg2 completions:(id)arg3 forPartialWordRange:(struct _NSRange)arg4 indexOfSelectedItem:(long long *)arg5;
- (void)controlTextDidChange:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (id)fieldEditor;
- (void)setFieldEditor:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

