/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>
#import "TAGContainerFuture.h"

@class TAGContainer;

__attribute__((visibility("hidden")))
@interface TAGContainerFutureImpl : NSObject <TAGContainerFuture> {
	TAGContainer* _container;
}
@property(retain) TAGContainer* container;
-(void).cxx_destruct;
-(BOOL)isDone;
-(id)get;
@end
