//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSDictionary, NSString, NSURL, SAUIAddViews, SAUIImageResource;

@interface SAUIAppPunchOut : SABaseClientBoundCommand
{
}

+ (id)appPunchOutWithDictionary:(id)arg1 context:(id)arg2;
+ (id)appPunchOut;
- (BOOL)mutatingCommand;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSArray *themeIcons;
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSURL *punchOutUri;
@property(copy, nonatomic) NSString *punchOutName;
@property(copy, nonatomic) NSString *providerId;
@property(copy, nonatomic) NSString *predefinedButtonType;
@property(nonatomic) BOOL launchOverSiri;
@property(copy, nonatomic) NSArray *launchOptions;
@property(copy, nonatomic) NSString *bundleId;
@property(copy, nonatomic) NSURL *appStoreUri;
@property(nonatomic) BOOL appInstalled;
@property(copy, nonatomic) NSDictionary *appIconMap;
@property(retain, nonatomic) SAUIImageResource *appIcon;
@property(copy, nonatomic) NSString *appDisplayName;
@property(nonatomic) BOOL appAvailableInStorefront;
@property(retain, nonatomic) SAUIAddViews *alternativePunchOut;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

