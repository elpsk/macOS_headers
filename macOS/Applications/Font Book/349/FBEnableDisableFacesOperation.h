//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBUndoableOperation.h"

@interface FBEnableDisableFacesOperation : FBUndoableOperation
{
}

+ (id)enableFaces:(id)arg1 disableFaces:(id)arg2;
- (void)redoInternal;
- (void)undoInternal;
- (void)performInternal;
- (BOOL)canUndoRedo;
- (BOOL)canAbort;
- (id)_facesToDisable:(BOOL)arg1;
- (id)_facesToEnable:(BOOL)arg1;

@end

