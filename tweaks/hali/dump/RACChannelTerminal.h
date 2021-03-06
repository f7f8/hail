//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RACSignal.h"

#import "RACSubscriber.h"

@class NSString;

@interface RACChannelTerminal : RACSignal <RACSubscriber>
{
    RACSignal *_values;	// 8 = 0x8
    id <RACSubscriber> _otherTerminal;	// 16 = 0x10
}

@property(readonly, nonatomic) id <RACSubscriber> otherTerminal; // @synthesize otherTerminal=_otherTerminal;
@property(readonly, nonatomic) RACSignal *values; // @synthesize values=_values;
- (void).cxx_destruct;	// IMP=0x00000001014329d4
- (void)didSubscribeWithDisposable:(id)arg1;	// IMP=0x0000000101432948
- (void)sendCompleted;	// IMP=0x0000000101432908
- (void)sendError:(id)arg1;	// IMP=0x000000010143289c
- (void)sendNext:(id)arg1;	// IMP=0x0000000101432830
- (id)subscribe:(id)arg1;	// IMP=0x00000001014327ac
- (id)initWithValues:(id)arg1 otherTerminal:(id)arg2;	// IMP=0x00000001014326d8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

