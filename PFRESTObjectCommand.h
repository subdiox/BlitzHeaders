//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PFRESTCommand.h"

@interface PFRESTObjectCommand : PFRESTCommand
{
}

+ (id)deleteObjectCommandForObjectState:(id)arg1 withSessionToken:(id)arg2;
+ (id)updateObjectCommandForObjectState:(id)arg1 changes:(id)arg2 operationSetUUID:(id)arg3 sessionToken:(id)arg4;
+ (id)createObjectCommandForObjectState:(id)arg1 changes:(id)arg2 operationSetUUID:(id)arg3 sessionToken:(id)arg4;
+ (id)fetchObjectCommandForObjectState:(id)arg1 withSessionToken:(id)arg2;

@end

