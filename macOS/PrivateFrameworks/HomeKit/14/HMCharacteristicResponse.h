//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HMCharacteristicRequest, NSError;

@interface HMCharacteristicResponse : NSObject
{
    HMCharacteristicRequest *_request;
    NSError *_error;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) HMCharacteristicRequest *request; // @synthesize request=_request;
- (BOOL)isEqual:(id)arg1;
- (id)initWithRequest:(id)arg1 error:(id)arg2;

@end

