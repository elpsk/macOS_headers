//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsUI/NSObject-Protocol.h>

@protocol SVVideo;

@protocol SVVideoSharingPolicy <NSObject>
@property(readonly, nonatomic, getter=isSharingEnabled) BOOL sharingEnabled;
- (BOOL)isVideoShareable:(id <SVVideo>)arg1;
@end

