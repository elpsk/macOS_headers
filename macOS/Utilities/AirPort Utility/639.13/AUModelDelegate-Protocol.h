//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AUDataModel;

@protocol AUModelDelegate <NSObject>

@optional
- (void)dataModelDidSaveData:(AUDataModel *)arg1;
- (void)dataModelWillSaveData:(AUDataModel *)arg1;
- (void)dataModelDidLoadData:(AUDataModel *)arg1;
- (void)dataModelWillLoadData:(AUDataModel *)arg1;
@end

