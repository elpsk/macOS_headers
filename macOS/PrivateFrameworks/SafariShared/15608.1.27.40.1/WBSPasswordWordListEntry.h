//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WBSPasswordWordListEntry : NSObject
{
    BOOL _sensitive;
    NSString *_word;
    NSString *_wordListIdentifier;
    unsigned long long _guessesRequired;
}

@property(readonly, nonatomic) unsigned long long guessesRequired; // @synthesize guessesRequired=_guessesRequired;
@property(readonly, copy, nonatomic) NSString *wordListIdentifier; // @synthesize wordListIdentifier=_wordListIdentifier;
@property(readonly, nonatomic, getter=isSensitive) BOOL sensitive; // @synthesize sensitive=_sensitive;
@property(readonly, copy, nonatomic) NSString *word; // @synthesize word=_word;
- (void).cxx_destruct;
- (id)description;
- (id)initWithWord:(id)arg1 isSensitive:(BOOL)arg2 wordListIdentifier:(id)arg3 guessesRequired:(unsigned long long)arg4;

@end

