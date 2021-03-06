//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_source>;

@interface NWTimer : NSObject
{
    _Bool _yesOrNo;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_timer;	// 16 = 0x10
    id _aTarget;	// 24 = 0x18
    SEL _aSelector;	// 32 = 0x20
    id _userInfo;	// 40 = 0x28
}

+ (id)scheduledTimerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(_Bool)arg5;	// IMP=0x00000001013aa144
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) _Bool yesOrNo; // @synthesize yesOrNo=_yesOrNo;
@property(nonatomic) SEL aSelector; // @synthesize aSelector=_aSelector;
@property(nonatomic) __weak id aTarget; // @synthesize aTarget=_aTarget;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
- (void).cxx_destruct;	// IMP=0x00000001013aa58c
- (void)dealloc;	// IMP=0x00000001013aa46c
- (void)invalidate;	// IMP=0x00000001013aa0cc
- (id)initWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(_Bool)arg5;	// IMP=0x00000001013a9f4c

@end

