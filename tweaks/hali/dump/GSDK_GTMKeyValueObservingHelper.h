//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface GSDK_GTMKeyValueObservingHelper : NSObject
{
    id observer_;	// 8 = 0x8
    SEL selector_;	// 16 = 0x10
    id userInfo_;	// 24 = 0x18
    id target_;	// 32 = 0x20
    NSString *keyPath_;	// 40 = 0x28
}

- (void)deregister;	// IMP=0x000000010092a114
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010092a01c
- (void)dealloc;	// IMP=0x0000000100929f88
- (id)description;	// IMP=0x0000000100929ee4
- (id)initWithObserver:(id)arg1 object:(id)arg2 keyPath:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 options:(unsigned long long)arg6;	// IMP=0x0000000100929de8

@end

