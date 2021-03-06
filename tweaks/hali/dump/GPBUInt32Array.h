//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class GPBMessage;

@interface GPBUInt32Array : NSObject <NSCopying>
{
    GPBMessage *_autocreator;	// 8 = 0x8
    unsigned int *_values;	// 16 = 0x10
    unsigned long long _count;	// 24 = 0x18
    unsigned long long _capacity;	// 32 = 0x20
}

+ (id)arrayWithCapacity:(unsigned long long)arg1;	// IMP=0x000000010177ab64
+ (id)arrayWithValueArray:(id)arg1;	// IMP=0x000000010177ab24
+ (id)arrayWithValue:(unsigned int)arg1;	// IMP=0x000000010177aadc
+ (id)array;	// IMP=0x000000010177aaac
@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
- (void)exchangeValueAtIndex:(unsigned long long)arg1 withValueAtIndex:(unsigned long long)arg2;	// IMP=0x000000010177b574
- (void)removeAll;	// IMP=0x000000010177b540
- (void)removeValueAtIndex:(unsigned long long)arg1;	// IMP=0x000000010177b44c
- (void)addValuesFromArray:(id)arg1;	// IMP=0x000000010177b424
- (void)replaceValueAtIndex:(unsigned long long)arg1 withValue:(unsigned int)arg2;	// IMP=0x000000010177b3a0
- (void)insertValue:(unsigned int)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000010177b280
- (void)addValues:(const unsigned int *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000010177b1bc
- (void)addValue:(unsigned int)arg1;	// IMP=0x000000010177b18c
- (void)internalResizeToCapacity:(unsigned long long)arg1;	// IMP=0x000000010177b0ec
- (unsigned int)valueAtIndex:(unsigned long long)arg1;	// IMP=0x000000010177b074
- (void)enumerateValuesWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010177afa4
- (void)enumerateValuesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010177af8c
- (id)description;	// IMP=0x000000010177ae8c
- (unsigned long long)hash;	// IMP=0x000000010177ae7c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010177ade0
- (void)dealloc;	// IMP=0x000000010177ad8c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010177ad3c
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x000000010177ace8
- (id)initWithValues:(const unsigned int *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000010177ac04
- (id)initWithValueArray:(id)arg1;	// IMP=0x000000010177abdc
- (id)init;	// IMP=0x000000010177aba4

@end

