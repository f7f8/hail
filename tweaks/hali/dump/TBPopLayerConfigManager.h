//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface TBPopLayerConfigManager : NSObject
{
    _Bool _isUpdatingConfig;	// 8 = 0x8
    _Bool _isMockConfigEnabled;	// 9 = 0x9
    NSString *_configIndexString;	// 16 = 0x10
    NSDictionary *_configDictionary;	// 24 = 0x18
    NSDictionary *_mockedConfig;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x000000010175e7b0
@property(copy, nonatomic) NSDictionary *mockedConfig; // @synthesize mockedConfig=_mockedConfig;
@property(nonatomic) _Bool isMockConfigEnabled; // @synthesize isMockConfigEnabled=_isMockConfigEnabled;
@property(copy, nonatomic) NSDictionary *configDictionary; // @synthesize configDictionary=_configDictionary;
@property(copy, nonatomic) NSString *configIndexString; // @synthesize configIndexString=_configIndexString;
@property(nonatomic) _Bool isUpdatingConfig; // @synthesize isUpdatingConfig=_isUpdatingConfig;
- (void).cxx_destruct;	// IMP=0x0000000101760aec
- (long long)checkConfig:(id)arg1;	// IMP=0x00000001017601cc
- (void)checkConfigArray:(id)arg1 validConfigArrayBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010175ff40
- (void)changeConfigSource:(_Bool)arg1 withAllConfig:(id)arg2;	// IMP=0x000000010175feb0
- (id)resolveWithJsonString:(id)arg1;	// IMP=0x000000010175fd48
- (void)formatConfig:(id)arg1 insertDict:(id)arg2 andJsonString:(id)arg3;	// IMP=0x000000010175f8f0
- (id)configDictionaryFromJsonArray:(id)arg1;	// IMP=0x000000010175f754
- (id)getJsonArrayWithIDArray:(id)arg1;	// IMP=0x000000010175f56c
- (id)getIDArrayFromConfigIndex:(id)arg1 seperatedByString:(id)arg2;	// IMP=0x000000010175f4a8
- (id)getJsonArrayWithConfigIndex:(id)arg1;	// IMP=0x000000010175f440
- (id)getConfigByKey:(id)arg1;	// IMP=0x000000010175f33c
- (_Bool)hasTmallConfig;	// IMP=0x000000010175efc8
- (void)analyseConfig;	// IMP=0x000000010175ed38
- (void)configChanged:(id)arg1;	// IMP=0x000000010175ecf4
- (void)registerObserver;	// IMP=0x000000010175eb9c
- (id)getJsonArray;	// IMP=0x000000010175e90c
- (id)getConfigDictionary;	// IMP=0x000000010175e8c8
- (id)getConfigIndexString;	// IMP=0x000000010175e884
- (id)init;	// IMP=0x000000010175e700

@end

