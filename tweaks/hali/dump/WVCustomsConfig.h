//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WVConfigHandler.h"

@class NSError, NSObject<OS_dispatch_queue>, NSOperationQueue, NSString;

@interface WVCustomsConfig : NSObject <WVConfigHandler>
{
    id <WVConfigHandlerDelegate> _delegate;	// 8 = 0x8
    NSString *_configName;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSOperationQueue *_operationQueue;	// 32 = 0x20
    unsigned long long _loadingConfigCount;	// 40 = 0x28
    unsigned long long _updateCount;	// 48 = 0x30
    NSError *_error;	// 56 = 0x38
}

+ (id)sharedConfig;	// IMP=0x0000000101bb1f7c
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) unsigned long long updateCount; // @synthesize updateCount=_updateCount;
@property(nonatomic) unsigned long long loadingConfigCount; // @synthesize loadingConfigCount=_loadingConfigCount;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSString *configName; // @synthesize configName=_configName;
@property(nonatomic) __weak id <WVConfigHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x0000000101bb3ba0
- (void)configUpdateFinished:(id)arg1 withUpdateCount:(unsigned long long)arg2;	// IMP=0x0000000101bb3980
- (void)appConfigLoadFinished:(id)arg1 withContent:(id)arg2 withError:(id)arg3;	// IMP=0x0000000101bb33ac
- (void)loadAppConfig:(id)arg1;	// IMP=0x0000000101bb2e4c
- (void)loadAppConfigs:(id)arg1 withSnapshot:(id)arg2;	// IMP=0x0000000101bb2994
- (void)checkAndLoadAppConfigs:(id)arg1 installedApps:(id)arg2 withSnapshot:(id)arg3;	// IMP=0x0000000101bb272c
- (void)reset;	// IMP=0x0000000101bb26dc
- (void)updateWithContent:(id)arg1;	// IMP=0x0000000101bb26cc
- (void)updateWithSnapshot:(id)arg1;	// IMP=0x0000000101bb2234
- (id)configVersion;	// IMP=0x0000000101bb21d0
- (void)setupConfig;	// IMP=0x0000000101bb21b4
- (void)dealloc;	// IMP=0x0000000101bb2158
- (id)init;	// IMP=0x0000000101bb2030

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

