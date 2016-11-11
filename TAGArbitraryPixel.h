/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "TAGTrackingTag.h"


__attribute__((visibility("hidden")))
@interface TAGArbitraryPixel : TAGTrackingTag {
}
+(id)urlKey;
+(id)functionId;
-(BOOL)idInCache:(id)cache;
-(void)clearCache;
-(BOOL)idInPlist:(id)plist;
-(void)cacheUnrepeatableId:(id)anId;
-(BOOL)idProcessed:(id)processed;
-(id)getHitSender;
-(id)getQueryParametersStringFromArray:(id)array;
-(void)addDictionary:(id)dictionary toArray:(id)array;
-(void)evaluateTrackingTag:(id)tag;
-(id)init;
@end
