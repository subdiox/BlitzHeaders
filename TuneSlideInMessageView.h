//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TuneBaseSlideInMessageView.h"

@interface TuneSlideInMessageView : TuneBaseSlideInMessageView
{
}

- (id)buildViewForOrientation:(int)arg1;
- (void)deviceOrientationDidChange:(id)arg1;
- (void)dismissOrientation:(long long)arg1;
- (void)showOrientation:(long long)arg1;
- (int)getTransitionByOrientation:(long long)arg1;
- (void)buildMessageContainerForOrientation:(long long)arg1;
- (void)layoutBackgroundImage;
- (void)layoutBackgroundImageForDeviceOrientation:(long long)arg1;
- (void)addBackgroundColor;
- (void)addBackgroundColorForDeviceOrientation:(long long)arg1;
- (void)addMessageClickOverlayAction;
- (void)setPhoneAction:(id)arg1;
- (void)setTabletAction:(id)arg1;
- (void)layoutCloseButton;
- (void)layoutCloseButtonForDeviceOrientation:(long long)arg1;
- (void)show;
- (void)layoutCTA;
- (void)layoutCTAForDeviceOrientation:(long long)arg1;
- (void)layoutMessage;
- (void)layoutMessageForDeviceOrientation:(long long)arg1;

@end

