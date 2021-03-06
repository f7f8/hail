//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface TFEReachability : NSObject
{
    _Bool _reachableOnWWAN;	// 8 = 0x8
    CDUnknownBlockType _reachableBlock;	// 16 = 0x10
    CDUnknownBlockType _unreachableBlock;	// 24 = 0x18
    CDUnknownBlockType _reachabilityBlock;	// 32 = 0x20
    struct __SCNetworkReachability *_reachabilityRef;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_reachabilitySerialQueue;	// 48 = 0x30
    id _reachabilityObject;	// 56 = 0x38
}

+ (id)reachabilityForLocalWiFi;	// IMP=0x000000010108e438
+ (id)reachabilityForInternetConnection;	// IMP=0x000000010108e3d4
+ (id)reachabilityWithAddress:(void *)arg1;	// IMP=0x000000010108e374
+ (id)reachabilityWithHostname:(id)arg1;	// IMP=0x000000010108e2e8
+ (id)reachabilityWithHostName:(id)arg1;	// IMP=0x000000010108e2d4
@property(retain, nonatomic) id reachabilityObject; // @synthesize reachabilityObject=_reachabilityObject;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *reachabilitySerialQueue; // @synthesize reachabilitySerialQueue=_reachabilitySerialQueue;
@property(nonatomic) struct __SCNetworkReachability *reachabilityRef; // @synthesize reachabilityRef=_reachabilityRef;
@property(nonatomic) _Bool reachableOnWWAN; // @synthesize reachableOnWWAN=_reachableOnWWAN;
@property(copy, nonatomic) CDUnknownBlockType reachabilityBlock; // @synthesize reachabilityBlock=_reachabilityBlock;
@property(copy, nonatomic) CDUnknownBlockType unreachableBlock; // @synthesize unreachableBlock=_unreachableBlock;
@property(copy, nonatomic) CDUnknownBlockType reachableBlock; // @synthesize reachableBlock=_reachableBlock;
- (void).cxx_destruct;	// IMP=0x000000010108f030
- (id)description;	// IMP=0x000000010108ee84
- (void)reachabilityChanged:(unsigned int)arg1;	// IMP=0x000000010108eca4
- (id)currentReachabilityFlags;	// IMP=0x000000010108ebdc
- (id)currentReachabilityString;	// IMP=0x000000010108eae0
- (unsigned int)reachabilityFlags;	// IMP=0x000000010108eaa4
- (long long)currentReachabilityStatus;	// IMP=0x000000010108ea54
- (_Bool)isInterventionRequired;	// IMP=0x000000010108ea08
- (_Bool)isConnectionOnDemand;	// IMP=0x000000010108e9b4
- (_Bool)connectionRequired;	// IMP=0x000000010108e974
- (_Bool)isConnectionRequired;	// IMP=0x000000010108e968
- (_Bool)isReachableViaWiFi;	// IMP=0x000000010108e914
- (_Bool)isReachableViaWWAN;	// IMP=0x000000010108e8bc
- (_Bool)isReachable;	// IMP=0x000000010108e864
- (_Bool)isReachableWithFlags:(unsigned int)arg1;	// IMP=0x000000010108e81c
- (void)stopNotifier;	// IMP=0x000000010108e7c0
- (_Bool)startNotifier;	// IMP=0x000000010108e628
- (void)dealloc;	// IMP=0x000000010108e54c
- (id)initWithReachabilityRef:(struct __SCNetworkReachability *)arg1;	// IMP=0x000000010108e4a4

@end

