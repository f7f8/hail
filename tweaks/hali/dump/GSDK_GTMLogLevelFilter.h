//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GTMLogFilter.h"

@class NSString;

@interface GSDK_GTMLogLevelFilter : NSObject <GTMLogFilter>
{
    _Bool verboseLoggingEnabled_;	// 8 = 0x8
}

- (void)defaultsChanged:(id)arg1;	// IMP=0x00000001009302a4
- (_Bool)filterAllowsMessage:(id)arg1 level:(int)arg2;	// IMP=0x000000010093024c
- (void)dealloc;	// IMP=0x00000001009301d4
- (id)init;	// IMP=0x000000010093001c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

