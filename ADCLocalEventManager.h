//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ADCLocalEventManager : NSObject
{
}

+ (void)onAdsNotFilled:(id)arg1;
+ (void)onAdsNotReady:(id)arg1;
+ (void)onAdsReady:(id)arg1;
+ (void)onV4VCNotRewarded:(id)arg1;
+ (void)onV4VCRewarded:(id)arg1;
+ (void)onAdEnded:(id)arg1 forZone:(id)arg2 forAd:(id)arg3 didReward:(_Bool)arg4;
+ (void)onAdStarted:(id)arg1 forZone:(id)arg2 forAd:(id)arg3 wantedReward:(_Bool)arg4;
+ (void)onAdCouldNotPlay:(id)arg1 forZone:(id)arg2 wantedReward:(_Bool)arg3;
+ (void)onAdStartAttempt:(id)arg1 forZone:(id)arg2 wantedReward:(_Bool)arg3;

@end

