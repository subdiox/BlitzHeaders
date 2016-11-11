/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>
#import "FBSDKBridgeAPIProtocol.h"

@class NSString, FBSDKBridgeAPIProtocolNativeV1;

@interface FBSDKBridgeAPIProtocolWebV2 : NSObject <FBSDKBridgeAPIProtocol> {
	FBSDKBridgeAPIProtocolNativeV1* _nativeProtocol;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(id)responseParametersForActionID:(id)actionID queryParameters:(id)parameters cancelled:(BOOL*)cancelled error:(id*)error;
-(id)requestURLWithActionID:(id)actionID scheme:(id)scheme methodName:(id)name methodVersion:(id)version parameters:(id)parameters error:(id*)error;
-(id)_requestURLForDialogConfiguration:(id)dialogConfiguration error:(id*)error;
-(id)_redirectURLWithActionID:(id)actionID methodName:(id)name error:(id*)error;
-(id)init;
@end
