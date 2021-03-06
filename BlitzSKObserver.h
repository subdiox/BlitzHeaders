//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SKPaymentTransactionObserver.h"

@class NSString;

@interface BlitzSKObserver : NSObject <SKPaymentTransactionObserver>
{
    struct IAPAppleService *myShop;
}

- (void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2;
- (void)processTransactions:(id)arg1;
- (void)deferredTransaction:(id)arg1;
- (void)failedTransaction:(id)arg1;
- (void)restoreTransaction:(id)arg1;
- (void)completeTransaction:(id)arg1;
- (void)setShop:(struct IAPAppleService *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

