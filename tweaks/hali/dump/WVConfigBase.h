//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WVConfigHandler.h"

@class NSString, WVConfigModel;

@interface WVConfigBase : NSObject <WVConfigHandler>
{
    WVConfigModel *_defaultConfig;	// 8 = 0x8
    WVConfigModel *_config;	// 16 = 0x10
    id <WVConfigHandlerDelegate> _delegate;	// 24 = 0x18
    NSString *_configName;	// 32 = 0x20
    long long _configType;	// 40 = 0x28
    Class _configClass;	// 48 = 0x30
}

@property(retain, nonatomic) Class configClass; // @synthesize configClass=_configClass;
@property(nonatomic) long long configType; // @synthesize configType=_configType;
@property(retain, nonatomic) NSString *configName; // @synthesize configName=_configName;
@property(nonatomic) __weak id <WVConfigHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) WVConfigModel *config; // @synthesize config=_config;
@property(readonly, nonatomic) WVConfigModel *defaultConfig; // @synthesize defaultConfig=_defaultConfig;
- (void).cxx_destruct;	// IMP=0x0000000101b89438
- (void)clear;	// IMP=0x0000000101b89334
- (void)writeConfigFile:(id)arg1;	// IMP=0x0000000101b89308
- (id)readConfigFile;	// IMP=0x0000000101b892e8
- (void)reset;	// IMP=0x0000000101b89270
- (void)configUpdated:(_Bool)arg1;	// IMP=0x0000000101b8926c
- (id)getConfigFromJSON:(id)arg1 withUpdateCount:(unsigned long long *)arg2 withErrorMsg:(id *)arg3;	// IMP=0x0000000101b89194
- (id)getConfigUrl:(id)arg1;	// IMP=0x0000000101b88fe4
- (void)configUpdateFinish:(id)arg1 withUpdateCount:(unsigned long long)arg2;	// IMP=0x0000000101b88f58
- (void)configLoadFinishedWithResult:(id)arg1 withURL:(id)arg2 withError:(id)arg3;	// IMP=0x0000000101b88da8
- (void)updateWithContent:(id)arg1;	// IMP=0x0000000101b88c68
- (void)updateWithSnapshot:(id)arg1;	// IMP=0x0000000101b88898
- (id)configVersion;	// IMP=0x0000000101b88844
- (void)setupConfig;	// IMP=0x0000000101b88764
- (id)initWithConfigName:(id)arg1 withClass:(Class)arg2 withType:(long long)arg3;	// IMP=0x0000000101b88650

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

