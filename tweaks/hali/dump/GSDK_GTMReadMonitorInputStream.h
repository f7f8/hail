//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSInputStream.h"

#import "NSStreamDelegate.h"

@class NSArray, NSString, NSThread;

@interface GSDK_GTMReadMonitorInputStream : NSInputStream <NSStreamDelegate>
{
    NSInputStream *_inputStream;	// 8 = 0x8
    NSThread *_thread;	// 16 = 0x10
    NSArray *_runLoopModes;	// 24 = 0x18
    id _readDelegate;	// 32 = 0x20
    SEL _readSelector;	// 40 = 0x28
}

+ (id)inputStreamWithStream:(id)arg1;	// IMP=0x0000000101309fdc
+ (void)forwardInvocation:(id)arg1;	// IMP=0x0000000101309f28
+ (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x0000000101309f14
@property(retain) NSArray *runLoopModes; // @synthesize runLoopModes=_runLoopModes;
@property SEL readSelector; // @synthesize readSelector=_readSelector;
@property __weak id readDelegate; // @synthesize readDelegate=_readDelegate;
- (void).cxx_destruct;	// IMP=0x000000010130a6d0
- (id)streamError;	// IMP=0x000000010130a648
- (unsigned long long)streamStatus;	// IMP=0x000000010130a630
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;	// IMP=0x000000010130a5d8
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;	// IMP=0x000000010130a580
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;	// IMP=0x000000010130a51c
- (id)propertyForKey:(id)arg1;	// IMP=0x000000010130a504
- (void)setDelegate:(id)arg1;	// IMP=0x000000010130a4ec
- (id)delegate;	// IMP=0x000000010130a4d4
- (void)close;	// IMP=0x000000010130a4bc
- (void)open;	// IMP=0x000000010130a4a4
- (_Bool)hasBytesAvailable;	// IMP=0x000000010130a48c
- (_Bool)getBuffer:(char **)arg1 length:(unsigned long long *)arg2;	// IMP=0x000000010130a474
- (void)invokeReadSelectorWithBuffer:(id)arg1;	// IMP=0x000000010130a2d8
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;	// IMP=0x000000010130a13c
- (id)init;	// IMP=0x000000010130a100
- (id)initWithStream:(id)arg1;	// IMP=0x000000010130a040
- (void)forwardInvocation:(id)arg1;	// IMP=0x0000000101309fbc
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x0000000101309fa4
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x0000000101309f8c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

