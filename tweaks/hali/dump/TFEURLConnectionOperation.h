//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "NSURLConnectionDataDelegate.h"
#import "NSURLConnectionDelegate.h"

@class NSData, NSDictionary, NSError, NSInputStream, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSOutputStream, NSRecursiveLock, NSSet, NSString, NSURLConnection, NSURLCredential, NSURLRequest, NSURLResponse, TFESecurityPolicy;

@interface TFEURLConnectionOperation : NSOperation <NSURLConnectionDelegate, NSURLConnectionDataDelegate, NSSecureCoding, NSCopying>
{
    _Bool _shouldUseCredentialStorage;	// 24 = 0x18
    NSOutputStream *_outputStream;	// 32 = 0x20
    NSSet *_runLoopModes;	// 40 = 0x28
    NSURLRequest *_request;	// 48 = 0x30
    NSURLResponse *_response;	// 56 = 0x38
    NSError *_error;	// 64 = 0x40
    NSData *_responseData;	// 72 = 0x48
    NSString *_responseString;	// 80 = 0x50
    unsigned long long _responseStringEncoding;	// 88 = 0x58
    NSURLCredential *_credential;	// 96 = 0x60
    TFESecurityPolicy *_securityPolicy;	// 104 = 0x68
    NSObject<OS_dispatch_queue> *_completionQueue;	// 112 = 0x70
    NSObject<OS_dispatch_group> *_completionGroup;	// 120 = 0x78
    NSDictionary *_userInfo;	// 128 = 0x80
    long long _state;	// 136 = 0x88
    NSRecursiveLock *_lock;	// 144 = 0x90
    NSURLConnection *_connection;	// 152 = 0x98
    long long _totalBytesRead;	// 160 = 0xa0
    unsigned long long _backgroundTaskIdentifier;	// 168 = 0xa8
    CDUnknownBlockType _uploadProgress;	// 176 = 0xb0
    CDUnknownBlockType _downloadProgress;	// 184 = 0xb8
    CDUnknownBlockType _authenticationChallenge;	// 192 = 0xc0
    CDUnknownBlockType _cacheResponse;	// 200 = 0xc8
    CDUnknownBlockType _redirectResponse;	// 208 = 0xd0
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000001010b8bf0
+ (id)batchOfRequestOperations:(id)arg1 progressBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000001010b7458
+ (id)networkRequestThread;	// IMP=0x00000001010b52a4
+ (void)networkRequestThreadEntryPoint:(id)arg1;	// IMP=0x00000001010b51a8
@property(copy, nonatomic) CDUnknownBlockType redirectResponse; // @synthesize redirectResponse=_redirectResponse;
@property(copy, nonatomic) CDUnknownBlockType cacheResponse; // @synthesize cacheResponse=_cacheResponse;
@property(copy, nonatomic) CDUnknownBlockType authenticationChallenge; // @synthesize authenticationChallenge=_authenticationChallenge;
@property(copy, nonatomic) CDUnknownBlockType downloadProgress; // @synthesize downloadProgress=_downloadProgress;
@property(copy, nonatomic) CDUnknownBlockType uploadProgress; // @synthesize uploadProgress=_uploadProgress;
@property(nonatomic) unsigned long long backgroundTaskIdentifier; // @synthesize backgroundTaskIdentifier=_backgroundTaskIdentifier;
@property(nonatomic) long long totalBytesRead; // @synthesize totalBytesRead=_totalBytesRead;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *completionGroup; // @synthesize completionGroup=_completionGroup;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // @synthesize completionQueue=_completionQueue;
@property(retain, nonatomic) TFESecurityPolicy *securityPolicy; // @synthesize securityPolicy=_securityPolicy;
@property(retain, nonatomic) NSURLCredential *credential; // @synthesize credential=_credential;
@property(nonatomic) _Bool shouldUseCredentialStorage; // @synthesize shouldUseCredentialStorage=_shouldUseCredentialStorage;
@property(nonatomic) unsigned long long responseStringEncoding; // @synthesize responseStringEncoding=_responseStringEncoding;
@property(copy, nonatomic) NSString *responseString; // @synthesize responseString=_responseString;
@property(retain, nonatomic) NSData *responseData; // @synthesize responseData=_responseData;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSSet *runLoopModes; // @synthesize runLoopModes=_runLoopModes;
- (void).cxx_destruct;	// IMP=0x00000001010b9808
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001010b91b8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001010b8f2c
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001010b8bf8
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;	// IMP=0x00000001010b8b04
- (void)connection:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00000001010b8a50
- (void)connectionDidFinishLoading:(id)arg1;	// IMP=0x00000001010b8944
- (void)connection:(id)arg1 didReceiveData:(id)arg2;	// IMP=0x00000001010b85d8
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;	// IMP=0x00000001010b8580
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;	// IMP=0x00000001010b8464
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;	// IMP=0x00000001010b8378
- (_Bool)connectionShouldUseCredentialStorage:(id)arg1;	// IMP=0x00000001010b836c
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;	// IMP=0x00000001010b800c
@property(readonly, copy) NSString *description;
- (void)cancelConnection;	// IMP=0x00000001010b7258
- (void)cancel;	// IMP=0x00000001010b70d0
- (void)finish;	// IMP=0x00000001010b6f80
- (void)operationDidStart;	// IMP=0x00000001010b6bf0
- (void)start;	// IMP=0x00000001010b6a34
- (_Bool)isConcurrent;	// IMP=0x00000001010b6a2c
- (_Bool)isFinished;	// IMP=0x00000001010b6a08
- (_Bool)isExecuting;	// IMP=0x00000001010b69e4
- (_Bool)isReady;	// IMP=0x00000001010b6984
- (void)setCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001010b65a0
- (void)setRedirectResponseBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001010b6594
- (void)setCacheResponseBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001010b6588
- (void)setWillSendRequestForAuthenticationChallengeBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001010b657c
- (void)setDownloadProgressBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001010b6570
- (void)setUploadProgressBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001010b6564
- (void)resume;	// IMP=0x00000001010b64a4
- (_Bool)isPaused;	// IMP=0x00000001010b6480
- (void)operationDidPause;	// IMP=0x00000001010b63d8
- (void)pause;	// IMP=0x00000001010b6190
- (void)setShouldExecuteAsBackgroundTaskWithExpirationHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001010b5c50
@property(retain, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property(retain, nonatomic) NSInputStream *inputStream;
- (void)dealloc;	// IMP=0x00000001010b5544
- (id)initWithRequest:(id)arg1;	// IMP=0x00000001010b5388

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

