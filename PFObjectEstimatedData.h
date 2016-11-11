/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@class NSArray, NSMutableDictionary, NSDictionary;

@interface PFObjectEstimatedData : NSObject {
	NSMutableDictionary* _dataDictionary;
}
@property(readonly, copy, nonatomic) NSDictionary* dictionaryRepresentation;
@property(readonly, copy, nonatomic) NSArray* allKeys;
+(id)estimatedDataFromServerData:(id)serverData operationSetQueue:(id)queue;
-(void).cxx_destruct;
-(id)applyFieldOperation:(id)operation forKey:(id)key;
-(id)objectForKeyedSubscript:(id)keyedSubscript;
-(id)objectForKey:(id)key;
-(void)enumerateKeysAndObjectsUsingBlock:(id)block;
-(id)initWithServerData:(id)serverData operationSetQueue:(id)queue;
-(id)init;
@end
