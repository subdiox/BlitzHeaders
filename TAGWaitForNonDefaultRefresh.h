/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>
#import "TAGContainerCallback.h"

@class NSString, TAGContainerOpener;

__attribute__((visibility("hidden")))
@interface TAGWaitForNonDefaultRefresh : NSObject <TAGContainerCallback> {
	TAGContainerOpener* _containerOpener;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain) TAGContainerOpener* containerOpener;
-(void).cxx_destruct;
-(void)containerRefreshFailure:(id)failure failure:(int)failure2 refreshType:(int)type;
-(void)containerRefreshSuccess:(id)success refreshType:(int)type;
-(void)containerRefreshBegin:(id)begin refreshType:(int)type;
-(id)initWithContainerOpener:(id)containerOpener;
@end
