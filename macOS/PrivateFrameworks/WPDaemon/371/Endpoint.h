//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSUUID;

@interface Endpoint : NSObject
{
    unsigned char _requireAck;
    BOOL _requireEncyption;
    NSUUID *_clientUUID;
}

- (void).cxx_destruct;
@property(retain) NSUUID *clientUUID; // @synthesize clientUUID=_clientUUID;
@property BOOL requireEncyption; // @synthesize requireEncyption=_requireEncyption;
@property unsigned char requireAck; // @synthesize requireAck=_requireAck;
- (id)description;

@end

