//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WVConfigModel.h"

@class NSDictionary, NSString;

@interface WVCommonConfigModel : WVConfigModel
{
    _Bool _autoPauseWebGL;	// 8 = 0x8
    _Bool _shouldInjectBridge;	// 9 = 0x9
    _Bool _isCheckCleanup;	// 10 = 0xa
    _Bool _isOpenCombo;	// 11 = 0xb
    _Bool _isAutoRegisterApp;	// 12 = 0xc
    NSString *_urlScheme;	// 16 = 0x10
    long long _recoveryInterval;	// 24 = 0x18
    long long _monitorStatus;	// 32 = 0x20
    long long _urlRuleStatus;	// 40 = 0x28
    long long _configUpdateInterval;	// 48 = 0x30
    NSString *_injectBridgeExclusion;	// 56 = 0x38
    long long _packageAppStatus;	// 64 = 0x40
    NSString *_packageZipPrefix;	// 72 = 0x48
    NSString *_packageZipPreviewPrefix;	// 80 = 0x50
    NSDictionary *_verifySampleRate;	// 88 = 0x58
    long long _packageDownloadLimit;	// 96 = 0x60
    unsigned long long _packageMaxAppCount;	// 104 = 0x68
    double _packagePriorityWeight;	// 112 = 0x70
    long long _packageAccessInterval;	// 120 = 0x78
    long long _packageRemoveInterval;	// 128 = 0x80
    unsigned long long _customsDirectQueryLimit;	// 136 = 0x88
    unsigned long long _customsComboLimit;	// 144 = 0x90
}

+ (id)ignoredProperties;	// IMP=0x0000000101b8c384
@property(nonatomic) _Bool isAutoRegisterApp; // @synthesize isAutoRegisterApp=_isAutoRegisterApp;
@property(nonatomic) _Bool isOpenCombo; // @synthesize isOpenCombo=_isOpenCombo;
@property(nonatomic) _Bool isCheckCleanup; // @synthesize isCheckCleanup=_isCheckCleanup;
@property(nonatomic) unsigned long long customsComboLimit; // @synthesize customsComboLimit=_customsComboLimit;
@property(nonatomic) unsigned long long customsDirectQueryLimit; // @synthesize customsDirectQueryLimit=_customsDirectQueryLimit;
@property(nonatomic) long long packageRemoveInterval; // @synthesize packageRemoveInterval=_packageRemoveInterval;
@property(nonatomic) long long packageAccessInterval; // @synthesize packageAccessInterval=_packageAccessInterval;
@property(nonatomic) double packagePriorityWeight; // @synthesize packagePriorityWeight=_packagePriorityWeight;
@property(nonatomic) unsigned long long packageMaxAppCount; // @synthesize packageMaxAppCount=_packageMaxAppCount;
@property(nonatomic) long long packageDownloadLimit; // @synthesize packageDownloadLimit=_packageDownloadLimit;
@property(retain, nonatomic) NSDictionary *verifySampleRate; // @synthesize verifySampleRate=_verifySampleRate;
@property(retain, nonatomic) NSString *packageZipPreviewPrefix; // @synthesize packageZipPreviewPrefix=_packageZipPreviewPrefix;
@property(retain, nonatomic) NSString *packageZipPrefix; // @synthesize packageZipPrefix=_packageZipPrefix;
@property(nonatomic) long long packageAppStatus; // @synthesize packageAppStatus=_packageAppStatus;
@property(readonly, nonatomic) _Bool shouldInjectBridge; // @synthesize shouldInjectBridge=_shouldInjectBridge;
@property(retain, nonatomic) NSString *injectBridgeExclusion; // @synthesize injectBridgeExclusion=_injectBridgeExclusion;
@property(nonatomic) _Bool autoPauseWebGL; // @synthesize autoPauseWebGL=_autoPauseWebGL;
@property(nonatomic) long long configUpdateInterval; // @synthesize configUpdateInterval=_configUpdateInterval;
@property(nonatomic) long long urlRuleStatus; // @synthesize urlRuleStatus=_urlRuleStatus;
@property(nonatomic) long long monitorStatus; // @synthesize monitorStatus=_monitorStatus;
@property(nonatomic) long long recoveryInterval; // @synthesize recoveryInterval=_recoveryInterval;
@property(retain, nonatomic) NSString *urlScheme; // @synthesize urlScheme=_urlScheme;
- (void).cxx_destruct;	// IMP=0x0000000101b8ca98
- (void)onDeserialization;	// IMP=0x0000000101b8c650
- (id)init;	// IMP=0x0000000101b8c3ec

@end

