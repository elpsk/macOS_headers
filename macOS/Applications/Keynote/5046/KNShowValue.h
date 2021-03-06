//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSKSosBase.h"

#import "GSSPAutoEncodable-Protocol.h"

@interface KNShowValue : TSKSosBase <GSSPAutoEncodable>
{
    BOOL _boolValue;
    long long _showModeValue;
    double _doubleValue;
    struct CGSize _sizeValue;
    BOOL _definedBoolValue;
    BOOL _definedShowModeValue;
    BOOL _definedDoubleValue;
    BOOL _definedSizeValue;
}

- (id)debugDescription;
@property(readonly, nonatomic) id idValue;
@property(readonly, nonatomic) struct CGSize CGSizeValue;
@property(readonly, nonatomic) long long modeValue;
@property(readonly, nonatomic) double doubleValue;
@property(readonly, nonatomic) BOOL boolValue;
- (id)initWithCGSizeValue:(struct CGSize)arg1;
- (id)initWithShowModeValue:(long long)arg1;
- (id)initWithDoubleValue:(double)arg1;
- (id)initWithBoolValue:(BOOL)arg1;
- (void)populateGSSPShowValue:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;

@end

