//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVAudioDSPControlling.h"

@class NSString;

@interface AVAudioVoiceProcessorCommonControlsModule : NSObject <AVAudioDSPControlling>
{
}

- (BOOL)setMaximumMetadataByteSize:(unsigned int)arg1 error:(id *)arg2;
@property(readonly, nonatomic) unsigned int maximumMetadataByteSize;
- (BOOL)setMaximumNumberPackets:(unsigned int)arg1 error:(id *)arg2;
@property(readonly, nonatomic) unsigned int maximumNumberPackets;
- (BOOL)setPrimaryCodecType:(unsigned int)arg1 error:(id *)arg2;
@property(readonly, nonatomic) unsigned int primaryCodecType;
- (BOOL)setOperationMode:(unsigned int)arg1 error:(id *)arg2;
@property(readonly, nonatomic) unsigned int operationMode;
- (BOOL)setpreferredIODuration:(double)arg1 error:(id *)arg2;
@property(readonly, nonatomic) double preferredIODuration;
- (BOOL)setPrimaryCodecSampleRate:(BOOL)arg1 error:(id *)arg2;
@property(readonly, nonatomic) double primaryCodecSampleRate;
- (BOOL)requestMetadata:(BOOL)arg1 error:(id *)arg2;
@property(readonly, nonatomic, getter=isMetadataRequested) BOOL metadataRequested;
- (BOOL)enable:(BOOL)arg1 error:(id *)arg2;
@property(readonly, nonatomic, getter=isEnabled) BOOL enabled;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

