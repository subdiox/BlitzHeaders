/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>


__attribute__((visibility("hidden")))
@interface TAGClickReferrerUtil : NSObject {
}
+(void)clearCache;
+(id)clickReferrerForConversionId:(id)conversionId component:(id)component;
+(id)parseComponentsFromQueryParameters:(id)queryParameters;
+(id)extractComponent:(id)component fromReferrer:(id)referrer;
+(void)addClickReferrer:(id)referrer;
+(void)initialize;
@end
