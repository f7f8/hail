//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AETileAdapterFloor.h"

@class UIImageView, UILabel;

@interface AEFloorStorePreferentialcombo : AETileAdapterFloor
{
    UILabel *_titleLb;	// 8 = 0x8
    UIImageView *_iconIV;	// 16 = 0x10
    UIImageView *discountIco;	// 24 = 0x18
    UIImageView *couponIco;	// 32 = 0x20
    UIImageView *shoppingCouponIco;	// 40 = 0x28
}

+ (Class)modelClass;	// IMP=0x0000000100d773e8
+ (id)identifier;	// IMP=0x0000000100d773bc
- (void).cxx_destruct;	// IMP=0x0000000100d79440
- (_Bool)renderWithTile:(id)arg1;	// IMP=0x0000000100d78a38
- (void)configConstraints;	// IMP=0x0000000100d78a34
- (void)configComponents;	// IMP=0x0000000100d774a4
- (id)initFloor;	// IMP=0x0000000100d773fc

@end

