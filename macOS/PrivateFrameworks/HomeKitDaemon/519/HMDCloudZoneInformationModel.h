//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class NSString;

@interface HMDCloudZoneInformationModel : HMDBackingStoreModelObject
{
    BOOL _requiresHomeManagerUpdate;
}

+ (id)properties;
@property(nonatomic) BOOL requiresHomeManagerUpdate; // @synthesize requiresHomeManagerUpdate=_requiresHomeManagerUpdate;
- (id)dependentUUIDs;

// Remaining properties
@property(retain, nonatomic) NSString *ownerName; // @dynamic ownerName;

@end

