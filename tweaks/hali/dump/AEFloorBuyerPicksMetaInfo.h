//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AETileAdapterFloor.h"

#import "AEAddWishListCommandProtocol.h"

@class AEComponentPaddingLabel, NSString, UIButton, UILabel;

@interface AEFloorBuyerPicksMetaInfo : AETileAdapterFloor <AEAddWishListCommandProtocol>
{
    UILabel *_label;	// 8 = 0x8
    UIButton *_buttonImage;	// 16 = 0x10
    AEComponentPaddingLabel *_buttonLabel;	// 24 = 0x18
}

+ (Class)modelClass;	// IMP=0x00000001003139c4
+ (id)identifier;	// IMP=0x0000000100313998
@property(retain, nonatomic) AEComponentPaddingLabel *buttonLabel; // @synthesize buttonLabel=_buttonLabel;
@property(retain, nonatomic) UIButton *buttonImage; // @synthesize buttonImage=_buttonImage;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void).cxx_destruct;	// IMP=0x0000000100314aa0
- (void)addWishAction:(id)arg1;	// IMP=0x0000000100314818
- (_Bool)renderWithTile:(id)arg1;	// IMP=0x0000000100314690
- (void)setupConstriants;	// IMP=0x0000000100313f38
- (id)initFloor;	// IMP=0x00000001003139d8
- (void)removeWishList;	// IMP=0x00000001003138cc
- (void)addWishList:(id)arg1;	// IMP=0x000000010031380c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

