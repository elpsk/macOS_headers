//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MKQuickRouteTransportTypeFinding-Protocol.h"

@class MNIdealTransportTypeFinder;
@protocol MapTypeSource;

__attribute__((visibility("hidden")))
@interface DefaultTransportTypeFinder : NSObject <MKQuickRouteTransportTypeFinding>
{
    MNIdealTransportTypeFinder *_transportTypeFinder;
    id <MapTypeSource> _mapTypeSource;
}

@property(readonly, nonatomic) __weak id <MapTypeSource> mapTypeSource; // @synthesize mapTypeSource=_mapTypeSource;
- (void).cxx_destruct;
- (void)findDirectionsTypeForOriginCoordinate:(struct CLLocationCoordinate2D)arg1 destinationCoordinate:(struct CLLocationCoordinate2D)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_defaultMKDirectionsTypeForOrigin:(struct CLLocationCoordinate2D)arg1 destination:(struct CLLocationCoordinate2D)arg2 ignoreOriginAndDestination:(BOOL)arg3 ignoreMapType:(BOOL)arg4 handler:(CDUnknownBlockType)arg5;
- (void)_transportTypeForOrigin:(struct CLLocationCoordinate2D)arg1 destination:(struct CLLocationCoordinate2D)arg2 ignoreOriginAndDestination:(BOOL)arg3 ignoreMapType:(BOOL)arg4 handler:(CDUnknownBlockType)arg5;
- (void)mkDirectionsTypeIgnoringOriginDestinationAndMapType:(BOOL)arg1 handler:(CDUnknownBlockType)arg2;
- (void)mkDirectionsTypeForOrigin:(struct CLLocationCoordinate2D)arg1 destination:(struct CLLocationCoordinate2D)arg2 ignoreMapType:(BOOL)arg3 handler:(CDUnknownBlockType)arg4;
- (void)transportTypeIgnoringOriginDestinationAndMapType:(BOOL)arg1 handler:(CDUnknownBlockType)arg2;
- (void)transportTypeForOrigin:(struct CLLocationCoordinate2D)arg1 destination:(struct CLLocationCoordinate2D)arg2 ignoreMapType:(BOOL)arg3 handler:(CDUnknownBlockType)arg4;
- (void)mkDirectionsTypeIgnoringOriginAndDestinationWithHandler:(CDUnknownBlockType)arg1;
- (void)transportTypeIgnoringOriginAndDestinationWithHandler:(CDUnknownBlockType)arg1;
- (void)mkDirectionsTypeForOrigin:(struct CLLocationCoordinate2D)arg1 destination:(struct CLLocationCoordinate2D)arg2 handler:(CDUnknownBlockType)arg3;
- (void)transportTypeForOrigin:(struct CLLocationCoordinate2D)arg1 destination:(struct CLLocationCoordinate2D)arg2 handler:(CDUnknownBlockType)arg3;
- (id)initWithMapTypeSource:(id)arg1;

@end

