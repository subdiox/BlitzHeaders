/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "wotblitz-Structs.h"
#import "FBNativeAdView.h"
#import "NSObject.h"
#import "FBAdUpdatableView.h"
#import <UIKit/UIView.h>
#import "FBNativeAdDelegate.h"

@class FBNativeAdViewAttributes, FBMediaView, FBAdChoicesView, FBAdNativeContentContainer, UIImageView, UIButton, NSHashTable, UILabel, UIViewController, NSString, FBAdBodyView, FBNativeAd;

@protocol FBNativeAdView <NSObject>
-(id)allInteractableTargets;
-(void)populate:(id)populate;
@end

@interface FBNativeAdView : UIView <FBNativeAdDelegate, FBNativeAdView, FBAdUpdatableView> {
	BOOL _loaded;
	int _type;
	UIViewController* _viewController;
	FBNativeAd* _nativeAd;
	FBNativeAdViewAttributes* _attributes;
	UIButton* _callToActionButton;
	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	UILabel* _socialContextLabel;
	UIImageView* _iconImageView;
	FBMediaView* _coverImageView;
	FBAdChoicesView* _sponsoredView;
	FBAdBodyView* _bodyView;
	UIView* _containerView;
	NSHashTable* _clickableViews;
	NSHashTable* _excludedClickableViews;
	FBAdNativeContentContainer* _contentContainer;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) __weak FBAdNativeContentContainer* contentContainer;
@property(retain, nonatomic) NSHashTable* excludedClickableViews;
@property(retain, nonatomic) NSHashTable* clickableViews;
@property(assign, nonatomic, getter=isLoaded) BOOL loaded;
@property(assign, nonatomic) __weak UIView* containerView;
@property(assign, nonatomic) __weak FBAdBodyView* bodyView;
@property(assign, nonatomic) __weak FBAdChoicesView* sponsoredView;
@property(assign, nonatomic) __weak FBMediaView* coverImageView;
@property(assign, nonatomic) __weak UIImageView* iconImageView;
@property(assign, nonatomic) __weak UILabel* socialContextLabel;
@property(assign, nonatomic) __weak UILabel* descriptionLabel;
@property(assign, nonatomic) __weak UILabel* titleLabel;
@property(assign, nonatomic) __weak UIButton* callToActionButton;
@property(copy, nonatomic) FBNativeAdViewAttributes* attributes;
@property(retain, nonatomic) FBNativeAd* nativeAd;
@property(assign, nonatomic) __weak UIViewController* viewController;
@property(assign, nonatomic) int type;
+(id)defaultAttributes;
+(Class)classFromType:(int)type;
+(id)nativeAdViewWithNativeAd:(id)nativeAd withType:(int)type withAttributes:(id)attributes;
+(id)nativeAdViewWithNativeAd:(id)nativeAd withType:(int)type;
+(id)nativeAdViewWithType:(int)type withAttributes:(id)attributes;
-(void).cxx_destruct;
-(CGRect)bounds;
-(BOOL)usesMediaView;
-(id)fixedHeight;
-(void)dealloc;
-(void)willMoveToWindow:(id)window;
-(id)allInteractableTargets;
-(void)resetViews;
-(void)reset;
-(void)setBounds:(CGRect)bounds;
-(void)setFrame:(CGRect)frame;
-(void)updateView:(BOOL)view;
-(void)constructView;
-(BOOL)implementsSelector:(SEL)selector;
-(void)updateClickableViews;
-(void)constructBodyView;
-(void)constructSponsoredView;
-(void)constructCoverImageView;
-(void)constructIconImageView;
-(void)constructCallToActionButton;
-(void)registerView;
-(void)initializeView;
-(void)updateAttributes:(id)attributes;
-(void)populate:(id)populate;
-(void)nativeAdDidLoad:(id)nativeAd;
-(id)initWithCoder:(id)coder;
-(id)initWithFrame:(CGRect)frame;
-(id)init;
-(id)initWithNativeAd:(id)nativeAd withType:(int)type withAttributes:(id)attributes;
-(id)initWithNativeAd:(id)nativeAd withType:(int)type;
@end
