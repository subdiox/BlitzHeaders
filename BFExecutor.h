/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>


@interface BFExecutor : NSObject {
	id _block;
}
@property(copy, nonatomic) id block;
+(id)executorWithOperationQueue:(id)operationQueue;
+(id)executorWithDispatchQueue:(id)dispatchQueue;
+(id)executorWithBlock:(id)block;
+(id)mainThreadExecutor;
+(id)immediateExecutor;
+(id)defaultExecutor;
+(id)defaultPriorityBackgroundExecutor;
-(void).cxx_destruct;
-(void)execute:(id)execute;
-(id)initWithBlock:(id)block;
@end
