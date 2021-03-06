//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class AXPSignpostEvent;

@interface AXPSignpostEventResult : NSObject <NSCopying, NSSecureCoding>
{
    AXPSignpostEvent *_event;
    double _secondsOffset;
    long long _warning;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) long long warning; // @synthesize warning=_warning;
@property(nonatomic) double secondsOffset; // @synthesize secondsOffset=_secondsOffset;
@property(copy, nonatomic) AXPSignpostEvent *event; // @synthesize event=_event;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

