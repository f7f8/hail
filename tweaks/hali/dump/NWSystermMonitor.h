//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTimer;

@interface NWSystermMonitor : NSObject
{
    NSTimer *_bgRuningTaskTimer;	// 8 = 0x8
    _Bool _isAppInBackground;	// 16 = 0x10
    _Bool _didProcessWhenTimerout;	// 17 = 0x11
    _Bool _haveForwardSuspend;	// 18 = 0x12
    unsigned long long _bgTask;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x00000001013bfdc4
@property(nonatomic) unsigned long long bgTask; // @synthesize bgTask=_bgTask;
- (void).cxx_destruct;	// IMP=0x00000001013c0a1c
- (void)processApplicationWillBeHandler;	// IMP=0x00000001013c0964
- (void)bgRuningTaskTimerOut;	// IMP=0x00000001013c08e0
- (void)stopRunningTaskTimer;	// IMP=0x00000001013c0894
- (void)startRunningTaskTimer:(double)arg1;	// IMP=0x00000001013c0834
- (void)handleApplicationDidEnterBackground:(id)arg1;	// IMP=0x00000001013c02d0
- (void)handleApplicationWillEnterForeground:(id)arg1;	// IMP=0x00000001013c0138
- (void)createTnetConnection;	// IMP=0x00000001013c00b4
- (void)accsOrangeChanged:(id)arg1;	// IMP=0x00000001013c0044
- (void)listenApplicationNotify;	// IMP=0x00000001013bff5c
- (_Bool)applicationInBackground;	// IMP=0x00000001013bff4c
- (void)dealloc;	// IMP=0x00000001013bfed0
- (id)init;	// IMP=0x00000001013bfe44

@end

