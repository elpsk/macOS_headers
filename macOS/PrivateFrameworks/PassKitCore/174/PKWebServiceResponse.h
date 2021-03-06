//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSData;

@interface PKWebServiceResponse : NSObject <NSSecureCoding>
{
    NSData *_rawData;
    id _JSONObject;
}

+ (BOOL)supportsSecureCoding;
+ (id)responseWithData:(id)arg1;
@property(readonly, nonatomic) id JSONObject; // @synthesize JSONObject=_JSONObject;
@property(readonly, nonatomic) NSData *rawData; // @synthesize rawData=_rawData;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)debugDescription;
- (id)initWithData:(id)arg1;

@end

