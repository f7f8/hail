//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NWBaseConnection.h"

@class NSURLConnection, NSURLSessionDataTask, NWCFHttpRequest, NWPolicyResult;

@interface NWHttpConnection : NWBaseConnection
{
    _Bool _isRetriedByDomain;	// 8 = 0x8
    int _reqType;	// 12 = 0xc
    NWCFHttpRequest *_cfHttpConnection;	// 16 = 0x10
    NSURLSessionDataTask *_nsSessionTask;	// 24 = 0x18
    NSURLConnection *_nsConnection;	// 32 = 0x20
    NWPolicyResult *_policy;	// 40 = 0x28
}

+ (id)httpSessionDemux;	// IMP=0x0000000101397cd8
@property(nonatomic) _Bool isRetriedByDomain; // @synthesize isRetriedByDomain=_isRetriedByDomain;
@property(nonatomic) int reqType; // @synthesize reqType=_reqType;
@property(retain, nonatomic) NWPolicyResult *policy; // @synthesize policy=_policy;
@property(retain, nonatomic) NSURLConnection *nsConnection; // @synthesize nsConnection=_nsConnection;
@property(retain, nonatomic) NSURLSessionDataTask *nsSessionTask; // @synthesize nsSessionTask=_nsSessionTask;
@property(retain, nonatomic) NWCFHttpRequest *cfHttpConnection; // @synthesize cfHttpConnection=_cfHttpConnection;
- (void).cxx_destruct;	// IMP=0x0000000101399334
- (void)probeSSLError:(id)arg1;	// IMP=0x0000000101399108
- (id)queryPolicy:(id)arg1 withScheme:(id)arg2;	// IMP=0x0000000101398d54
- (_Bool)hasSuffix:(id)arg1;	// IMP=0x0000000101398ac8
- (void)writeCookies:(id)arg1 withRequest:(id)arg2 withDomain:(id)arg3;	// IMP=0x00000001013986e0
- (id)cookie:(id)arg1;	// IMP=0x00000001013984a4
- (void)updateRequest:(id)arg1 withPolicy:(id)arg2;	// IMP=0x0000000101397e04
- (void)sendBySession;	// IMP=0x0000000101397b60
- (void)sendByConnection;	// IMP=0x0000000101397904
- (void)sendHttpRequest;	// IMP=0x0000000101397758
- (void)request:(id)arg1 didReceiveData:(id)arg2;	// IMP=0x0000000101397558
- (void)requestFailed:(id)arg1;	// IMP=0x00000001013971e4
- (void)requestFinished:(id)arg1;	// IMP=0x0000000101396e78
- (void)request:(id)arg1 willRedirectToURL:(id)arg2 response:(id)arg3;	// IMP=0x0000000101396a04
- (void)request:(id)arg1 didReceiveResponse:(id)arg2;	// IMP=0x0000000101396774
- (void)onRedirect2Http:(id)arg1;	// IMP=0x00000001013963c4
- (void)dispatch2Proxy;	// IMP=0x0000000101395eec
- (_Bool)filterAtsHttpsDetectingError:(id)arg1;	// IMP=0x0000000101395a84
- (void)dispatch2Https;	// IMP=0x000000010139584c
- (void)dispatch2Forbidden;	// IMP=0x00000001013955e4
- (void)dispatch2Cfnetwork;	// IMP=0x0000000101394f48
- (void)onAtsProcess:(id)arg1;	// IMP=0x0000000101394afc
- (void)cancel;	// IMP=0x0000000101394a84
- (void)start;	// IMP=0x0000000101393fbc
- (id)initWithRequest:(id)arg1;	// IMP=0x0000000101393f54
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001013a4f8c
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;	// IMP=0x00000001013a4f2c
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000001013a4994
- (void)URLSessionDidFinishLoading;	// IMP=0x00000001013a4440
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x00000001013a388c
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;	// IMP=0x00000001013a368c
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001013a3114
- (void)connection:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;	// IMP=0x00000001013c81c0
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;	// IMP=0x00000001013c803c
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;	// IMP=0x00000001013c7fdc
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;	// IMP=0x00000001013c7a40
- (void)connectionDidFinishLoading:(id)arg1;	// IMP=0x00000001013c756c
- (void)connection:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00000001013c69f0
- (void)connection:(id)arg1 didReceiveData:(id)arg2;	// IMP=0x00000001013c67f0
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;	// IMP=0x00000001013c632c

@end

