//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSDate, NSDictionary, NSMutableArray, NSMutableSet, NSNumber, NSSet, NSString, TuneLocation;

@interface TuneEvent : NSObject
{
    _Bool _postConversion;
    NSString *_eventName;
    long long _eventId;
    NSArray *_eventItems;
    double _revenue;
    NSString *_currencyCode;
    NSString *_refId;
    NSData *_receipt;
    NSString *_contentType;
    NSString *_contentId;
    NSString *_searchString;
    long long _transactionState;
    double _rating;
    long long _level;
    unsigned long long _quantity;
    NSDate *_date1;
    NSDate *_date2;
    NSString *_attribute1;
    NSString *_attribute2;
    NSString *_attribute3;
    NSString *_attribute4;
    NSString *_attribute5;
    NSString *_actionName;
    NSDictionary *_cworksClick;
    NSDictionary *_cworksImpression;
    NSString *_iBeaconRegionId;
    TuneLocation *_location;
    NSNumber *_eventIdObject;
    NSNumber *_revenueObject;
    NSNumber *_transactionStateObject;
    NSNumber *_ratingObject;
    NSNumber *_levelObject;
    NSNumber *_quantityObject;
    NSMutableArray *_tags;
    NSMutableSet *_addedTags;
    NSSet *_notAllowedAttributes;
}

+ (id)actionNameForEvent:(id)arg1;
+ (id)eventWithId:(long long)arg1;
+ (id)eventWithName:(id)arg1;
@property(copy, nonatomic) NSSet *notAllowedAttributes; // @synthesize notAllowedAttributes=_notAllowedAttributes;
@property(retain, nonatomic) NSMutableSet *addedTags; // @synthesize addedTags=_addedTags;
@property(retain, nonatomic) NSMutableArray *tags; // @synthesize tags=_tags;
@property(copy, nonatomic) NSNumber *quantityObject; // @synthesize quantityObject=_quantityObject;
@property(copy, nonatomic) NSNumber *levelObject; // @synthesize levelObject=_levelObject;
@property(copy, nonatomic) NSNumber *ratingObject; // @synthesize ratingObject=_ratingObject;
@property(copy, nonatomic) NSNumber *transactionStateObject; // @synthesize transactionStateObject=_transactionStateObject;
@property(copy, nonatomic) NSNumber *revenueObject; // @synthesize revenueObject=_revenueObject;
@property(copy, nonatomic) NSNumber *eventIdObject; // @synthesize eventIdObject=_eventIdObject;
@property(nonatomic) _Bool postConversion; // @synthesize postConversion=_postConversion;
@property(retain, nonatomic) TuneLocation *location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *iBeaconRegionId; // @synthesize iBeaconRegionId=_iBeaconRegionId;
@property(retain, nonatomic) NSDictionary *cworksImpression; // @synthesize cworksImpression=_cworksImpression;
@property(retain, nonatomic) NSDictionary *cworksClick; // @synthesize cworksClick=_cworksClick;
@property(readonly, copy, nonatomic) NSString *actionName; // @synthesize actionName=_actionName;
@property(copy, nonatomic) NSString *attribute5; // @synthesize attribute5=_attribute5;
@property(copy, nonatomic) NSString *attribute4; // @synthesize attribute4=_attribute4;
@property(copy, nonatomic) NSString *attribute3; // @synthesize attribute3=_attribute3;
@property(copy, nonatomic) NSString *attribute2; // @synthesize attribute2=_attribute2;
@property(copy, nonatomic) NSString *attribute1; // @synthesize attribute1=_attribute1;
@property(retain, nonatomic) NSDate *date2; // @synthesize date2=_date2;
@property(retain, nonatomic) NSDate *date1; // @synthesize date1=_date1;
@property(nonatomic) unsigned long long quantity; // @synthesize quantity=_quantity;
@property(nonatomic) long long level; // @synthesize level=_level;
@property(nonatomic) double rating; // @synthesize rating=_rating;
@property(nonatomic) long long transactionState; // @synthesize transactionState=_transactionState;
@property(copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(copy, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;
@property(copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(copy, nonatomic) NSData *receipt; // @synthesize receipt=_receipt;
@property(copy, nonatomic) NSString *refId; // @synthesize refId=_refId;
@property(copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(nonatomic) double revenue; // @synthesize revenue=_revenue;
@property(copy, nonatomic) NSArray *eventItems; // @synthesize eventItems=_eventItems;
@property(readonly, nonatomic) long long eventId; // @synthesize eventId=_eventId;
@property(copy, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
- (void).cxx_destruct;
- (void)addTag:(id)arg1 value:(id)arg2 type:(int)arg3 hashed:(_Bool)arg4;
- (void)addTag:(id)arg1 withVersionValue:(id)arg2;
- (void)addTag:(id)arg1 withNumberValue:(id)arg2;
- (void)addTag:(id)arg1 withDateTimeValue:(id)arg2;
- (void)addTag:(id)arg1 withBooleanValue:(id)arg2;
- (void)addTag:(id)arg1 withStringValue:(id)arg2 hashed:(_Bool)arg3;
- (void)addTag:(id)arg1 withStringValue:(id)arg2;
- (void)setEventId:(long long)arg1;
- (id)initWithEventId:(long long)arg1;
- (id)initWithEventName:(id)arg1;
- (id)init;

@end

