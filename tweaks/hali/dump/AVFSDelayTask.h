//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVFSThreadTask.h"

@class NSString, NSTimer;

@interface AVFSDelayTask : NSObject <AVFSThreadTask>
{
    id userInfo;	// 8 = 0x8
    CDUnknownBlockType _execBlock;	// 16 = 0x10
    double _timeDelay;	// 24 = 0x18
    NSTimer *_eventTimer;	// 32 = 0x20
}

@property(retain, nonatomic) NSTimer *eventTimer; // @synthesize eventTimer=_eventTimer;
@property(nonatomic) double timeDelay; // @synthesize timeDelay=_timeDelay;
@property(copy, nonatomic) CDUnknownBlockType execBlock; // @synthesize execBlock=_execBlock;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo;
- (void).cxx_destruct;	// IMP=0x00000001011c20e8
- (void)dealloc;	// IMP=0x00000001011c1ff0
- (void)stop;	// IMP=0x00000001011c1e00
- (void)start;	// IMP=0x00000001011c1b58
- (void)timerEventFunc:(id)arg1;	// IMP=0x00000001011c1960
- (id)initWithDelay:(double)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001011c1890

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

