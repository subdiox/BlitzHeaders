//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TuneLocationHelper : NSObject
{
}

+ (void)startLocationUpdates;
+ (_Bool)createLocationManager;
+ (_Bool)isLocationEnabled;
+ (id)tuneLocationFromCLLocation:(id)arg1;
+ (void)getCurrentCLLocation;
+ (void)getOrRequestDeviceLocation:(id)arg1;
+ (void)initialize;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)startLocationUpdates;

@end

