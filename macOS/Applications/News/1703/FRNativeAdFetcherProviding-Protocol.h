//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FRBannerView, NSSet;

@protocol FRNativeAdFetcherProviding <NSObject>
- (FRBannerView *)pendingBannerView;
- (void)requestNativeAdWithContext:(NSSet *)arg1 completion:(void (^)(FRBannerView *, NSError *))arg2;
- (BOOL)isRequestAlreadyInFlight;
@end

