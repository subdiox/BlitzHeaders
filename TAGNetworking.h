//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperationQueue.h"

@class TAGNetReachability;

@interface TAGNetworking : NSOperationQueue
{
    _Bool _isReachable;
    TAGNetReachability *_reachability;
}

@property(retain, nonatomic) TAGNetReachability *reachability; // @synthesize reachability=_reachability;
@property(nonatomic) _Bool isReachable; // @synthesize isReachable=_isReachable;
- (void).cxx_destruct;
- (id)requestWithURL:(id)arg1;
- (id)sendURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end

