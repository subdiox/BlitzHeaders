//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBAdUtility.h"

@interface FBAdUtility (FBAdLoggingUtility)
+ (void)sendRequestInternal:(id)arg1 withExtraData:(id)arg2 withPostData:(id)arg3;
+ (void)sendRequestInternal:(id)arg1 withExtraData:(id)arg2;
+ (void)logVideoTime:(id)arg1 withExtraData:(id)arg2;
+ (void)logVideoPlay:(id)arg1 withExtraData:(id)arg2;
+ (void)logImpression:(id)arg1 withExtraData:(id)arg2 withPostData:(id)arg3;
+ (void)logImpression:(id)arg1 withExtraData:(id)arg2;
+ (void)logInvalidation:(id)arg1;
+ (void)logUsed:(id)arg1 withExtraData:(id)arg2;
+ (void)logNativeImpression:(id)arg1;
+ (void)logClick:(id)arg1 withExtraData:(id)arg2;
+ (void)logNativeClick:(id)arg1 withExtraData:(id)arg2;
+ (void)displayVerboseDebugMessage:(id)arg1;
+ (void)displayDebugMessage:(id)arg1;
@end

