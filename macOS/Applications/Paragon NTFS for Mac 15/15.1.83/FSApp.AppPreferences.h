//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSSet, NSURL, NSUserDefaults;

@interface FSApp.AppPreferences : NSObject
{
    // Error parsing type: , name: defaults
    // Error parsing type: , name: themeUpdateObservers
    // Error parsing type: , name: menuAppURL.storage
}

+ (void)setMenuAutoStartLoginItemEnabled:(BOOL)arg1;
+ (id)preferences;
- (CDUnknownBlockType).cxx_destruct;
@property(nonatomic, copy) NSSet *skippedUpdates;
@property(nonatomic, readonly) BOOL showUnpublishedUpdates;
@property(nonatomic, retain) NSDate *lastUpdateCheckDate;
@property(nonatomic) BOOL updateCheckDisabled;
@property(nonatomic) BOOL analyticsDisabled;
@property(nonatomic, retain) NSURL *menuAppURL;
@property(nonatomic) BOOL menuAutoStartDisabled;
- (id)init;
@property(nonatomic, readonly) NSUserDefaults *defaults; // @synthesize defaults;

@end

