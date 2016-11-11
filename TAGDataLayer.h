/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@class NSArray, NSMutableDictionary, NSMutableSet, NSCondition, NSMutableArray, NSRecursiveLock, NSRegularExpression, NSDictionary;
@protocol TAGDataLayerPersistentStore;

__attribute__((visibility("hidden")))
@interface TAGDataLayer : NSObject {
	BOOL _persistentStoreLoaded;
	NSDictionary* _dataLayer;
	NSMutableSet* _listeners;
	NSMutableDictionary* _model;
	NSRecursiveLock* _pushLock;
	NSMutableArray* _updateQueue;
	int _pushDepth;
	id<TAGDataLayerPersistentStore> _persistentStore;
	NSCondition* _persistentStoreLoadingCondition;
	NSArray* _lifetimeKeyComponents;
	NSRegularExpression* _lifetimePattern;
}
@property(readonly, assign) NSRegularExpression* lifetimePattern;
@property(readonly, assign) NSArray* lifetimeKeyComponents;
@property(assign) BOOL persistentStoreLoaded;
@property(readonly, assign) NSCondition* persistentStoreLoadingCondition;
@property(readonly, assign) id<TAGDataLayerPersistentStore> persistentStore;
@property(assign) int pushDepth;
@property(retain) NSMutableArray* updateQueue;
@property(retain) NSRecursiveLock* pushLock;
@property(retain) NSMutableDictionary* model;
@property(retain) NSMutableSet* listeners;
@property(readonly, assign, nonatomic) NSDictionary* dataLayer;
+(void)initialize;
-(void).cxx_destruct;
-(id)expandKey:(id)key value:(id)value;
-(void)mergeList:(id)list intoList:(id)list2;
-(void)mergeMap:(id)map intoMap:(id)map2;
-(void)notifyListeners:(id)listeners;
-(void)unregisterListener:(id)listener;
-(void)registerListener:(id)listener;
-(void)processUpdate:(id)update;
-(id)parseLifetime:(id)lifetime;
-(id)getLifetimeObject:(id)object;
-(id)getLifetimeValue:(id)value;
-(void)flattenMapHelper:(id)helper keyPrefix:(id)prefix accum:(id)accum;
-(id)flattenMap:(id)map;
-(void)clearPersistentKeysWithPrefix:(id)prefix;
-(void)savePersistentlyIfNeeded:(id)needed;
-(void)processQueuedUpdates;
-(void)pushWithoutWaitingForSaved:(id)saved;
-(void)push:(id)push;
-(id)get:(id)get;
-(void)pushValue:(id)value forKey:(id)key;
-(void)onKeyValuesLoaded:(id)loaded;
-(void)loadSavedMaps;
-(id)init;
-(id)initWithPersistentStore:(id)persistentStore;
@end
