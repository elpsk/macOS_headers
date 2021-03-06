//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString, TKTokenConfiguration;

@interface TKTokenKeychainContents : NSObject
{
    NSArray *_items;
    TKTokenConfiguration *_configuration;
    NSString *_tokenID;
}

- (void).cxx_destruct;
@property(readonly) NSString *tokenID; // @synthesize tokenID=_tokenID;
@property(readonly) TKTokenConfiguration *configuration; // @synthesize configuration=_configuration;
- (id)certificateForKey:(id)arg1;
- (id)keyForObjectID:(id)arg1 error:(id *)arg2;
- (id)certificateForObjectID:(id)arg1 error:(id *)arg2;
@property(readonly, copy) NSDictionary *keys;
@property(readonly, copy) NSDictionary *certificates;
@property(readonly, copy) NSArray *items;
- (void)fillWithItems:(id)arg1;
- (id)initWithTokenID:(id)arg1;
- (id)initWithConfiguration:(id)arg1;

@end

