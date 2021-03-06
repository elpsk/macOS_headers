//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSKCommand.h"

#import "GSSPAutoEncodable-Protocol.h"

@interface TSACommandSetRandomSeed : TSKCommand <GSSPAutoEncodable>
{
    int _randomSeedLo;
    int _randomSeedHi;
    unsigned long long _previousSeed;
}

- (id)makeInverse;
- (BOOL)supportsCollaboration;
- (void)rollback;
- (void)redo;
- (void)undo;
- (void)commit;
- (BOOL)isValidForCommit;
- (BOOL)process;
- (id)calcEngine;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (void)p_setRandomSeed:(unsigned long long)arg1;
@property(readonly) unsigned long long randomSeed;
- (id)initWithNewRandomSeedInContext:(id)arg1;
- (id)initWithRandomSeed:(unsigned long long)arg1 inContext:(id)arg2;
- (void)deallocSOS;
- (void)populateGSSPCmdSetRandomSeed:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;

@end

