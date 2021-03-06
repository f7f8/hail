//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLConnectionDataDelegate.h"

@class NSMutableData, NSString, NSURLConnection, NSURLResponse;

@interface FBSDKURLConnection : NSObject <NSURLConnectionDataDelegate>
{
    id <FBSDKURLConnectionDelegate> _delegate;	// 8 = 0x8
    NSURLConnection *_connection;	// 16 = 0x10
    NSMutableData *_data;	// 24 = 0x18
    CDUnknownBlockType _handler;	// 32 = 0x20
    NSURLResponse *_response;	// 40 = 0x28
    unsigned long long _requestStartTime;	// 48 = 0x30
    unsigned long long _loggerSerialNumber;	// 56 = 0x38
}

@property(readonly, nonatomic) unsigned long long loggerSerialNumber; // @synthesize loggerSerialNumber=_loggerSerialNumber;
@property(nonatomic) unsigned long long requestStartTime; // @synthesize requestStartTime=_requestStartTime;
@property(retain, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(retain, nonatomic) NSMutableData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) __weak id <FBSDKURLConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x00000001012716e4
- (void)setDelegateQueue:(id)arg1;	// IMP=0x00000001012715e0
- (void)start;	// IMP=0x00000001012715c8
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;	// IMP=0x000000010127153c
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;	// IMP=0x0000000101271534
- (void)connectionDidFinishLoading:(id)arg1;	// IMP=0x0000000101271424
- (void)connection:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000101271278
- (void)connection:(id)arg1 didReceiveData:(id)arg2;	// IMP=0x000000010127120c
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;	// IMP=0x00000001012711b0
- (void)cancel;	// IMP=0x0000000101271158
- (void)logMessage:(id)arg1;	// IMP=0x0000000101271110
- (void)invokeHandler:(CDUnknownBlockType)arg1 error:(id)arg2 response:(id)arg3 responseData:(id)arg4;	// IMP=0x0000000101271080
- (void)logAndInvokeHandler:(CDUnknownBlockType)arg1 response:(id)arg2 responseData:(id)arg3;	// IMP=0x0000000101270eb0
- (void)logAndInvokeHandler:(CDUnknownBlockType)arg1 error:(id)arg2;	// IMP=0x0000000101270d7c
- (id)init;	// IMP=0x0000000101270cc0
- (id)initWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000101270b50

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

