//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKitDaemon/CKDCancelling-Protocol.h>

@class CKDCancelTokenGroup, CKDMMCSItem, CKDMMCSRequestOptions, CKDProgressTracker, CKPackage, NSArray, NSError;
@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface CKPackageUploadTask : NSObject <CKDCancelling>
{
    NSError *_error;
    CKPackage *_package;
    CKDMMCSItem *_MMCSManifestItem;
    NSArray *_MMCSSectionItems;
    CKDProgressTracker *_progressTracker;
    CKDMMCSRequestOptions *_MMCSRequestOptions;
    NSObject<OS_dispatch_group> *_group;
    CKDCancelTokenGroup *_cancelTokens;
}

@property(retain, nonatomic) CKDCancelTokenGroup *cancelTokens; // @synthesize cancelTokens=_cancelTokens;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *group; // @synthesize group=_group;
@property(retain, nonatomic) CKDMMCSRequestOptions *MMCSRequestOptions; // @synthesize MMCSRequestOptions=_MMCSRequestOptions;
@property(retain, nonatomic) CKDProgressTracker *progressTracker; // @synthesize progressTracker=_progressTracker;
@property(retain, nonatomic) NSArray *MMCSSectionItems; // @synthesize MMCSSectionItems=_MMCSSectionItems;
@property(retain, nonatomic) CKDMMCSItem *MMCSManifestItem; // @synthesize MMCSManifestItem=_MMCSManifestItem;
@property(readonly, nonatomic) CKPackage *package; // @synthesize package=_package;
@property(retain) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithPackage:(id)arg1 trackProgress:(BOOL)arg2;

@end

