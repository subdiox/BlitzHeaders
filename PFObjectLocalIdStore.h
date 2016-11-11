/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@class NSString, NSMutableDictionary;
@protocol PFFileManagerProvider;

@interface PFObjectLocalIdStore : NSObject {
	NSString* _diskPath;
	NSObject* _lock;
	NSMutableDictionary* _inMemoryCache;
	id<PFFileManagerProvider> _dataSource;
}
@property(readonly, assign, nonatomic) __weak id<PFFileManagerProvider> dataSource;
+(BOOL)isLocalId:(id)anId;
+(id)storeWithDataSource:(id)dataSource;
-(void).cxx_destruct;
-(void)clearInMemoryCache;
-(BOOL)clear;
-(id)objectIdForLocalId:(id)localId;
-(void)setObjectId:(id)anId forLocalId:(id)localId;
-(void)releaseLocalIdOnDisk:(id)disk;
-(void)retainLocalIdOnDisk:(id)disk;
-(id)createLocalId;
-(void)removeMapEntry:(id)entry;
-(void)putMapEntry:(id)entry forLocalId:(id)localId;
-(id)getMapEntry:(id)entry;
-(id)initWithDataSource:(id)dataSource;
-(id)init;
@end
