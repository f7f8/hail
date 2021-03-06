//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TFEUTSessionID : NSObject
{
    Class _utDeviceClasz;	// 8 = 0x8
    unsigned long long _seq;	// 16 = 0x10
    NSString *_random;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x0000000101084e3c
@property(retain) NSString *random; // @synthesize random=_random;
@property unsigned long long seq; // @synthesize seq=_seq;
@property(retain) Class utDeviceClasz; // @synthesize utDeviceClasz=_utDeviceClasz;
- (void).cxx_destruct;	// IMP=0x0000000101085340
- (int)getRandomNumber:(int)arg1 to:(int)arg2;	// IMP=0x00000001010852ac
- (id)getUTDID;	// IMP=0x0000000101085258
- (id)init;	// IMP=0x0000000101085140
- (id)getDeviceId;	// IMP=0x0000000101084fe8
- (id)getSessionId;	// IMP=0x0000000101084f24
- (unsigned long long)getSequence;	// IMP=0x0000000101084ee4

@end

