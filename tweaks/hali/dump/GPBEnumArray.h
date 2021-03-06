//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class GPBMessage;

@interface GPBEnumArray : NSObject <NSCopying>
{
    GPBMessage *_autocreator;	// 8 = 0x8
    CDUnknownFunctionPointerType _validationFunc;	// 16 = 0x10
    int *_values;	// 24 = 0x18
    unsigned long long _count;	// 32 = 0x20
    unsigned long long _capacity;	// 40 = 0x28
}

+ (id)arrayWithValidationFunction:(CDUnknownFunctionPointerType)arg1 capacity:(unsigned long long)arg2;	// IMP=0x000000010177f190
+ (id)arrayWithValueArray:(id)arg1;	// IMP=0x000000010177f150
+ (id)arrayWithValidationFunction:(CDUnknownFunctionPointerType)arg1 rawValue:(int)arg2;	// IMP=0x000000010177f0f8
+ (id)arrayWithValidationFunction:(CDUnknownFunctionPointerType)arg1;	// IMP=0x000000010177f0b8
+ (id)array;	// IMP=0x000000010177f084
@property(readonly, nonatomic) CDUnknownFunctionPointerType validationFunc; // @synthesize validationFunc=_validationFunc;
@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
- (void)replaceValueAtIndex:(unsigned long long)arg1 withValue:(int)arg2;	// IMP=0x00000001017801cc
- (void)insertValue:(int)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000101780048
- (void)addValues:(const int *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000010177fed8
- (void)addValue:(int)arg1;	// IMP=0x000000010177fea8
- (void)exchangeValueAtIndex:(unsigned long long)arg1 withValueAtIndex:(unsigned long long)arg2;	// IMP=0x000000010177fddc
- (void)removeAll;	// IMP=0x000000010177fda8
- (void)removeValueAtIndex:(unsigned long long)arg1;	// IMP=0x000000010177fcb4
- (void)addRawValuesFromArray:(id)arg1;	// IMP=0x000000010177fc8c
- (void)replaceValueAtIndex:(unsigned long long)arg1 withRawValue:(int)arg2;	// IMP=0x000000010177fc08
- (void)insertRawValue:(int)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000010177fae8
- (void)addRawValues:(const int *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000010177fa24
- (void)addRawValue:(int)arg1;	// IMP=0x000000010177f9f4
- (void)internalResizeToCapacity:(unsigned long long)arg1;	// IMP=0x000000010177f954
- (void)enumerateValuesWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010177f834
- (void)enumerateValuesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010177f81c
- (int)rawValueAtIndex:(unsigned long long)arg1;	// IMP=0x000000010177f7a4
- (int)valueAtIndex:(unsigned long long)arg1;	// IMP=0x000000010177f708
- (void)enumerateRawValuesWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010177f638
- (void)enumerateRawValuesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010177f620
- (id)description;	// IMP=0x000000010177f520
- (unsigned long long)hash;	// IMP=0x000000010177f510
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010177f474
- (void)dealloc;	// IMP=0x000000010177f420
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010177f3c4
- (id)initWithValidationFunction:(CDUnknownFunctionPointerType)arg1 capacity:(unsigned long long)arg2;	// IMP=0x000000010177f378
- (id)initWithValidationFunction:(CDUnknownFunctionPointerType)arg1 rawValues:(const int *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000010177f294
- (id)initWithValidationFunction:(CDUnknownFunctionPointerType)arg1;	// IMP=0x000000010177f21c
- (id)initWithValueArray:(id)arg1;	// IMP=0x000000010177f1e8
- (id)init;	// IMP=0x000000010177f1d8

@end

