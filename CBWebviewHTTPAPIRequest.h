//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBHTTPAPIRequest.h"

@interface CBWebviewHTTPAPIRequest : CBHTTPAPIRequest
{
}

- (id)responseMaskForPath:(id)arg1;
- (id)responsePredicateForPath:(id)arg1;
- (void)incrementRetryCount;
- (void)signRequest;
- (void)appendShouldCache;
- (id)getCarrierInfo;
- (void)appendDeviceInfoParameters;
- (void)initRequestBody;

@end

