//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AETileAdapterFloor.h"

@class UIButton, UIImageView, UILabel, UIView;

@interface AEPreSellerProductFloor : AETileAdapterFloor
{
    UIImageView *_productImageView;	// 8 = 0x8
    UILabel *_productOrigLabel;	// 16 = 0x10
    UILabel *_priceTitleLabel;	// 24 = 0x18
    UILabel *_productPriceLabel;	// 32 = 0x20
    UILabel *_productOrderLabel;	// 40 = 0x28
    UIButton *_bookingBtn;	// 48 = 0x30
    UIView *_lineView;	// 56 = 0x38
}

+ (Class)modelClass;	// IMP=0x00000001003fcc64
+ (id)identifier;	// IMP=0x00000001003fcc38
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIButton *bookingBtn; // @synthesize bookingBtn=_bookingBtn;
@property(retain, nonatomic) UILabel *productOrderLabel; // @synthesize productOrderLabel=_productOrderLabel;
@property(retain, nonatomic) UILabel *productPriceLabel; // @synthesize productPriceLabel=_productPriceLabel;
@property(retain, nonatomic) UILabel *priceTitleLabel; // @synthesize priceTitleLabel=_priceTitleLabel;
@property(retain, nonatomic) UILabel *productOrigLabel; // @synthesize productOrigLabel=_productOrigLabel;
@property(retain, nonatomic) UIImageView *productImageView; // @synthesize productImageView=_productImageView;
- (void).cxx_destruct;	// IMP=0x00000001003ff4cc
- (_Bool)renderWithTile:(id)arg1;	// IMP=0x00000001003feeec
- (void)drawDashLine:(id)arg1 lineLength:(int)arg2 lineSpacing:(int)arg3 lineColor:(id)arg4;	// IMP=0x00000001003fec00
- (void)layoutSubviews;	// IMP=0x00000001003feb5c
- (void)configConstraints;	// IMP=0x00000001003fd5d0
- (void)configComponents;	// IMP=0x00000001003fcd1c
- (id)initFloor;	// IMP=0x00000001003fcc78

@end

