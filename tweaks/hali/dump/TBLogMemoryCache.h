//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>;

@interface TBLogMemoryCache : NSObject
{
    NSObject<OS_dispatch_queue> *_uploadQueue;	// 8 = 0x8
    unsigned long long _logNum;	// 16 = 0x10
    long long _logTotalSize;	// 24 = 0x18
    unsigned long long _interval;	// 32 = 0x20
    double _beginTime;	// 40 = 0x28
    NSMutableArray *_datas;	// 48 = 0x30
    long long _currentLogNum;	// 56 = 0x38
    long long _currentDataSize;	// 64 = 0x40
    long long _retryTime;	// 72 = 0x48
}

+ (id)sharedCache;	// IMP=0x0000000101a24f28
@property(nonatomic) long long retryTime; // @synthesize retryTime=_retryTime;
@property(nonatomic) long long currentDataSize; // @synthesize currentDataSize=_currentDataSize;
@property(nonatomic) long long currentLogNum; // @synthesize currentLogNum=_currentLogNum;
@property(retain, nonatomic) NSMutableArray *datas; // @synthesize datas=_datas;
@property double beginTime; // @synthesize beginTime=_beginTime;
@property unsigned long long interval; // @synthesize interval=_interval;
@property long long logTotalSize; // @synthesize logTotalSize=_logTotalSize;
@property unsigned long long logNum; // @synthesize logNum=_logNum;
- (void).cxx_destruct;	// IMP=0x0000000101a262e4
- (void)cleanCache;	// IMP=0x0000000101a260f8
- (_Bool)checkCurrentNetworkStatus;	// IMP=0x0000000101a25ea4
- (void)uploadCacheData;	// IMP=0x0000000101a25d30
- (void)setObject:(id)arg1;	// IMP=0x0000000101a256ec
- (void)cached:(id)arg1;	// IMP=0x0000000101a24fa8
- (id)init;	// IMP=0x0000000101a24e5c

@end

