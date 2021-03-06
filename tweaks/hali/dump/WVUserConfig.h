//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WVUserConfig : NSObject
{
    _Bool _useSafeSecert;	// 8 = 0x8
    NSString *_ttid;	// 16 = 0x10
    NSString *_deviceID;	// 24 = 0x18
    NSString *_appSecrect;	// 32 = 0x20
    NSString *_sid;	// 40 = 0x28
    NSString *_eCode;	// 48 = 0x30
    NSString *_nickName;	// 56 = 0x38
}

+ (unsigned long long)environment;	// IMP=0x0000000101b82310
+ (void)setEnvironment:(unsigned long long)arg1;	// IMP=0x0000000101b822fc
+ (_Bool)isValidAppKey;	// IMP=0x0000000101b822e8
+ (id)appKey;	// IMP=0x0000000101b822d4
+ (void)setNickName:(id)arg1;	// IMP=0x0000000101b82268
+ (id)nickName;	// IMP=0x0000000101b82214
+ (void)setEcode:(id)arg1;	// IMP=0x0000000101b821a8
+ (id)eCode;	// IMP=0x0000000101b82154
+ (void)setSid:(id)arg1;	// IMP=0x0000000101b820e8
+ (id)sid;	// IMP=0x0000000101b82094
+ (id)appSecrect;	// IMP=0x0000000101b82040
+ (void)setAppKey:(id)arg1 secrect:(id)arg2;	// IMP=0x0000000101b81f98
+ (void)setDeviceID:(id)arg1;	// IMP=0x0000000101b81f2c
+ (id)deviceID;	// IMP=0x0000000101b81ed8
+ (void)setTTid:(id)arg1;	// IMP=0x0000000101b81e5c
+ (id)ttid;	// IMP=0x0000000101b81e08
+ (id)appKeyFromSecurity;	// IMP=0x0000000101b81d20
+ (void)useSafeSecert:(_Bool)arg1;	// IMP=0x0000000101b81c84
+ (_Bool)isUseSafeSecert;	// IMP=0x0000000101b81c38
+ (id)sharedConfig;	// IMP=0x0000000101b81b50
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSString *eCode; // @synthesize eCode=_eCode;
@property(retain, nonatomic) NSString *sid; // @synthesize sid=_sid;
@property(retain, nonatomic) NSString *appSecrect; // @synthesize appSecrect=_appSecrect;
@property(retain, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(retain, nonatomic) NSString *ttid; // @synthesize ttid=_ttid;
@property(nonatomic) _Bool useSafeSecert; // @synthesize useSafeSecert=_useSafeSecert;
- (void).cxx_destruct;	// IMP=0x0000000101b824f4

@end

