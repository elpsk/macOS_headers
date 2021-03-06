//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FRArticleMarkingStateProvider-Protocol.h"

@class NSString;

@interface FRArticleMarkingState : NSObject <FRArticleMarkingStateProvider>
{
    BOOL _offensive;
    BOOL _saved;
    BOOL _liked;
    BOOL _disliked;
    BOOL _subscribed;
    BOOL _muted;
    NSString *_articleID;
}

@property(readonly, copy, nonatomic) NSString *articleID; // @synthesize articleID=_articleID;
@property(readonly, nonatomic) BOOL muted; // @synthesize muted=_muted;
@property(readonly, nonatomic) BOOL subscribed; // @synthesize subscribed=_subscribed;
@property(readonly, nonatomic) BOOL disliked; // @synthesize disliked=_disliked;
@property(readonly, nonatomic) BOOL liked; // @synthesize liked=_liked;
@property(readonly, nonatomic) BOOL saved; // @synthesize saved=_saved;
@property(readonly, nonatomic) BOOL offensive; // @synthesize offensive=_offensive;
- (void).cxx_destruct;
- (id)initWithArticleMarkingStateForArticleID:(id)arg1 isLiked:(BOOL)arg2 isDisliked:(BOOL)arg3 isSubscribed:(BOOL)arg4 isMuted:(BOOL)arg5 isSaved:(BOOL)arg6 isOffensive:(BOOL)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

