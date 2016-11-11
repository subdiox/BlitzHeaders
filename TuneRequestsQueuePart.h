/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>
#import "NSXMLParserDelegate.h"

@class NSString, NSMutableArray;

@interface TuneRequestsQueuePart : NSObject <NSXMLParserDelegate> {
	NSMutableArray* requests_;
	NSString* fileName_;
	NSString* filePathName_;
	NSString* parentFolder_;
	int index_;
	BOOL modified_;
	BOOL loaded_;
	BOOL shouldLoadOnRequest_;
	unsigned loadedRequestsCount_;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) unsigned loadedRequestsCount;
@property(assign, nonatomic) BOOL loaded;
@property(retain, nonatomic) NSMutableArray* requests;
@property(assign, nonatomic, getter=isModified) BOOL modified;
@property(assign, nonatomic) int index;
@property(assign, nonatomic) BOOL shouldLoadOnRequest;
@property(assign, nonatomic) unsigned queuedRequestsCount;
@property(readonly, assign) BOOL empty;
@property(readonly, assign) BOOL requestsLimitReached;
@property(copy, nonatomic) NSString* parentFolder;
@property(copy, nonatomic) NSString* filePathName;
@property(copy, nonatomic) NSString* fileName;
+(id)partWithIndex:(int)index parentFolder:(id)folder;
-(void).cxx_destruct;
-(void)parser:(id)parser didStartElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name attributes:(id)attributes;
-(int)indexComparator:(id)comparator;
-(id)generateFileName;
-(void)save;
-(id)serialize;
-(BOOL)load;
-(id)pop;
-(BOOL)pushToHead:(id)head;
-(BOOL)push:(id)push;
-(id)initWithIndex:(int)index parentFolder:(id)folder;
@end
