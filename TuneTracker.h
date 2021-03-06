//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TuneEventQueueDelegate.h"

@class NSString, TuneAppToAppTracker, TuneRegionMonitor;

@interface TuneTracker : NSObject <TuneEventQueueDelegate>
{
    TuneAppToAppTracker *appToAppTracker;
    TuneRegionMonitor *regionMonitor;
    _Bool _shouldUseCookieTracking;
    _Bool _fbLogging;
    _Bool _fbLimitUsage;
    _Bool _trackerStarted;
    _Bool _firstSessionOnAppActive;
    id <TuneDelegate> _delegate;
    id <TuneTrackerDelegate> _trackerDelegate;
}

+ (void)initialize;
@property(nonatomic, getter=isFirstSessionOnAppActive) _Bool firstSessionOnAppActive; // @synthesize firstSessionOnAppActive=_firstSessionOnAppActive;
@property(nonatomic, getter=isTrackerStarted) _Bool trackerStarted; // @synthesize trackerStarted=_trackerStarted;
@property(nonatomic) _Bool fbLimitUsage; // @synthesize fbLimitUsage=_fbLimitUsage;
@property(nonatomic) _Bool fbLogging; // @synthesize fbLogging=_fbLogging;
@property(nonatomic) _Bool shouldUseCookieTracking; // @synthesize shouldUseCookieTracking=_shouldUseCookieTracking;
@property(nonatomic) id <TuneTrackerDelegate> trackerDelegate; // @synthesize trackerDelegate=_trackerDelegate;
@property(nonatomic) id <TuneDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)addValue:(id)arg1 forKey:(id)arg2 encryptedParams:(id)arg3 plaintextParams:(id)arg4;
- (void)urlStringForEvent:(id)arg1 trackingLink:(id *)arg2 encryptParams:(id *)arg3;
- (_Bool)isiAdAttribution;
- (id)encryptionKey;
- (void)waitForInit;
- (void)queueRequestDidFailWithError:(id)arg1;
- (void)queueRequestDidSucceedWithData:(id)arg1;
- (void)fetchCWorksImpressionKey:(id *)arg1 andValue:(id *)arg2;
- (void)fetchCWorksClickKey:(id *)arg1 andValue:(id *)arg2;
- (void)sendRequestWithEvent:(id)arg1;
- (void)generateCworksClick:(id *)arg1 impression:(id *)arg2;
- (void)setMeasurement:(id)arg1 advertiserId:(id)arg2 offerId:(id)arg3 publisherId:(id)arg4 redirect:(_Bool)arg5;
- (void)notifyDelegateFailureWithErrorCode:(long long)arg1 key:(id)arg2 message:(id)arg3;
- (void)notifyDelegateSuccessMessage:(id)arg1;
- (void)sendRequestAndCheckIadAttributionForEvent:(id)arg1;
- (void)measureEvent:(id)arg1;
- (void)measureInstallPostConversion;
- (void)checkIadAttribution:(CDUnknownBlockType)arg1;
- (void)applicationStateChanged:(id)arg1;
- (void)applicationDidOpenURL:(id)arg1 sourceApplication:(id)arg2;
- (void)startTracker;
@property(readonly, nonatomic) TuneRegionMonitor *regionMonitor;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

