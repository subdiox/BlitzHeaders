//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface PFUserAuthenticationController : NSObject
{
    NSObject<OS_dispatch_queue> *_dataAccessQueue;
    NSMutableDictionary *_authenticationDelegates;
}

- (void).cxx_destruct;
- (id)logInUserAsyncWithAuthType:(id)arg1 authData:(id)arg2;
- (id)deauthenticateAsyncWithAuthType:(id)arg1;
- (id)restoreAuthenticationAsyncWithAuthData:(id)arg1 forAuthType:(id)arg2;
- (id)authenticationDelegateForAuthType:(id)arg1;
- (void)unregisterAuthenticationDelegateForAuthType:(id)arg1;
- (void)registerAuthenticationDelegate:(id)arg1 forAuthType:(id)arg2;
- (id)init;

@end

