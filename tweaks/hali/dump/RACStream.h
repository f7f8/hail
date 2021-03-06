//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface RACStream : NSObject
{
    NSString *_name;	// 8 = 0x8
}

+ (id)return:(id)arg1;	// IMP=0x00000001014534f4
+ (id)empty;	// IMP=0x00000001014534e4
+ (id)concat:(id)arg1;	// IMP=0x0000000101455090
+ (id)zip:(id)arg1 reduce:(CDUnknownBlockType)arg2;	// IMP=0x0000000101454fb4
+ (id)zip:(id)arg1;	// IMP=0x0000000101454eb8
+ (id)join:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000101454a08
@property(copy) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;	// IMP=0x00000001014535e8
- (id)setNameWithFormat:(id)arg1;	// IMP=0x000000010145350c
- (id)zipWith:(id)arg1;	// IMP=0x0000000101453504
- (id)concat:(id)arg1;	// IMP=0x00000001014534fc
- (id)bind:(CDUnknownBlockType)arg1;	// IMP=0x00000001014534ec
- (id)init;	// IMP=0x0000000101453464
- (id)distinctUntilChanged;	// IMP=0x0000000101455f30
- (id)skipWhileBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000101455e04
- (id)skipUntilBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000101455b30
- (id)takeWhileBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000101455a04
- (id)takeUntilBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001014557dc
- (id)scanWithStart:(id)arg1 reduceWithIndex:(CDUnknownBlockType)arg2;	// IMP=0x00000001014553ec
- (id)scanWithStart:(id)arg1 reduce:(CDUnknownBlockType)arg2;	// IMP=0x0000000101455238
- (id)take:(unsigned long long)arg1;	// IMP=0x00000001014547e8
- (id)skip:(unsigned long long)arg1;	// IMP=0x00000001014545f4
- (id)startWith:(id)arg1;	// IMP=0x00000001014544d8
- (id)reduceEach:(CDUnknownBlockType)arg1;	// IMP=0x000000010145431c
- (id)ignore:(id)arg1;	// IMP=0x00000001014541b0
- (id)filter:(CDUnknownBlockType)arg1;	// IMP=0x000000010145400c
- (id)combinePreviousWithStart:(id)arg1 reduce:(CDUnknownBlockType)arg2;	// IMP=0x0000000101453bb4
- (id)mapReplace:(id)arg1;	// IMP=0x0000000101453a7c
- (id)map:(CDUnknownBlockType)arg1;	// IMP=0x00000001014538f8
- (id)flatten;	// IMP=0x0000000101453820
- (id)flattenMap:(CDUnknownBlockType)arg1;	// IMP=0x00000001014535fc
- (id)mapPreviousWithStart:(id)arg1 reduce:(CDUnknownBlockType)arg2;	// IMP=0x00000001014563a4
- (id)scanWithStart:(id)arg1 combine:(CDUnknownBlockType)arg2;	// IMP=0x0000000101456344
- (id)sequenceMany:(CDUnknownBlockType)arg1;	// IMP=0x000000010145622c

@end

