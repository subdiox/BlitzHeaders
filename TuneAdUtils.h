/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>
#import "wotblitz-Structs.h"


@interface TuneAdUtils : NSObject {
}
+(id)urlEncode:(id)encode;
+(id)closeButtonImage;
+(double)durationExponentialDelayForRetry:(int)retry;
+(double)durationDelayForRetry:(int)retry;
+(id)webviewForAdView:(CGSize)adView webviewDelegate:(id)delegate scrollviewDelegate:(id)delegate3;
+(id)requestQueryParams:(id)params;
+(id)tuneUrlForAd:(id)ad subdomain:(id)subdomain action:(id)action;
+(id)tuneAdClosedUrl:(id)url;
+(id)tuneAdViewUrl:(id)url;
+(id)tuneAdClickUrl:(id)url;
+(id)tuneAdServerUrl:(int)url;
+(id)itunesItemIdAndTokensFromUrl:(id)url;
+(id)itunesItemIdFromUrl:(id)url;
@end
