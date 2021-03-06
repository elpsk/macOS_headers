//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextFieldCell.h"

@class NSString;

@interface _PXSTextFieldCell : NSTextFieldCell
{
    BOOL _emphasized;
    NSString *_text;
    long long _verticalAlignment;
    double _fontSize;
    struct NSEdgeInsets _padding;
}

- (void).cxx_destruct;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(nonatomic) struct NSEdgeInsets padding; // @synthesize padding=_padding;
@property(nonatomic) long long verticalAlignment; // @synthesize verticalAlignment=_verticalAlignment;
@property(nonatomic, getter=isEmphasized) BOOL emphasized; // @synthesize emphasized=_emphasized;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void)setBackgroundStyle:(long long)arg1;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (void)_updateAttributedString;
- (void)_invalidateAttributedString;

@end

