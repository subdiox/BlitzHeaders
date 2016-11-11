/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>
#import "UIAlertViewDelegate.h"

@class NSString, FBSDKErrorRecoveryAttempter, NSError, UIAlertView;
@protocol FBSDKGraphErrorRecoveryProcessorDelegate;

@interface FBSDKGraphErrorRecoveryProcessor : NSObject <UIAlertViewDelegate> {
	FBSDKErrorRecoveryAttempter* _recoveryAttempter;
	NSError* _error;
	UIAlertView* _alertView;
	id<FBSDKGraphErrorRecoveryProcessorDelegate> _delegate;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) id<FBSDKGraphErrorRecoveryProcessorDelegate> delegate;
-(void).cxx_destruct;
-(void)didPresentErrorWithRecovery:(BOOL)recovery contextInfo:(void*)info;
-(void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;
-(BOOL)processError:(id)error request:(id)request delegate:(id)delegate;
-(void)dealloc;
@end
