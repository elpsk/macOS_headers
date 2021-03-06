//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WBSCloudKitContainerManateeObserving.h"

@class CKContainer, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface WBSCloudKitContainerManateeObserver : NSObject <WBSCloudKitContainerManateeObserving>
{
    NSObject<OS_dispatch_queue> *_queue;
    CKContainer *_container;
    BOOL _determiningManateeState;
    long long _currentState;
    CDUnknownBlockType _stateChangeObserver;
    NSMutableArray *_stateDeterminationCompletionBlocks;
    id <WBSAppleAccountInformationProviding> _appleAccountInformationProvider;
    NSString *_containerIdentifier;
}

@property(readonly, copy, nonatomic) NSString *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
- (void).cxx_destruct;
- (void)determineManateeStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_determineManateeStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_accountChanged:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType stateChangeObserver;
- (id)initWithContainerIdentifier:(id)arg1 appleAccountInformationProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

