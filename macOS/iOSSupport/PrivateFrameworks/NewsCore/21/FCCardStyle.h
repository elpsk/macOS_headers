//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCCardStyleProviding-Protocol.h>

@class FCColor, FCColorGradient, NSString;

@interface FCCardStyle : NSObject <FCCardStyleProviding>
{
    FCColor *_titleForegroundColor;
    FCColor *_eyebrowForegroundColor;
    FCColor *_cardBackgroundColor;
    FCColor *_cardForegroundColor;
    FCColorGradient *_sauceGradient;
    FCColor *_ctaBackgroundColor;
    FCColor *_ctaForegroundColor;
}

+ (id)styleWithConfigDict:(id)arg1;
+ (id)styleWithPBCardStyle:(id)arg1;
@property(copy, nonatomic) FCColor *ctaForegroundColor; // @synthesize ctaForegroundColor=_ctaForegroundColor;
@property(copy, nonatomic) FCColor *ctaBackgroundColor; // @synthesize ctaBackgroundColor=_ctaBackgroundColor;
@property(copy, nonatomic) FCColorGradient *sauceGradient; // @synthesize sauceGradient=_sauceGradient;
@property(copy, nonatomic) FCColor *cardForegroundColor; // @synthesize cardForegroundColor=_cardForegroundColor;
@property(copy, nonatomic) FCColor *cardBackgroundColor; // @synthesize cardBackgroundColor=_cardBackgroundColor;
@property(copy, nonatomic) FCColor *eyebrowForegroundColor; // @synthesize eyebrowForegroundColor=_eyebrowForegroundColor;
@property(copy, nonatomic) FCColor *titleForegroundColor; // @synthesize titleForegroundColor=_titleForegroundColor;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithTitleForegroundColor:(id)arg1 eyebrowForegroundColor:(id)arg2 cardBackgroundColor:(id)arg3 cardForegroundColor:(id)arg4 sauceGradient:(id)arg5 ctaBackgroundColor:(id)arg6 ctaForegroundColor:(id)arg7;
- (id)pbCardStyle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

