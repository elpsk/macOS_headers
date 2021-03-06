//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HMSettingGroup;

@interface HMSettings : NSObject
{
    id <HMSettingsOwner> _owner;
}

@property(readonly) __weak id <HMSettingsOwner> owner; // @synthesize owner=_owner;
- (void).cxx_destruct;
@property __weak id <HMSettingsDelegate> delegate;
@property(readonly, getter=isControllable) BOOL controllable;
@property(readonly) HMSettingGroup *rootGroup;
- (id)initWithSettingsOwner:(id)arg1;

@end

