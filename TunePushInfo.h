//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface TunePushInfo : NSObject
{
    NSString *_campaignId;
    NSString *_pushId;
    NSDictionary *_extrasPayload;
}

@property(copy, nonatomic) NSDictionary *extrasPayload; // @synthesize extrasPayload=_extrasPayload;
@property(copy, nonatomic) NSString *pushId; // @synthesize pushId=_pushId;
@property(copy, nonatomic) NSString *campaignId; // @synthesize campaignId=_campaignId;
- (void).cxx_destruct;
- (id)initWithNotification:(id)arg1;

@end
