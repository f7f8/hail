//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary;

@interface AFTaskContext : NSObject
{
    NSDictionary *_launchOptions;	// 8 = 0x8
    NSMutableDictionary *_otherOptions;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100a4cadc
- (id)init;	// IMP=0x0000000100a4ca3c
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;	// IMP=0x0000000100a4c9e0
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x0000000100a4c9c8
- (id)otherOptions;	// IMP=0x0000000100a4c9b8
- (id)launchOptions;	// IMP=0x0000000100a4c9a8
- (void)internalSetLaunchOptions:(id)arg1;	// IMP=0x0000000100a4c970
- (id)application;	// IMP=0x0000000100a4c95c

@end

