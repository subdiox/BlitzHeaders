//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CBPersistenceStore : NSObject
{
}

+ (id)namesOfFilesInDirectory:(id)arg1;
+ (id)loadObjectInDirectory:(id)arg1 withName:(id)arg2;
+ (void)deleteDirectory:(id)arg1;
+ (void)deleteFileInDirectory:(id)arg1 withName:(id)arg2;
+ (void)persistObject:(id)arg1 inDirectory:(id)arg2 withName:(id)arg3;
+ (void)persistDictionary:(id)arg1 inDirectory:(id)arg2 withName:(id)arg3;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)shared;
- (void)deleteItemsInDirectory:(id)arg1 biggerThan:(long long)arg2;
- (id)namesOfFilesInDirectory:(id)arg1;
- (id)cachePathInDirectory:(id)arg1 withName:(id)arg2;
- (void)deleteFileInDirectory:(id)arg1 withName:(id)arg2;
- (id)loadObjectInDirectory:(id)arg1 withName:(id)arg2;
- (id)createFileInDirectory:(id)arg1 withName:(id)arg2;
- (void)writeObjectToFile:(id)arg1 inDirectory:(id)arg2 withName:(id)arg3;
- (void)persistObject:(id)arg1 inDirectory:(id)arg2 withName:(id)arg3;
- (void)persistDictionary:(id)arg1 inDirectory:(id)arg2 withName:(id)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

