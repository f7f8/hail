//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AETileAdapterFloor.h"

@class AEComponentCoinsSimpleProduct;

@interface AEFloorCoinsSimpleProduct : AETileAdapterFloor
{
    AEComponentCoinsSimpleProduct *_simpleProduct;	// 8 = 0x8
}

+ (Class)modelClass;	// IMP=0x0000000100329b14
+ (id)identifier;	// IMP=0x0000000100329ae8
@property(retain, nonatomic) AEComponentCoinsSimpleProduct *simpleProduct; // @synthesize simpleProduct=_simpleProduct;
- (void).cxx_destruct;	// IMP=0x0000000100329fa8
- (_Bool)renderWithTile:(id)arg1;	// IMP=0x0000000100329ea4
- (void)configConstraints;	// IMP=0x0000000100329d8c
- (void)configComponents;	// IMP=0x0000000100329d18
- (id)initFloor;	// IMP=0x0000000100329b28

@end

