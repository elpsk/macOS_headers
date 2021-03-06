//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FRAdLayoutOperationProviding-Protocol.h"

@class NSString;

@interface FRAdLayoutOperation : NSObject <FRAdLayoutOperationProviding>
{
    unsigned long long _modification;
    NSString *_identifier;
    long long _operationType;
    CDUnknownBlockType _completionBlock;
    struct CGRect _modifiedFrame;
}

@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) long long operationType; // @synthesize operationType=_operationType;
@property(nonatomic) struct CGRect modifiedFrame; // @synthesize modifiedFrame=_modifiedFrame;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) unsigned long long modification; // @synthesize modification=_modification;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)initWithIdentifier:(id)arg1 destinationFrame:(struct CGRect)arg2 modification:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

