//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "INCacheableContainer.h"
#import "INImageProxyInjecting.h"
#import "INRideVehicleExport.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class CLLocation, INImage, NSString;

@interface INRideVehicle : NSObject <INImageProxyInjecting, INCacheableContainer, INRideVehicleExport, NSCopying, NSSecureCoding>
{
    CLLocation *_location;
    NSString *_registrationPlate;
    NSString *_manufacturer;
    NSString *_model;
    INImage *_mapAnnotationImage;
}

+ (BOOL)supportsSecureCoding;
@property(copy) INImage *mapAnnotationImage; // @synthesize mapAnnotationImage=_mapAnnotationImage;
@property(copy) NSString *model; // @synthesize model=_model;
@property(copy) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
@property(copy) NSString *registrationPlate; // @synthesize registrationPlate=_registrationPlate;
@property(copy) CLLocation *location; // @synthesize location=_location;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)_injectProxiesForImages:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_intents_updateContainerWithCache:(id)arg1;
- (id)_intents_cacheableObjects;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

