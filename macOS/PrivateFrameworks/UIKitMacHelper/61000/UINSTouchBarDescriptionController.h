//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSTouchBar, UINSTouchBar;

__attribute__((visibility("hidden")))
@interface UINSTouchBarDescriptionController : NSObject
{
    UINSTouchBar *_touchBar;
    NSMapTable *_identifiersToTouchBarItems;
    UINSTouchBar *_touchBarDescription;
}

@property(retain, nonatomic) UINSTouchBar *touchBarDescription; // @synthesize touchBarDescription=_touchBarDescription;
- (void).cxx_destruct;
- (void)_updateTouchBar;
@property(readonly, nonatomic) NSTouchBar *touchBar;
- (void)_setupDescription;
- (id)initWithTouchBarDescription:(id)arg1;

@end

