//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextPosition.h>

@class PDFPage;

__attribute__((visibility("hidden")))
@interface PDFTextPosition : UITextPosition
{
    PDFPage *_page;
    long long _offset;
}

- (void).cxx_destruct;
- (id)description;
- (id)page;
- (long long)offset;
- (id)initWithOffset:(long long)arg1 onPage:(id)arg2;

@end

