/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@class NSString, NSMutableDictionary, NSError;

@interface FBSDKLoginManagerLogger : NSObject {
	NSString* _identifier;
	NSMutableDictionary* _extras;
	NSString* _lastResult;
	NSError* _lastError;
	NSString* _authMethod;
}
+(id)loggerFromParameters:(id)parameters;
-(void).cxx_destruct;
-(void)logEvent:(id)event result:(id)result error:(id)error;
-(void)logEvent:(id)event params:(id)params;
-(id)_parametersForNewEvent;
-(id)clientStateForAuthMethod:(id)authMethod andExistingState:(id)state;
-(void)systemAuthDidShowDialog:(BOOL)systemAuth isUnTOSedDevice:(BOOL)device;
-(void)willAttemptAppSwitchingBehavior;
-(id)parametersWithTimeStampAndClientState:(id)timeStampAndClientState forAuthMethod:(id)authMethod;
-(void)endLoginWithResult:(id)result error:(id)error;
-(void)startAuthMethod:(id)method;
-(void)endSession;
-(void)startSessionForLoginManager:(id)loginManager;
-(id)init;
@end
