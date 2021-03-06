//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PFEventuallyQueue;

@interface PFAnalyticsController : NSObject
{
    id <PFEventuallyQueueProvider> _dataSource;
}

+ (id)controllerWithDataSource:(id)arg1;
@property(readonly, nonatomic) __weak id <PFEventuallyQueueProvider> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak PFEventuallyQueue *eventuallyQueue;
- (id)trackEventAsyncWithName:(id)arg1 dimensions:(id)arg2 sessionToken:(id)arg3;
- (id)trackAppOpenedEventAsyncWithRemoteNotificationPayload:(id)arg1 sessionToken:(id)arg2;
- (id)initWithDataSource:(id)arg1;
- (id)init;

@end

