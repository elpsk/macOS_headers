//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CSXPCConnection.h"

@class NSMutableDictionary;

@interface CSIndexAgent : CSXPCConnection
{
    id <MDIndexer> _indexer;
    NSMutableDictionary *_indexConnections;
}

+ (id)indexDelegateAgent;
+ (id)indexAgent:(BOOL)arg1;
@property(retain, nonatomic) NSMutableDictionary *indexConnections; // @synthesize indexConnections=_indexConnections;
@property(retain, nonatomic) id <MDIndexer> indexer; // @synthesize indexer=_indexer;
- (void).cxx_destruct;
- (BOOL)handleCommand:(const char *)arg1 info:(id)arg2 connection:(id)arg3;
- (id)indexConnection:(id)arg1;
- (BOOL)lostClientConnection:(id)arg1 error:(id)arg2;
- (BOOL)addClientConnectionIfAllowedForConnection:(id)arg1;
- (BOOL)addClientConnectionIfAllowedForConfiguration:(id)arg1;

@end

