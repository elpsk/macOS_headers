//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppStoreKit/AMSURLProtocolDelegate-Protocol.h>
#import <AppStoreKit/NSURLSessionDelegate-Protocol.h>

@interface _TtC11AppStoreKit19URLProtocolDelegate : NSObject <AMSURLProtocolDelegate, NSURLSessionDelegate>
{
    // Error parsing type: , name: dialogStyle
}

- (void).cxx_destruct;
- (id)init;
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleAuthenticateRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleDialogRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end

