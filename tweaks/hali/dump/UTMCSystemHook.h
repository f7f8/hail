//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface UTMCSystemHook : NSObject
{
    NSMutableArray *mObservers;	// 8 = 0x8
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000101aa2b18
+ (id)getInstance;	// IMP=0x0000000101aa2a40
- (void).cxx_destruct;	// IMP=0x0000000101aa3448
- (void)appDIdEnterBackground:(id)arg1;	// IMP=0x0000000101aa2f34
- (void)appBecameActive:(id)arg1;	// IMP=0x0000000101aa2e08
- (void)appDidFinishLaunching:(id)arg1;	// IMP=0x0000000101aa2e04
- (void)appUpdateTimer:(id)arg1;	// IMP=0x0000000101aa2dbc
- (void)detach:(id)arg1;	// IMP=0x0000000101aa2d3c
- (void)attach:(id)arg1;	// IMP=0x0000000101aa2c80
- (void)start;	// IMP=0x0000000101aa2b98
- (id)init;	// IMP=0x0000000101aa2b3c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000101aa2b38

@end

