//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface GIDCallbackQueue : NSObject
{
    _Bool _firing;	// 8 = 0x8
    int _pending;	// 12 = 0xc
    NSMutableArray *_queue;	// 16 = 0x10
    GIDCallbackQueue *_strongSelf;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010093fc34
- (void)fire;	// IMP=0x000000010093fb5c
- (void)addCallback:(CDUnknownBlockType)arg1;	// IMP=0x000000010093fac8
- (void)reset;	// IMP=0x000000010093fa78
- (void)next;	// IMP=0x000000010093fa10
- (void)wait;	// IMP=0x000000010093f9c8
- (id)init;	// IMP=0x000000010093f950

@end

