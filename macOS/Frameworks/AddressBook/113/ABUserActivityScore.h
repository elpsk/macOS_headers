//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ABPerson;

@interface ABUserActivityScore : NSObject
{
    unsigned long long _score;
    ABPerson *_person;
}

+ (id)matchWithPerson:(id)arg1 score:(unsigned long long)arg2;
@property unsigned long long score; // @synthesize score=_score;
@property(retain) ABPerson *person; // @synthesize person=_person;
- (long long)compare:(id)arg1;
- (void)dealloc;
- (id)initWithPerson:(id)arg1 score:(unsigned long long)arg2;

@end

