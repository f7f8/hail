//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UTMCLifeCycleProtocol.h"

@class NSString;

@interface UTSelfStaticsManager : NSObject <UTMCLifeCycleProtocol>
{
    long long mSwitchForeGroundTime;	// 8 = 0x8
    long long mLastBackGroundOccuredTime;	// 16 = 0x10
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000101a8bd6c
+ (id)getInstance;	// IMP=0x0000000101a8bc94
- (void)switchBackGround;	// IMP=0x0000000101a8bf38
- (void)switchForeGround;	// IMP=0x0000000101a8be40
- (id)init;	// IMP=0x0000000101a8bd90
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000101a8bd8c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

