//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FLUMedia, FLUUser, NSEvent;

@protocol FLUMediaExploreUserTableCellViewDelegate <NSObject>
- (void)flu_didPressMediaExploreUserCellViewIgnoreButtonForUser:(FLUUser *)arg1;
- (void)flu_didPressMediaExploreUserCellViewFollowButtonForUser:(FLUUser *)arg1;
- (void)flu_didPressMediaExploreUserCellViewAvatarButtonForUser:(FLUUser *)arg1 longPress:(BOOL)arg2;
- (void)flu_didPressMediaExploreUserCellViewRightMediaButtonForMedia:(FLUMedia *)arg1 event:(NSEvent *)arg2;
- (void)flu_didPressMediaExploreUserCellViewCenterMediaButtonForMedia:(FLUMedia *)arg1 event:(NSEvent *)arg2;
- (void)flu_didPressMediaExploreUserCellViewLeftMediaButtonForMedia:(FLUMedia *)arg1 event:(NSEvent *)arg2;
@end

