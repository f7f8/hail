//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableURLRequest, NSString, NWPolicyResult;

@interface AmdcRequest : NSObject
{
    NSMutableURLRequest *_request;	// 8 = 0x8
    NWPolicyResult *_policy;	// 16 = 0x10
    NSString *_host;	// 24 = 0x18
}

@property(retain, nonatomic) NSString *host; // @synthesize host=_host;
@property(retain, nonatomic) NWPolicyResult *policy; // @synthesize policy=_policy;
@property(retain, nonatomic) NSMutableURLRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;	// IMP=0x00000001013d4d9c

@end

