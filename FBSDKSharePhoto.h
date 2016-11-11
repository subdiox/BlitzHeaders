/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>
#import "wotblitz-Structs.h"
#import "NSSecureCoding.h"
#import "FBSDKCopying.h"

@class NSString, UIImage, NSURL;

@interface FBSDKSharePhoto : NSObject <FBSDKCopying, NSSecureCoding> {
	BOOL _userGenerated;
	UIImage* _image;
	NSURL* _imageURL;
	NSString* _caption;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(copy, nonatomic) NSString* caption;
@property(assign, nonatomic, getter=isUserGenerated) BOOL userGenerated;
@property(copy, nonatomic) NSURL* imageURL;
@property(retain, nonatomic) UIImage* image;
+(BOOL)supportsSecureCoding;
+(id)photoWithImageURL:(id)imageURL userGenerated:(BOOL)generated;
+(id)photoWithImage:(id)image userGenerated:(BOOL)generated;
-(void).cxx_destruct;
-(id)copyWithZone:(NSZone*)zone;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(BOOL)isEqualToSharePhoto:(id)sharePhoto;
-(BOOL)isEqual:(id)equal;
@end
