/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSSecureCoding.h"
#import "NSCopying.h"
#import <Foundation/NSOperation.h>
#import "NSURLConnectionDelegate.h"
#import "NSURLConnectionDataDelegate.h"
#import "wotblitz-Structs.h"

@class CBAFSecurityPolicy, NSRecursiveLock, NSSet, NSError, NSURLConnection, NSData, NSDictionary, NSOutputStream, NSURLRequest, NSURLResponse, NSURLCredential, NSInputStream, NSString;

@interface CBAFURLConnectionOperation : NSOperation <NSURLConnectionDelegate, NSURLConnectionDataDelegate, NSSecureCoding, NSCopying> {
	BOOL _shouldUseCredentialStorage;
	NSOutputStream* _outputStream;
	NSSet* _runLoopModes;
	NSURLRequest* _request;
	NSURLResponse* _response;
	NSError* _error;
	NSData* _responseData;
	NSString* _responseString;
	unsigned _responseStringEncoding;
	NSURLCredential* _credential;
	CBAFSecurityPolicy* _securityPolicy;
	dispatch_queue_s* _completionQueue;
	dispatch_group_s* _completionGroup;
	NSDictionary* _userInfo;
	int _state;
	NSRecursiveLock* _lock;
	NSURLConnection* _connection;
	unsigned _backgroundTaskIdentifier;
	id _uploadProgress;
	id _downloadProgress;
	id _authenticationChallenge;
	id _cacheResponse;
	id _redirectResponse;
	long long _totalBytesRead;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(copy, nonatomic) id redirectResponse;
@property(copy, nonatomic) id cacheResponse;
@property(copy, nonatomic) id authenticationChallenge;
@property(copy, nonatomic) id downloadProgress;
@property(copy, nonatomic) id uploadProgress;
@property(assign, nonatomic) unsigned backgroundTaskIdentifier;
@property(assign, nonatomic) long long totalBytesRead;
@property(retain, nonatomic) NSURLConnection* connection;
@property(retain, nonatomic) NSRecursiveLock* lock;
@property(assign, nonatomic) int state;
@property(retain, nonatomic) NSDictionary* userInfo;
@property(assign, nonatomic) dispatch_group_s* completionGroup;
@property(assign, nonatomic) dispatch_queue_s* completionQueue;
@property(retain, nonatomic) NSOutputStream* outputStream;
@property(retain, nonatomic) NSInputStream* inputStream;
@property(retain, nonatomic) CBAFSecurityPolicy* securityPolicy;
@property(retain, nonatomic) NSURLCredential* credential;
@property(assign, nonatomic) BOOL shouldUseCredentialStorage;
@property(assign, nonatomic) unsigned responseStringEncoding;
@property(copy, nonatomic) NSString* responseString;
@property(retain, nonatomic) NSData* responseData;
@property(retain, nonatomic) NSError* error;
@property(retain, nonatomic) NSURLResponse* response;
@property(retain, nonatomic) NSURLRequest* request;
@property(retain, nonatomic) NSSet* runLoopModes;
+(BOOL)supportsSecureCoding;
+(id)batchOfRequestOperations:(id)requestOperations progressBlock:(id)block completionBlock:(id)block3;
+(id)networkRequestThread;
+(void)networkRequestThreadEntryPoint:(id)point;
-(void).cxx_destruct;
-(id)copyWithZone:(NSZone*)zone;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(id)connection:(id)connection willCacheResponse:(id)response;
-(void)connection:(id)connection didFailWithError:(id)error;
-(void)connectionDidFinishLoading:(id)connection;
-(void)connection:(id)connection didReceiveData:(id)data;
-(void)connection:(id)connection didReceiveResponse:(id)response;
-(void)connection:(id)connection didSendBodyData:(int)data totalBytesWritten:(int)written totalBytesExpectedToWrite:(int)write;
-(id)connection:(id)connection willSendRequest:(id)request redirectResponse:(id)response;
-(BOOL)connectionShouldUseCredentialStorage:(id)connection;
-(void)connection:(id)connection willSendRequestForAuthenticationChallenge:(id)authenticationChallenge;
-(void)cancelConnection;
-(void)cancel;
-(void)finish;
-(void)operationDidStart;
-(void)start;
-(BOOL)isConcurrent;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isReady;
-(void)setCompletionBlock:(id)block;
-(void)setRedirectResponseBlock:(id)block;
-(void)setCacheResponseBlock:(id)block;
-(void)setWillSendRequestForAuthenticationChallengeBlock:(id)sendRequestForAuthenticationChallengeBlock;
-(void)setDownloadProgressBlock:(id)block;
-(void)setUploadProgressBlock:(id)block;
-(void)resume;
-(BOOL)isPaused;
-(void)operationDidPause;
-(void)pause;
-(void)setShouldExecuteAsBackgroundTaskWithExpirationHandler:(id)executeAsBackgroundTaskWithExpirationHandler;
-(void)dealloc;
-(id)initWithRequest:(id)request;
-(id)init;
@end
