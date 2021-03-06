//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BRCAccountSession, BRCAppLibrary, BRCItemID, NSMutableIndexSet, NSObject<OS_dispatch_group>, brc_task_tracker;

__attribute__((visibility("hidden")))
@interface BRCTreeEnumerator : NSObject
{
    BRCAccountSession *_session;
    CDUnknownBlockType _handler;
    BRCItemID *_parentID;
    BRCAppLibrary *_appLibrary;
    unsigned long long _rowID;
    NSMutableIndexSet *_seen;
    NSMutableIndexSet *_toVisit;
    brc_task_tracker *_tracker;
    NSObject<OS_dispatch_group> *_group;
    id _strongSelf;
    BOOL _isCancelled;
    CDUnknownBlockType _completionHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)_iterate:(unsigned long long)arg1;
- (unsigned long long)__iterate:(unsigned long long)arg1;
- (BOOL)_visitNewParent;
- (void)_scheduleAsync;
- (BOOL)finishIfCancelled;
- (void)enumerateBelow:(id)arg1 appLibrary:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_doneWithError:(id)arg1;
- (void)cancel;
- (id)initWithSession:(id)arg1 group:(id)arg2;
- (id)initWithSession:(id)arg1 tracker:(id)arg2;
- (id)initWithSession:(id)arg1;

@end

