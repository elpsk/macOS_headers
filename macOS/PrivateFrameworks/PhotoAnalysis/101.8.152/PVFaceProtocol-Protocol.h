//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoAnalysis/NSObject-Protocol.h>

@class NSData, NSString;

@protocol PVFaceProtocol <NSObject>
@property(readonly, nonatomic) unsigned short ageType;
@property(nonatomic) long long qualityMeasure;
@property(readonly, nonatomic) NSData *faceprintData;
@property(readonly, nonatomic) long long clusterSequenceNumber;
@property(readonly, nonatomic) double centerY;
@property(readonly, nonatomic) double centerX;
@property(readonly, nonatomic) double size;
@property(readonly, nonatomic) NSString *personLocalIdentifier;
@property(readonly, nonatomic) NSString *localIdentifier;
@end

