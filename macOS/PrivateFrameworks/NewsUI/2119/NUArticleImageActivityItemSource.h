//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NewsUI/NUArticleActivityItemSource.h>

@class UIImage;

@interface NUArticleImageActivityItemSource : NUArticleActivityItemSource
{
    UIImage *_articleImage;
}

@property(readonly, nonatomic) UIImage *articleImage; // @synthesize articleImage=_articleImage;
- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)initWithHeadline:(id)arg1;

@end

