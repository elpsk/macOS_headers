//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppStoreKit/AMPWritingDirectionContentProtocol-Protocol.h>

@class NSArray, NSAttributedString, NSString;

@interface AMPLanguageAwareString : NSObject <AMPWritingDirectionContentProtocol>
{
    // Error parsing type: , name: baseAttributedString
    // Error parsing type: , name: $__lazy_storage_$_attributedString
    // Error parsing type: , name: cachedTextStorage
    // Error parsing type: , name: knownBaseWritingDirections
    // Error parsing type: , name: $__lazy_storage_$_localizedLowercase
    // Error parsing type: , name: $__lazy_storage_$_localizedUppercase
    // Error parsing type: , name: $__lazy_storage_$_newlinesCollapsedToSpace
    // Error parsing type: , name: string
    // Error parsing type: , name: numbers
    // Error parsing type: , name: paragraphDirections
    // Error parsing type: , name: paragraphs
    // Error parsing type: , name: words
    // Error parsing type: , name: $__lazy_storage_$_fullRange
    // Error parsing type: , name: $__lazy_storage_$_isEmpty
    // Error parsing type: , name: $__lazy_storage_$_utf16Count
    // Error parsing type: , name: $__lazy_storage_$_utf32Count
    // Error parsing type: , name: $__lazy_storage_$_thresholdBaseWritingDirection
}

+ (id)AMPLanguageAwareStringEmpty;
+ (void)setDelegate:(id)arg1;
+ (id)delegate;
- (void).cxx_destruct;
- (id)init;
- (id)writingDirectionsQuantities;
- (long long)writingDirectionOfLine:(long long)arg1 maximumLinesShown:(long long)arg2 withWidth:(double)arg3 lineBreakMode:(unsigned long long)arg4 cacheLayoutInfo:(BOOL)arg5;
@property(nonatomic) long long thresholdBaseWritingDirection;
- (long long)baseWritingDirectionForCharacterAtLocation:(long long)arg1;
- (id)initWithLanguageAwareString:(id)arg1 attributes:(id)arg2;
- (id)initWithString:(id)arg1 baseParagraphStyle:(id)arg2;
- (id)initWithString:(id)arg1 attributes:(id)arg2 baseParagraphStyle:(id)arg3;
- (id)initWithAttributedString:(id)arg1 baseParagraphStyle:(id)arg2;
@property(nonatomic) long long utf32Length;
@property(nonatomic) long long length;
@property(nonatomic) BOOL isEmpty;
@property(nonatomic) struct _NSRange fullRange;
@property(nonatomic, readonly) NSArray *words;
@property(nonatomic, readonly) NSArray *paragraphs;
@property(nonatomic, readonly) NSArray *paragraphDirections;
@property(nonatomic, readonly) NSArray *numbers;
@property(nonatomic, readonly) NSString *string;
@property(nonatomic, retain) AMPLanguageAwareString *newlinesCollapsedToSpace;
@property(nonatomic, retain) NSAttributedString *localizedUppercase;
@property(nonatomic, retain) NSAttributedString *localizedLowercase;
@property(nonatomic, retain) NSAttributedString *attributedString;

@end

