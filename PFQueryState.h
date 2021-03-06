//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PFBaseState.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "PFBaseStateSubclass.h"

@class NSArray, NSDictionary, NSSet, NSString;

@interface PFQueryState : PFBaseState <PFBaseStateSubclass, NSCopying, NSMutableCopying>
{
    NSString *_parseClassName;
    NSDictionary *_conditions;
    NSArray *_sortKeys;
    NSSet *_includedKeys;
    NSSet *_selectedKeys;
    NSDictionary *_extraOptions;
    long long _limit;
    long long _skip;
    unsigned char _cachePolicy;
    double _maxCacheAge;
    _Bool _trace;
    _Bool _shouldIgnoreACLs;
    _Bool _shouldIncludeDeletingEventually;
    _Bool _queriesLocalDatastore;
    NSString *_localDatastorePinName;
}

+ (id)stateWithState:(id)arg1;
+ (id)propertyAttributes;
@property(copy, nonatomic) NSString *localDatastorePinName; // @synthesize localDatastorePinName=_localDatastorePinName;
@property(nonatomic) _Bool queriesLocalDatastore; // @synthesize queriesLocalDatastore=_queriesLocalDatastore;
@property(nonatomic) _Bool shouldIncludeDeletingEventually; // @synthesize shouldIncludeDeletingEventually=_shouldIncludeDeletingEventually;
@property(nonatomic) _Bool shouldIgnoreACLs; // @synthesize shouldIgnoreACLs=_shouldIgnoreACLs;
@property(nonatomic) _Bool trace; // @synthesize trace=_trace;
@property(nonatomic) double maxCacheAge; // @synthesize maxCacheAge=_maxCacheAge;
@property(nonatomic) unsigned char cachePolicy; // @synthesize cachePolicy=_cachePolicy;
@property(nonatomic) long long skip; // @synthesize skip=_skip;
@property(nonatomic) long long limit; // @synthesize limit=_limit;
@property(readonly, copy, nonatomic) NSDictionary *extraOptions; // @synthesize extraOptions=_extraOptions;
@property(readonly, copy, nonatomic) NSSet *selectedKeys; // @synthesize selectedKeys=_selectedKeys;
@property(readonly, copy, nonatomic) NSSet *includedKeys; // @synthesize includedKeys=_includedKeys;
@property(readonly, copy, nonatomic) NSArray *sortKeys; // @synthesize sortKeys=_sortKeys;
@property(readonly, copy, nonatomic) NSDictionary *conditions; // @synthesize conditions=_conditions;
@property(copy, nonatomic) NSString *parseClassName; // @synthesize parseClassName=_parseClassName;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *sortOrderString;
- (id)initWithState:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

