//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DBSerializable.h"
#import "NSCopying.h"

@class NSString;

@interface DBTEAMTeamFolderListContinueArg : NSObject <DBSerializable, NSCopying>
{
    NSString *_cursor;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, copy, nonatomic) NSString *cursor; // @synthesize cursor=_cursor;
- (void).cxx_destruct;
- (BOOL)isEqualToTeamFolderListContinueArg:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithCursor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

