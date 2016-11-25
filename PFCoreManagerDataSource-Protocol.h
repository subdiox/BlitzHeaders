//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PFCommandRunnerProvider.h"
#import "PFFileManagerProvider.h"
#import "PFInstallationIdentifierStoreProvider.h"
#import "PFKeyValueCacheProvider.h"
#import "PFKeychainStoreProvider.h"
#import "PFOfflineStoreProvider.h"

@class PFInstallationIdentifierStore;

@protocol PFCoreManagerDataSource <PFCommandRunnerProvider, PFKeychainStoreProvider, PFFileManagerProvider, PFOfflineStoreProvider, PFKeyValueCacheProvider, PFInstallationIdentifierStoreProvider>
@property(readonly, nonatomic) PFInstallationIdentifierStore *installationIdentifierStore;
@end
