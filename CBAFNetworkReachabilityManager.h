/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>
#import "wotblitz-Structs.h"


@interface CBAFNetworkReachabilityManager : NSObject {
	int _networkReachabilityStatus;
	SCNetworkReachabilityRef _networkReachability;
	unsigned _networkReachabilityAssociation;
	id _networkReachabilityStatusBlock;
}
@property(copy, nonatomic) id networkReachabilityStatusBlock;
@property(assign, nonatomic) unsigned networkReachabilityAssociation;
@property(assign, nonatomic) SCNetworkReachabilityRef networkReachability;
@property(readonly, assign, nonatomic, getter=isReachableViaWiFi) BOOL reachableViaWiFi;
@property(readonly, assign, nonatomic, getter=isReachableViaWWAN) BOOL reachableViaWWAN;
@property(readonly, assign, nonatomic, getter=isReachable) BOOL reachable;
@property(assign, nonatomic) int networkReachabilityStatus;
+(id)keyPathsForValuesAffectingValueForKey:(id)key;
+(id)managerForAddress:(const void*)address;
+(id)managerForDomain:(id)domain;
+(id)sharedManager;
-(void).cxx_destruct;
-(void)setReachabilityStatusChangeBlock:(id)block;
-(id)localizedNetworkReachabilityStatusString;
-(void)stopMonitoring;
-(void)startMonitoring;
-(void)dealloc;
-(id)initWithReachability:(SCNetworkReachabilityRef)reachability;
-(id)init;
@end
