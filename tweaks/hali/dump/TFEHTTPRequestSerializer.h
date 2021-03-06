//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TFEURLRequestSerialization.h"

@class NSDictionary, NSMutableDictionary, NSSet, NSString;

@interface TFEHTTPRequestSerializer : NSObject <TFEURLRequestSerialization>
{
    _Bool _allowsCellularAccess;	// 8 = 0x8
    _Bool _HTTPShouldHandleCookies;	// 9 = 0x9
    _Bool _HTTPShouldUsePipelining;	// 10 = 0xa
    unsigned long long _stringEncoding;	// 16 = 0x10
    unsigned long long _cachePolicy;	// 24 = 0x18
    unsigned long long _networkServiceType;	// 32 = 0x20
    double _timeoutInterval;	// 40 = 0x28
    NSSet *_HTTPMethodsEncodingParametersInURI;	// 48 = 0x30
    NSMutableDictionary *_mutableHTTPRequestHeaders;	// 56 = 0x38
    unsigned long long _queryStringSerializationStyle;	// 64 = 0x40
    CDUnknownBlockType _queryStringSerialization;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000001010a275c
+ (id)serializer;	// IMP=0x00000001010a06fc
@property(copy, nonatomic) CDUnknownBlockType queryStringSerialization; // @synthesize queryStringSerialization=_queryStringSerialization;
@property(nonatomic) unsigned long long queryStringSerializationStyle; // @synthesize queryStringSerializationStyle=_queryStringSerializationStyle;
@property(retain, nonatomic) NSMutableDictionary *mutableHTTPRequestHeaders; // @synthesize mutableHTTPRequestHeaders=_mutableHTTPRequestHeaders;
@property(retain, nonatomic) NSSet *HTTPMethodsEncodingParametersInURI; // @synthesize HTTPMethodsEncodingParametersInURI=_HTTPMethodsEncodingParametersInURI;
@property(nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
@property(nonatomic) unsigned long long networkServiceType; // @synthesize networkServiceType=_networkServiceType;
@property(nonatomic) _Bool HTTPShouldUsePipelining; // @synthesize HTTPShouldUsePipelining=_HTTPShouldUsePipelining;
@property(nonatomic) _Bool HTTPShouldHandleCookies; // @synthesize HTTPShouldHandleCookies=_HTTPShouldHandleCookies;
@property(nonatomic) unsigned long long cachePolicy; // @synthesize cachePolicy=_cachePolicy;
@property(nonatomic) _Bool allowsCellularAccess; // @synthesize allowsCellularAccess=_allowsCellularAccess;
@property(nonatomic) unsigned long long stringEncoding; // @synthesize stringEncoding=_stringEncoding;
- (void).cxx_destruct;	// IMP=0x00000001010a2c94
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001010a29e0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001010a28f8
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001010a2764
- (id)requestBySerializingRequest:(id)arg1 withParameters:(id)arg2 error:(id *)arg3;	// IMP=0x00000001010a2050
- (id)requestWithMultipartFormRequest:(id)arg1 writingStreamContentsToFile:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001010a1a74
- (id)multipartFormRequestWithMethod:(id)arg1 URLString:(id)arg2 parameters:(id)arg3 constructingBodyWithBlock:(CDUnknownBlockType)arg4 error:(id *)arg5;	// IMP=0x00000001010a15ac
- (id)multipartFormRequestWithMethod:(id)arg1 URLString:(id)arg2 parameters:(id)arg3 constructingBodyWithBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000001010a1508
- (id)requestWithMethod:(id)arg1 URLString:(id)arg2 parameters:(id)arg3 error:(id *)arg4;	// IMP=0x00000001010a12f8
- (id)requestWithMethod:(id)arg1 URLString:(id)arg2 parameters:(id)arg3;	// IMP=0x00000001010a1278
- (void)setQueryStringSerializationWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001010a126c
- (void)setQueryStringSerializationWithStyle:(unsigned long long)arg1;	// IMP=0x00000001010a1234
- (void)clearAuthorizationHeader;	// IMP=0x00000001010a11ec
- (void)setAuthorizationHeaderFieldWithToken:(id)arg1;	// IMP=0x00000001010a117c
- (void)setAuthorizationHeaderFieldWithUsername:(id)arg1 password:(id)arg2;	// IMP=0x00000001010a0eb4
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;	// IMP=0x00000001010a0e20
@property(readonly, nonatomic) NSDictionary *HTTPRequestHeaders;
- (id)init;	// IMP=0x00000001010a0724

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

