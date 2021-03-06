//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTextFieldCell.h>

@class NSArray, NSImage, NSString;

__attribute__((visibility("hidden")))
@interface AcceptedSiteDataCell : NSTextFieldCell
{
    NSString *_header;
    NSArray *_descriptiveTextRows;
    NSImage *_icon;
}

@property(retain, nonatomic) NSImage *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSArray *descriptiveTextRows; // @synthesize descriptiveTextRows=_descriptiveTextRows;
@property(copy, nonatomic) NSString *header; // @synthesize header=_header;
- (void).cxx_destruct;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityDescription;
- (id)accessibilityAttributeNames;
- (id)computeAccessibilityAttributeNames;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;

@end

