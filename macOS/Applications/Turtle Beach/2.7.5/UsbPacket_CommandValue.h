//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface UsbPacket_CommandValue : NSObject <NSCopying>
{
    int _offset;
    int _value;
    int _userValue;
}

@property int userValue; // @synthesize userValue=_userValue;
@property int value; // @synthesize value=_value;
@property int offset; // @synthesize offset=_offset;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

