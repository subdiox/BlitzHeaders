//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface PFConfig : NSObject
{
    NSDictionary *_parametersDictionary;
}

+ (void)getConfigInBackgroundWithBlock:(CDUnknownBlockType)arg1;
+ (id)getConfigInBackground;
+ (id)getConfig:(id *)arg1;
+ (id)getConfig;
+ (id)currentConfig;
+ (id)_configController;
@property(copy) NSDictionary *parametersDictionary; // @synthesize parametersDictionary=_parametersDictionary;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)initWithFetchedConfig:(id)arg1;

@end

