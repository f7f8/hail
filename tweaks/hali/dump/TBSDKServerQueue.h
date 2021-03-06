//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSRecursiveLock;

@interface TBSDKServerQueue : NSObject
{
    NSMutableArray *_requestArray;	// 8 = 0x8
    NSRecursiveLock *_lock;	// 16 = 0x10
}

+ (id)shareInstance;	// IMP=0x00000001013898fc
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableArray *requestArray; // @synthesize requestArray=_requestArray;
- (void).cxx_destruct;	// IMP=0x0000000101389ecc
- (void)cancelServers:(id)arg1;	// IMP=0x0000000101389d30
- (void)cancelRequestNetworkAndClearDelegateForDelegate:(id)arg1;	// IMP=0x0000000101389ba0
- (id)getRequestForDelegate:(id)arg1;	// IMP=0x0000000101389b8c
- (void)removeRequest:(id)arg1;	// IMP=0x0000000101389af8
- (void)addRequest:(id)arg1;	// IMP=0x0000000101389a20
- (void)dealloc;	// IMP=0x00000001013898c4

@end

