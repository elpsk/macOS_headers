//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Contacts/CNSiriIntelligenceSettingsProtocol-Protocol.h>

__attribute__((visibility("hidden")))
@interface CNSiriIntelligenceSettings : NSObject <CNSiriIntelligenceSettingsProtocol>
{
    // Error parsing type: AB, name: _shouldShowSiriSuggestions
    int _notificationToken;
}

- (void)setShouldShowSiriSuggestions:(BOOL)arg1;
- (BOOL)shouldShowSiriSuggestions;
- (void)dealloc;
- (id)init;

@end

