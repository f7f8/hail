//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEBaseTile.h"

@class NSArray, UIView;

@interface AESearchListRefineAttributeFloorViewModel : AEBaseTile
{
    NSArray *_attributes;	// 8 = 0x8
    CDUnknownBlockType _selectAttributeValuesHandler;	// 16 = 0x10
    CDUnknownBlockType _deleteAttributeValuesHandler;	// 24 = 0x18
    UIView *_superViewOfAttributeValuesView;	// 32 = 0x20
    CDUnknownBlockType _getSlideUpBlockHandler;	// 40 = 0x28
}

+ (Class)cellClass;	// IMP=0x0000000100c9ad00
@property(copy, nonatomic) CDUnknownBlockType getSlideUpBlockHandler; // @synthesize getSlideUpBlockHandler=_getSlideUpBlockHandler;
@property(nonatomic) __weak UIView *superViewOfAttributeValuesView; // @synthesize superViewOfAttributeValuesView=_superViewOfAttributeValuesView;
@property(copy, nonatomic) CDUnknownBlockType deleteAttributeValuesHandler; // @synthesize deleteAttributeValuesHandler=_deleteAttributeValuesHandler;
@property(copy, nonatomic) CDUnknownBlockType selectAttributeValuesHandler; // @synthesize selectAttributeValuesHandler=_selectAttributeValuesHandler;
@property(retain, nonatomic) NSArray *attributes; // @synthesize attributes=_attributes;
- (void).cxx_destruct;	// IMP=0x0000000100c9ab68
- (double)heightForReferenceWidth:(double)arg1;	// IMP=0x0000000100c9aa8c
- (id)init;	// IMP=0x0000000100c9a984

@end

