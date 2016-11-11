/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>


@interface FBSDKServerConfigurationManager : NSObject {
}
+(id)_wrapperBlockForLoadBlock:(id)loadBlock;
+(BOOL)_serverConfigurationTimestampIsValid:(id)valid;
+(id)_parseDialogConfigurations:(id)configurations;
+(void)_didProcessConfigurationFromNetwork:(id)network appID:(id)anId error:(id)error;
+(id)_defaultServerConfigurationForAppID:(id)appID;
+(id)requestToLoadServerConfiguration:(id)loadServerConfiguration;
+(void)processLoadRequestResponse:(id)response error:(id)error appID:(id)anId;
+(void)loadServerConfigurationWithCompletionBlock:(id)completionBlock;
+(id)cachedServerConfiguration;
+(void)initialize;
-(id)init;
@end
