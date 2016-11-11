/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PFObjectState.h"

@class NSDate, NSString, NSDictionary;

@interface PFMutableObjectState : PFObjectState {
}
@property(assign, nonatomic, getter=isDeleted) BOOL deleted;
@property(assign, nonatomic, getter=isComplete) BOOL complete;
@property(copy, nonatomic) NSDictionary* serverData;
@property(retain, nonatomic) NSDate* updatedAt;
@property(retain, nonatomic) NSDate* createdAt;
@property(copy, nonatomic) NSString* objectId;
@property(copy, nonatomic) NSString* parseClassName;
-(void)applyOperationSet:(id)set;
-(void)applyState:(id)state;
-(void)setUpdatedAtFromString:(id)string;
-(void)setCreatedAtFromString:(id)string;
-(void)removeServerDataObjectsForKeys:(id)keys;
-(void)removeServerDataObjectForKey:(id)key;
-(void)setServerDataObject:(id)object forKey:(id)key;
@end
