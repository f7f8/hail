//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSLock;

@interface TRDThreadSaveBuffer : NSObject
{
    long long _curLogLevel;	// 8 = 0x8
    long long _curRealtimeCount;	// 16 = 0x10
    NSLock *_curRealtimeLock;	// 24 = 0x18
    long long _curLogCount;	// 32 = 0x20
    NSDictionary *_curModule;	// 40 = 0x28
    NSLock *_moduleLock;	// 48 = 0x30
}

+ (id)shareInstance;	// IMP=0x0000000101a17a04
- (void).cxx_destruct;	// IMP=0x0000000101a17edc
- (void)clearSendLock;	// IMP=0x0000000101a17e68
- (void)unlockSend;	// IMP=0x0000000101a17dec
- (_Bool)lockSend;	// IMP=0x0000000101a17d58
- (void)setLogCount:(long long)arg1;	// IMP=0x0000000101a17d48
- (long long)logCount;	// IMP=0x0000000101a17d38
- (void)addLogCount;	// IMP=0x0000000101a17d20
- (long long)getCurrentLogLevel;	// IMP=0x0000000101a17d10
- (void)setCurrentLogLevel:(long long)arg1;	// IMP=0x0000000101a17d00
- (long long)getCurrentModuleLevel:(id)arg1 andCurLevel:(long long)arg2;	// IMP=0x0000000101a17c4c
- (void)setCurrentModule:(id)arg1;	// IMP=0x0000000101a17bac
- (id)init;	// IMP=0x0000000101a17ab8

@end

