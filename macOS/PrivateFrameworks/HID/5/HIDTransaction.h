//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface HIDTransaction : NSObject
{
    struct __IOHIDTransaction *_transaction;
}

- (BOOL)commitElements:(id)arg1 error:(out id *)arg2;
@property long long direction;
- (id)description;
- (void)dealloc;
- (id)initWithDevice:(id)arg1;

@end

