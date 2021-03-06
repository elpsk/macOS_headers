//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@interface KNMacUILayout : NSObject <NSCopying, NSMutableCopying>
{
    BOOL _showingInspectorPane;
    BOOL _inspectorPaneAutoHidden;
    BOOL _showingSidebar;
    BOOL _showingNavigatorViewInSidebar;
    BOOL _showingPresenterNotes;
    BOOL _showingLightTable;
    BOOL _showingMasterSlides;
    BOOL _showingElementList;
    long long _inspectorPaneViewMode;
}

+ (id)uiLayoutFromArchive:(const struct DesktopUILayoutArchive *)arg1 unarchiver:(id)arg2 context:(id)arg3;
@property(readonly, nonatomic, getter=isShowingElementList) BOOL showingElementList; // @synthesize showingElementList=_showingElementList;
@property(readonly, nonatomic, getter=isShowingMasterSlides) BOOL showingMasterSlides; // @synthesize showingMasterSlides=_showingMasterSlides;
@property(readonly, nonatomic) long long inspectorPaneViewMode; // @synthesize inspectorPaneViewMode=_inspectorPaneViewMode;
@property(readonly, nonatomic, getter=isShowingPresenterNotes) BOOL showingPresenterNotes; // @synthesize showingPresenterNotes=_showingPresenterNotes;
@property(readonly, nonatomic, getter=isShowingLightTable) BOOL showingLightTable; // @synthesize showingLightTable=_showingLightTable;
@property(readonly, nonatomic, getter=isShowingSidebar) BOOL showingSidebar; // @synthesize showingSidebar=_showingSidebar;
@property(readonly, nonatomic, getter=p_isShowingNavigatorViewInSidebar) BOOL p_showingNavigatorViewInSidebar;
@property(readonly, nonatomic) long long inspectorPaneHiddenState;
@property(readonly, nonatomic) long long sidebarViewMode;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)saveToArchive:(struct DesktopUILayoutArchive *)arg1 archiver:(id)arg2;
- (BOOL)inspectorPaneAutoHidden;
- (void)setInspectorPaneAutoHidden:(BOOL)arg1;
- (BOOL)showingInspectorPane;
- (void)setShowingInspectorPane:(BOOL)arg1;
- (id)archivedUILayoutInContext:(id)arg1;

@end

