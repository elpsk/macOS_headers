//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AppInfo : NSObject
{
}

+ (void)setUserEmail:(id)arg1;
+ (id)userEmail;
+ (void)migratePreferencesFromOldBundleID;
+ (id)appFolderPath;
+ (id)providePreferencesFilePath;
+ (id)provideApplicationSupportPathGlobal:(BOOL)arg1 shouldCreate:(BOOL)arg2;
+ (id)editionLocalized;
+ (id)editionInternal;
+ (id)edition;
+ (int)licenseMajorVersion;
+ (id)versionPublic;
+ (id)versionInternal;
+ (id)landingUrlForTopic:(id)arg1 trialToken:(id)arg2 source:(id)arg3;
+ (id)helpUrlForTopic:(id)arg1 subtopic:(id)arg2 source:(id)arg3;
+ (id)supportMail;
+ (id)displayHomeURL;
+ (id)majorUpgradeURL;
+ (id)blackListURL;
+ (id)homeURL;
+ (id)restoreLostLicenseURL;
+ (id)purchaseLicenseURLOutParams:(id *)arg1;
+ (id)updateURL;
+ (id)decorateDocumentationURL:(id)arg1 source:(id)arg2;
+ (id)privacyPolicyURLWithSource:(id)arg1;
+ (id)termsOfUseURLWithSource:(id)arg1;
+ (id)feedbackURL;
+ (id)twitterURL;
+ (id)adminHelperBundleID;
+ (id)teamID;
+ (id)masBundleID;
+ (id)standAloneBundleID;
+ (id)currentBundleID;
+ (id)productName;

@end

