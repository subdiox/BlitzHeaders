//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PFBaseState.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "PFBaseStateSubclass.h"

@class NSString;

@interface PFFileState : PFBaseState <PFBaseStateSubclass, NSCopying, NSMutableCopying>
{
    NSString *_name;
    NSString *_urlString;
    NSString *_secureURLString;
    NSString *_mimeType;
}

+ (id)propertyAttributes;
@property(copy, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(copy, nonatomic) NSString *secureURLString; // @synthesize secureURLString=_secureURLString;
@property(copy, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 urlString:(id)arg2 mimeType:(id)arg3;
- (id)initWithState:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

