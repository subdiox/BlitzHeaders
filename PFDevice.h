//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PFDevice : NSObject
{
}

+ (id)currentDevice;
@property(readonly, nonatomic, getter=isJailbroken) _Bool jailbroken;
@property(readonly, copy, nonatomic) NSString *operatingSystemBuild;
@property(readonly, copy, nonatomic) NSString *operatingSystemVersion;
@property(readonly, copy, nonatomic) NSString *operatingSystemFullVersion;
@property(readonly, copy, nonatomic) NSString *detailedModel;

@end

