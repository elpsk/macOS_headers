//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSString;

@interface PARDeviceContext : NSManagedObject
{
    NSString *country;
    NSString *deviceModel;
    NSString *locale;
    NSString *osVersion;
}

+ (id)fetchRequest;
@property(copy, nonatomic) NSString *osVersion; // @synthesize osVersion;
@property(copy, nonatomic) NSString *locale; // @synthesize locale;
@property(copy, nonatomic) NSString *deviceModel; // @synthesize deviceModel;
@property(copy, nonatomic) NSString *country; // @synthesize country;
- (void).cxx_destruct;

@end

