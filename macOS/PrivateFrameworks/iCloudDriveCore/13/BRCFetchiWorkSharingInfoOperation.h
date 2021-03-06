//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iCloudDriveCore/_BRCOperation.h>

#import "BRCOperationSubclass.h"

@class CKRecordID, NSString;

__attribute__((visibility("hidden")))
@interface BRCFetchiWorkSharingInfoOperation : _BRCOperation <BRCOperationSubclass>
{
    CKRecordID *_recordID;
}

@property(retain, nonatomic) CKRecordID *recordID; // @synthesize recordID=_recordID;
- (void).cxx_destruct;
- (void)main;
- (BOOL)shouldRetryForError:(id)arg1;
- (id)createActivity;
- (id)initWithDocumentItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

