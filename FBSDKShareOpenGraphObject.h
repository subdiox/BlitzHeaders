/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "wotblitz-Structs.h"
#import "NSSecureCoding.h"
#import "FBSDKShareOpenGraphValueContainer.h"
#import "FBSDKCopying.h"

@class NSString;

@interface FBSDKShareOpenGraphObject : FBSDKShareOpenGraphValueContainer <FBSDKCopying, NSSecureCoding> {
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
+(id)objectWithProperties:(id)properties;
-(id)copyWithZone:(NSZone*)zone;
-(BOOL)isEqualToShareOpenGraphObject:(id)shareOpenGraphObject;
-(BOOL)isEqual:(id)equal;
@end
