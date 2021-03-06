//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface TBSDKCacheObject : NSObject <NSCoding>
{
    _Bool _offline;	// 8 = 0x8
    int _maxAge;	// 12 = 0xc
    int _responseStatusCode;	// 16 = 0x10
    NSString *_version;	// 24 = 0x18
    NSString *_lastModified;	// 32 = 0x20
    NSString *_eTag;	// 40 = 0x28
    NSString *_header;	// 48 = 0x30
    NSString *_body;	// 56 = 0x38
    NSString *_mtopXEtag;	// 64 = 0x40
}

@property(retain, nonatomic) NSString *mtopXEtag; // @synthesize mtopXEtag=_mtopXEtag;
@property(nonatomic) int responseStatusCode; // @synthesize responseStatusCode=_responseStatusCode;
@property(retain, nonatomic) NSString *body; // @synthesize body=_body;
@property(retain, nonatomic) NSString *header; // @synthesize header=_header;
@property(nonatomic) _Bool offline; // @synthesize offline=_offline;
@property(nonatomic) int maxAge; // @synthesize maxAge=_maxAge;
@property(retain, nonatomic) NSString *eTag; // @synthesize eTag=_eTag;
@property(retain, nonatomic) NSString *lastModified; // @synthesize lastModified=_lastModified;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
- (void).cxx_destruct;	// IMP=0x0000000101d31d1c
- (_Bool)isExpired;	// IMP=0x0000000101d319ec
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000101d3177c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000101d31590

@end

