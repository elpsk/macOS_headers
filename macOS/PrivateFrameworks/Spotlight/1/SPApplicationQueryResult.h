//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Spotlight/SPMetadataResult.h>

#import "NSSecureCoding.h"

@class NSArray;

@interface SPApplicationQueryResult : SPMetadataResult <NSSecureCoding>
{
    // Error parsing type: T, name: _score
    NSArray *_displayNameInitials;
}

+ (BOOL)supportsSecureCoding;
@property(retain) NSArray *displayNameInitials; // @synthesize displayNameInitials=_displayNameInitials;
- (void).cxx_destruct;
- (BOOL)isFile;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isApplicationQueryResult;
- (void)setScore: /* Error: Ran out of types for this method. */;
-     // Error parsing type: T16@0:8, name: score
- (id)valueForAttribute:(id)arg1;
- (id)groupName;
- (id)category;
- (id)initWithResult:(id)arg1;

@end

