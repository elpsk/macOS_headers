//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ExchangeWebServices/EWSBaseItemIdType.h>

#import <ExchangeWebServices/XSDefinitionProvider-Protocol.h>

@class NSString;

@interface EWSRootItemIdType : EWSBaseItemIdType <XSDefinitionProvider>
{
    NSString *_RootItemId;
    NSString *_RootItemChangeKey;
}

+ (BOOL)supportsSecureCoding;
+ (id)definition;
@property(copy, nonatomic) NSString *RootItemChangeKey; // @synthesize RootItemChangeKey=_RootItemChangeKey;
@property(copy, nonatomic) NSString *RootItemId; // @synthesize RootItemId=_RootItemId;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

