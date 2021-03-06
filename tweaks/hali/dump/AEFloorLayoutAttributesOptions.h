//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSMutableArray;

@interface AEFloorLayoutAttributesOptions : NSObject <NSCopying>
{
    long long _optionKind;	// 8 = 0x8
    NSMutableArray *_columnCounts;	// 16 = 0x10
    NSMutableArray *_sizeLimits;	// 24 = 0x18
}

+ (id)multiColumnCellOptions;	// IMP=0x0000000100a077c4
+ (id)singleColumnCellOptions;	// IMP=0x0000000100a07794
+ (id)sectionFooterOptions;	// IMP=0x0000000100a07760
+ (id)sectionHeaderOptions;	// IMP=0x0000000100a0772c
+ (id)collectionFooterOptions;	// IMP=0x0000000100a076f8
+ (id)collectionHeaderOptions;	// IMP=0x0000000100a076c4
@property(retain, nonatomic) NSMutableArray *sizeLimits; // @synthesize sizeLimits=_sizeLimits;
@property(retain, nonatomic) NSMutableArray *columnCounts; // @synthesize columnCounts=_columnCounts;
@property(nonatomic) long long optionKind; // @synthesize optionKind=_optionKind;
- (void).cxx_destruct;	// IMP=0x0000000100a07684
- (double)columnCountForContainerWidth:(double)arg1;	// IMP=0x0000000100a073e0
- (void)setColumnCountEachLine:(double)arg1 containerWidthEqualOrLessThan:(double)arg2;	// IMP=0x0000000100a071f8
- (id)initWithKind:(long long)arg1;	// IMP=0x0000000100a07124
- (id)init;	// IMP=0x0000000100a07114
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100a06fe0

@end

