//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol CMMotionAlarmDelegateProtocol;

@interface CMMotionAlarmManager : NSObject
{
    id <CMMotionAlarmDelegateProtocol> _delegate;
    NSString *_name;
}

+ (id)defaultManager;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) id <CMMotionAlarmDelegateProtocol> delegate; // @synthesize delegate=_delegate;
- (BOOL)acknowledgeAlarm:(id)arg1 error:(id *)arg2;
- (BOOL)unregisterAlarm:(id)arg1 error:(id *)arg2;
- (BOOL)launchRemoteAppWithError:(id *)arg1;
- (BOOL)acknowledgeAlarmWithName:(id)arg1 error:(id *)arg2;
- (BOOL)unregisterAlarmWithName:(id)arg1 error:(id *)arg2;
- (BOOL)registerAlarmWithName:(id)arg1 type:(unsigned int)arg2 duration:(unsigned int)arg3 repeats:(BOOL)arg4 error:(id *)arg5;
- (void)dealloc;
- (id)initWithName:(id)arg1;
- (id)init;

@end

