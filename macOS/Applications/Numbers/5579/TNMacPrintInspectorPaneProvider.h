//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TMAInspectorPaneProvider-Protocol.h"

@class NSString;

@interface TNMacPrintInspectorPaneProvider : NSObject <TMAInspectorPaneProvider>
{
}

+ (id)provider;
- (BOOL)shouldAddScrollViewForIdentifier:(id)arg1;
- (id)localizedTabNameForIdentifier:(id)arg1;
- (id)selectedPaneIdentifierForPaneIdentifiers:(id)arg1 editors:(id)arg2 previousIdentifier:(id)arg3 editorsDidChange:(BOOL)arg4 newCanvasObjectAdded:(BOOL)arg5;
- (id)inspectorControllerForIdentifier:(id)arg1;
- (id)paneIdentifiersForEditors:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) BOOL isRestorable;
@property(readonly) NSString *localizedProviderName;
@property(readonly) Class superclass;

@end

