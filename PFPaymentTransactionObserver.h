//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SKPaymentTransactionObserver.h"

@class NSMutableDictionary, NSString;

@interface PFPaymentTransactionObserver : NSObject <SKPaymentTransactionObserver>
{
    NSMutableDictionary *blocks;
    NSMutableDictionary *runOnceBlocks;
    NSObject *lockObj;
    NSObject *runOnceLockObj;
}

@property(retain, nonatomic) NSObject *runOnceLockObj; // @synthesize runOnceLockObj;
@property(retain, nonatomic) NSObject *lockObj; // @synthesize lockObj;
@property(retain, nonatomic) NSMutableDictionary *runOnceBlocks; // @synthesize runOnceBlocks;
@property(retain, nonatomic) NSMutableDictionary *blocks; // @synthesize blocks;
- (void).cxx_destruct;
- (void)handle:(id)arg1 runOnceBlock:(CDUnknownBlockType)arg2;
- (void)handle:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)completeTransaction:(id)arg1 fromPaymentQueue:(id)arg2;
- (void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

