//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBNativeAdDataModel, UIView;

@interface FBDisplayAdAdapter : NSObject
{
    UIView *_adView;
    FBNativeAdDataModel *_nativeAdData;
    id <FBDisplayAdAdapterDelegate> _delegate;
}

@property(nonatomic) __weak id <FBDisplayAdAdapterDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) FBNativeAdDataModel *nativeAdData; // @synthesize nativeAdData=_nativeAdData;
@property(retain, nonatomic) UIView *adView; // @synthesize adView=_adView;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)onVideoTimeWithExtraData:(id)arg1;
- (void)onVideoPlayWithExtraData:(id)arg1;
- (void)onClickForViewController:(id)arg1 withExtraData:(id)arg2;
- (void)onImpressionWithExtraData:(id)arg1 withPostData:(id)arg2;
- (void)unregisterView;
- (void)registerViewForInteraction:(id)arg1 withViewController:(id)arg2;
- (_Bool)startAdFromRootViewController:(id)arg1;
- (void)loadAdData:(id)arg1 forSize:(struct FBAdSize)arg2 forOrientation:(long long)arg3 forPlacement:(id)arg4 minViewability:(int)arg5;
- (id)initWithDelegate:(id)arg1;

@end

