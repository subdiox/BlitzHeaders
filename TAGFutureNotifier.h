/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>
#import "TAGContainerOpenerNotifier.h"

@class TAGContainerFutureImpl;

__attribute__((visibility("hidden")))
@interface TAGFutureNotifier : NSObject <TAGContainerOpenerNotifier> {
	TAGContainerFutureImpl* _future;
}
@property(retain) TAGContainerFutureImpl* future;
-(void).cxx_destruct;
-(void)containerAvailable:(id)available;
@end
