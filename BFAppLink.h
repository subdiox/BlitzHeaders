/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@class NSArray, NSURL;

@interface BFAppLink : NSObject {
	BOOL _backToReferrer;
	NSURL* _sourceURL;
	NSArray* _targets;
	NSURL* _webURL;
}
@property(assign, nonatomic, getter=isBackToReferrer) BOOL backToReferrer;
@property(retain, nonatomic) NSURL* webURL;
@property(copy, nonatomic) NSArray* targets;
@property(retain, nonatomic) NSURL* sourceURL;
+(id)appLinkWithSourceURL:(id)sourceURL targets:(id)targets webURL:(id)url;
+(id)appLinkWithSourceURL:(id)sourceURL targets:(id)targets webURL:(id)url isBackToReferrer:(BOOL)referrer;
-(void).cxx_destruct;
-(id)initWithIsBackToReferrer:(BOOL)referrer;
@end
