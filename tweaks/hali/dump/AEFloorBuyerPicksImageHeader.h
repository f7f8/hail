//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AETileAdapterFloor.h"

@class AEComponentBuyerPicksImageHeader;

@interface AEFloorBuyerPicksImageHeader : AETileAdapterFloor
{
    AEComponentBuyerPicksImageHeader *_leftComponent;	// 8 = 0x8
    AEComponentBuyerPicksImageHeader *_righitComponent;	// 16 = 0x10
}

+ (Class)modelClass;	// IMP=0x00000001003104dc
+ (id)identifier;	// IMP=0x00000001003104b0
@property(retain, nonatomic) AEComponentBuyerPicksImageHeader *righitComponent; // @synthesize righitComponent=_righitComponent;
@property(retain, nonatomic) AEComponentBuyerPicksImageHeader *leftComponent; // @synthesize leftComponent=_leftComponent;
- (void).cxx_destruct;	// IMP=0x0000000100310fac
- (_Bool)renderWithTile:(id)arg1;	// IMP=0x0000000100310e18
- (void)layoutSubviews;	// IMP=0x0000000100310d8c
- (id)initFloor;	// IMP=0x00000001003104f0

@end

