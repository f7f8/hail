//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface FilterManager : NSObject
{
    NSMutableArray *_before_filters;	// 8 = 0x8
    NSMutableArray *_after_filters;	// 16 = 0x10
}

+ (id)getInstance;	// IMP=0x0000000101d43178
- (void).cxx_destruct;	// IMP=0x0000000101d43fa0
- (id)doAfter:(id)arg1 response:(id)arg2;	// IMP=0x0000000101d43b7c
- (id)doBefore:(id)arg1 startFilter:(id)arg2;	// IMP=0x0000000101d43624
- (id)doBefore:(id)arg1;	// IMP=0x0000000101d43614
- (void)addAfterFilter:(id)arg1;	// IMP=0x0000000101d435fc
- (void)addBeforeFilter:(id)arg1;	// IMP=0x0000000101d435e4
- (void)dealloc;	// IMP=0x0000000101d43570
- (id)init;	// IMP=0x0000000101d431f8

@end

