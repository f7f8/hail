//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSRecursiveLock;

@interface NWSidewayObject : NSObject
{
    NSMutableArray *_contents;	// 8 = 0x8
    unsigned long long _capacity;	// 16 = 0x10
    NSRecursiveLock *_lock;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001011a114c
- (id)toString;	// IMP=0x00000001011a0fb4
- (_Bool)isFull;	// IMP=0x00000001011a0f38
- (void)appendContent:(id)arg1;	// IMP=0x00000001011a0e8c
- (void)updateCapacity:(unsigned long long)arg1;	// IMP=0x00000001011a0e28
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x00000001011a0d80

@end

