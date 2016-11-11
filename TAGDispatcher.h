/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "TAGHitSender.h"
#import </libobjc.A.h>

@class NSString, NSMutableSet, TAGNetworking, TAGRateLimiter, TAGDataProvider, NSTimer;
@protocol TAGLogger;

__attribute__((visibility("hidden")))
@interface TAGDispatcher : NSObject <TAGHitSender> {
	TAGDataProvider* _store;
	TAGNetworking* _network;
	NSString* _wrapperUrl;
	NSString* _wrapperQueryParameter;
	id<TAGLogger> _logger;
	TAGRateLimiter* _rateLimiter;
	NSMutableSet* _operations;
	NSTimer* _timer;
	unsigned _maxRequestsPerDispatch;
	double _dispatchInterval;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) unsigned maxRequestsPerDispatch;
@property(retain, nonatomic) NSTimer* timer;
@property(retain, nonatomic) NSMutableSet* operations;
@property(retain, nonatomic) TAGRateLimiter* rateLimiter;
@property(readonly, assign, nonatomic) BOOL canScheduleDispatch;
@property(readonly, assign, nonatomic) BOOL canDispatch;
@property(assign, nonatomic) double dispatchInterval;
@property(assign, nonatomic) __weak id<TAGLogger> logger;
@property(retain, nonatomic) NSString* wrapperQueryParameter;
@property(retain, nonatomic) NSString* wrapperUrl;
@property(retain, nonatomic) TAGNetworking* network;
@property(retain, nonatomic) TAGDataProvider* store;
+(id)keyPathsForValuesAffectingCanDispatch;
+(id)keyPathsForValuesAffectingCanScheduleDispatch;
+(void)initialize;
+(id)instance;
-(void).cxx_destruct;
-(double)timerInterval;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(void)sendHitToUrl:(id)url;
-(void)dispatchWithCallback:(id)callback;
-(oneway void)dispatch;
-(void)startTimer;
-(void)cancelTimer;
-(void)timerFired;
-(oneway void)rescheduleDispatch;
-(void)initialDispatch;
-(void)dealloc;
-(id)init;
@end
