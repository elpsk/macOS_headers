//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class FCOngoingPurchaseEntry, NSError, NSString;

@protocol FCPurchaseManagerDelegate
- (void)purchaseSuccessWithProductID:(NSString *)arg1 purchaseReceipt:(NSString *)arg2 chargeCurrencyCode:(NSString *)arg3 ongoingPurchaseEntry:(FCOngoingPurchaseEntry *)arg4;
- (void)purchaseFailedForInvalidPurchaseReceiptWithProductID:(NSString *)arg1 ongoingPurchaseEntry:(FCOngoingPurchaseEntry *)arg2;
- (void)purchaseFailedWithProductID:(NSString *)arg1 transactionState:(long long)arg2 transactionError:(NSError *)arg3 ongoingPurchaseEntry:(FCOngoingPurchaseEntry *)arg4;
@end

