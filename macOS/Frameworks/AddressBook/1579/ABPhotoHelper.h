//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface ABPhotoHelper : NSObject
{
    NSString *_imagesFolder;
    NSString *_identifier;
    NSArray *_emails;
}

+ (id)helperWithImagesFolder:(id)arg1 personIdentifier:(id)arg2 emailAddresses:(id)arg3;
- (BOOL)hasCustomImageOfKind:(id)arg1;
- (BOOL)hasCustomImage;
- (BOOL)hasImageData;
- (id)imageDataInLibrary:(id)arg1;
- (id)libraryImageData;
- (id)thumbnailImagePath;
- (id)largeImagePath;
- (id)imagePathOfKind:(id)arg1;
- (id)imageOfKind:(id)arg1;
- (id)largeImageHashOfType:(id)arg1;
- (id)imageDataOfKind:(id)arg1;
- (struct CGRect)largeImageCropRectOfType:(id)arg1;
- (struct CGRect)imageCropRectOfType:(id)arg1 imageKind:(id)arg2;
- (id)largeImageCropRectTypes;
- (id)imageCropRectTypesOfKind:(id)arg1;
- (id)imageCropRectsOfKind:(id)arg1;
- (id)_jpegImageDataOfKind:(id)arg1 compressionFactor:(id)arg2 allowRecompression:(BOOL)arg3;
- (id)_jpegImageDataOfKind:(id)arg1;
- (id)_jpegImageDataOfKind:(id)arg1 maximumLength:(unsigned long long)arg2;
- (id)_jpegImageDataByScalingImage:(id)arg1 toMaximumEdgeWith:(unsigned long long)arg2 outScalingFactor:(double *)arg3;
- (id)_jpegImageDataOfKind:(id)arg1 maximumLength:(unsigned long long)arg2 cropRectangles:(id *)arg3;
- (id)jpegDataOfAllowableKinds:(id)arg1 maximumLength:(unsigned long long)arg2 cropRects:(id *)arg3;
- (void)dealloc;
- (id)initWithImagesFolder:(id)arg1 personIdentifier:(id)arg2 emailAddresses:(id)arg3;

@end

