//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBDisplayAdAdapter.h"

#import "FBInterstitialAdDelegate.h"

@class FBInterstitialAdInternal, NSString;

@interface FBANInterstitialAdAdapter : FBDisplayAdAdapter <FBInterstitialAdDelegate>
{
    FBInterstitialAdInternal *_target;
}

@property(retain, nonatomic) FBInterstitialAdInternal *target; // @synthesize target=_target;
- (void).cxx_destruct;
- (void)interstitialAdWillLogImpression:(id)arg1;
- (void)interstitialAd:(id)arg1 didFailWithError:(id)arg2;
- (void)interstitialAdDidLoad:(id)arg1;
- (void)interstitialAdWillClose:(id)arg1;
- (void)interstitialAdDidClose:(id)arg1;
- (void)interstitialAdDidClick:(id)arg1;
- (id)adView;
- (_Bool)startAdFromRootViewController:(id)arg1;
- (void)loadAdData:(id)arg1 forSize:(struct FBAdSize)arg2 forOrientation:(long long)arg3 forPlacement:(id)arg4 minViewability:(int)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

