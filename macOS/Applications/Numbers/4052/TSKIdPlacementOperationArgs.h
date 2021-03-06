//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSKIdOperationArgs.h"

#import "GSSPAutoEncodable-Protocol.h"

@interface TSKIdPlacementOperationArgs : TSKIdOperationArgs <GSSPAutoEncodable>
{
    int _fromIndex;
    int _toIndex;
}

+ (id)argsWithIdPath:(id)arg1 fromIndex:(int)arg2 toIndex:(int)arg3;
@property(readonly, nonatomic) int toIndex; // @synthesize toIndex=_toIndex;
@property(readonly, nonatomic) int fromIndex; // @synthesize fromIndex=_fromIndex;
- (void)saveToArchive:(struct IdPlacementOperationArgs *)arg1 archiver:(id)arg2;
- (id)initFromArchive:(const struct IdPlacementOperationArgs *)arg1 unarchiver:(id)arg2;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)inverse;
- (BOOL)updateWithOperation:(id)arg1;
- (id)operation;
- (id)initWithIdPath:(id)arg1 fromIndex:(int)arg2 toIndex:(int)arg3;
- (void)deallocSOS;
- (void)populateGSSPIdPlacementOperationArgs:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;

@end

