//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PHResourceDownloadRequestOptions : NSObject
{
    BOOL _treatLivePhotoAsStill;
    BOOL _dontAllowRAW;
    BOOL _downloadAllAssetResources;
}

@property(nonatomic) BOOL downloadAllAssetResources; // @synthesize downloadAllAssetResources=_downloadAllAssetResources;
@property(nonatomic) BOOL dontAllowRAW; // @synthesize dontAllowRAW=_dontAllowRAW;
@property(nonatomic) BOOL treatLivePhotoAsStill; // @synthesize treatLivePhotoAsStill=_treatLivePhotoAsStill;
- (id)description;

@end

