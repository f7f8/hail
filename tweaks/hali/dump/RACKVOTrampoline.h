//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RACDisposable.h"

@class NSObject, NSString;

@interface RACKVOTrampoline : RACDisposable
{
    NSString *_keyPath;	// 8 = 0x8
    CDUnknownBlockType _block;	// 16 = 0x10
    NSObject *_unsafeTarget;	// 24 = 0x18
    NSObject *_weakTarget;	// 32 = 0x20
    NSObject *_observer;	// 40 = 0x28
}

@property(readonly, nonatomic) __weak NSObject *observer; // @synthesize observer=_observer;
@property(readonly, nonatomic) __weak NSObject *weakTarget; // @synthesize weakTarget=_weakTarget;
@property(readonly, nonatomic) NSObject *unsafeTarget; // @synthesize unsafeTarget=_unsafeTarget;
@property(readonly, copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(readonly, copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
- (void).cxx_destruct;	// IMP=0x0000000101439fa0
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000101439db0
- (void)dispose;	// IMP=0x0000000101439bd0
- (void)dealloc;	// IMP=0x0000000101439b80
- (id)initWithTarget:(id)arg1 observer:(id)arg2 keyPath:(id)arg3 options:(unsigned long long)arg4 block:(CDUnknownBlockType)arg5;	// IMP=0x000000010143988c

@end

