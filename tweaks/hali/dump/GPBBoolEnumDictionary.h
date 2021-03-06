//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GPBDictionaryInternalsProtocol.h"
#import "NSCopying.h"

@class GPBMessage;

@interface GPBBoolEnumDictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying>
{
    GPBMessage *_autocreator;	// 8 = 0x8
    CDUnknownFunctionPointerType _validationFunc;	// 16 = 0x10
    int _values[2];	// 24 = 0x18
    _Bool _valueSet[2];	// 32 = 0x20
}

+ (id)dictionaryWithValidationFunction:(CDUnknownFunctionPointerType)arg1 capacity:(unsigned long long)arg2;	// IMP=0x00000001017be230
+ (id)dictionaryWithDictionary:(id)arg1;	// IMP=0x00000001017be1f0
+ (id)dictionaryWithValidationFunction:(CDUnknownFunctionPointerType)arg1 rawValues:(const int *)arg2 forKeys:(const _Bool *)arg3 count:(unsigned long long)arg4;	// IMP=0x00000001017be190
+ (id)dictionaryWithValidationFunction:(CDUnknownFunctionPointerType)arg1 rawValue:(int)arg2 forKey:(_Bool)arg3;	// IMP=0x00000001017be130
+ (id)dictionaryWithValidationFunction:(CDUnknownFunctionPointerType)arg1;	// IMP=0x00000001017be0e4
+ (id)dictionary;	// IMP=0x00000001017be0a4
@property(readonly, nonatomic) CDUnknownFunctionPointerType validationFunc; // @synthesize validationFunc=_validationFunc;
- (void)removeAll;	// IMP=0x00000001017bed8c
- (void)removeValueForKey:(_Bool)arg1;	// IMP=0x00000001017bed78
- (void)setRawValue:(int)arg1 forKey:(_Bool)arg2;	// IMP=0x00000001017bed34
- (void)setValue:(int)arg1 forKey:(_Bool)arg2;	// IMP=0x00000001017bec70
- (void)addRawEntriesFromDictionary:(id)arg1;	// IMP=0x00000001017bec04
- (void)setGPBGenericValue:(CDUnion_88782d86 *)arg1 forGPBGenericValueKey:(CDUnion_88782d86 *)arg2;	// IMP=0x00000001017bebd4
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;	// IMP=0x00000001017beb0c
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;	// IMP=0x00000001017be9f8
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;	// IMP=0x00000001017be930
- (id)serializedDataForUnknownValue:(int)arg1 forKey:(CDUnion_88782d86 *)arg2 keyDataType:(unsigned char)arg3;	// IMP=0x00000001017be868
- (void)enumerateKeysAndRawValuesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001017be790
- (void)enumerateKeysAndValuesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001017be6f4
- (_Bool)valueForKey:(_Bool)arg1 rawValue:(int *)arg2;	// IMP=0x00000001017be6b8
- (_Bool)valueForKey:(_Bool)arg1 value:(int *)arg2;	// IMP=0x00000001017be640
@property(readonly, nonatomic) unsigned long long count;
- (id)description;	// IMP=0x00000001017be534
- (unsigned long long)hash;	// IMP=0x00000001017be518
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001017be450
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001017be414
- (id)initWithValidationFunction:(CDUnknownFunctionPointerType)arg1 capacity:(unsigned long long)arg2;	// IMP=0x00000001017be3fc
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000001017be35c
- (id)initWithValidationFunction:(CDUnknownFunctionPointerType)arg1 rawValues:(const int *)arg2 forKeys:(const _Bool *)arg3 count:(unsigned long long)arg4;	// IMP=0x00000001017be2ac
- (id)initWithValidationFunction:(CDUnknownFunctionPointerType)arg1;	// IMP=0x00000001017be294
- (id)init;	// IMP=0x00000001017be278

@end

