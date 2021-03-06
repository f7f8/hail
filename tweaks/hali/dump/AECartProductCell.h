//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AECartSelectionBaseCell.h"

@class AECartProductCellViewModel, AECartQuantityStepper, MASConstraint, UIButton, UIImageView, UILabel, UIView;

@interface AECartProductCell : AECartSelectionBaseCell
{
    AECartProductCellViewModel *_viewModel;	// 8 = 0x8
    id <AECartProductCellDelegate> _delegate;	// 16 = 0x10
    UIImageView *_productImageView;	// 24 = 0x18
    UILabel *_productNameLabel;	// 32 = 0x20
    UILabel *_productPriceLabel;	// 40 = 0x28
    UILabel *_productSKULabel;	// 48 = 0x30
    UILabel *_productShippingLabel;	// 56 = 0x38
    AECartQuantityStepper *_quantityStepper;	// 64 = 0x40
    UILabel *_msgLabel;	// 72 = 0x48
    UIButton *_findSimilarButton;	// 80 = 0x50
    UIButton *_removeButton;	// 88 = 0x58
    UIView *_topLine;	// 96 = 0x60
    UIView *_bottomLine;	// 104 = 0x68
    UILabel *_bigSalePriceLabel;	// 112 = 0x70
    MASConstraint *_bigSalePriceLabelHeightConstraint;	// 120 = 0x78
}

@property(retain, nonatomic) MASConstraint *bigSalePriceLabelHeightConstraint; // @synthesize bigSalePriceLabelHeightConstraint=_bigSalePriceLabelHeightConstraint;
@property(retain, nonatomic) UILabel *bigSalePriceLabel; // @synthesize bigSalePriceLabel=_bigSalePriceLabel;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) UIButton *removeButton; // @synthesize removeButton=_removeButton;
@property(retain, nonatomic) UIButton *findSimilarButton; // @synthesize findSimilarButton=_findSimilarButton;
@property(retain, nonatomic) UILabel *msgLabel; // @synthesize msgLabel=_msgLabel;
@property(retain, nonatomic) AECartQuantityStepper *quantityStepper; // @synthesize quantityStepper=_quantityStepper;
@property(retain, nonatomic) UILabel *productShippingLabel; // @synthesize productShippingLabel=_productShippingLabel;
@property(retain, nonatomic) UILabel *productSKULabel; // @synthesize productSKULabel=_productSKULabel;
@property(retain, nonatomic) UILabel *productPriceLabel; // @synthesize productPriceLabel=_productPriceLabel;
@property(retain, nonatomic) UILabel *productNameLabel; // @synthesize productNameLabel=_productNameLabel;
@property(retain, nonatomic) UIImageView *productImageView; // @synthesize productImageView=_productImageView;
@property(nonatomic) __weak id <AECartProductCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AECartProductCellViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;	// IMP=0x00000001004a6c0c
- (void)findSimilarProducts:(id)arg1;	// IMP=0x00000001004a6778
- (void)removeProduct:(id)arg1;	// IMP=0x00000001004a6680
- (void)viewProductDetail:(id)arg1;	// IMP=0x00000001004a6588
- (void)selectShippingService:(id)arg1;	// IMP=0x00000001004a6490
- (void)selectProduct;	// IMP=0x00000001004a6398
- (id)msgTextWithMsg:(id)arg1;	// IMP=0x00000001004a6030
@property(readonly, nonatomic) struct CGRect productImageFrame;
- (void)setBottomLineShow:(_Bool)arg1;	// IMP=0x00000001004a5578
- (void)setTopLineShow:(_Bool)arg1;	// IMP=0x00000001004a509c
- (void)updateConstrainsWithoutMsg;	// IMP=0x00000001004a4ff4
- (void)updateConstrainsWithMsg;	// IMP=0x00000001004a404c
- (void)updateConstraintsForBigSalePriceHidden:(_Bool)arg1;	// IMP=0x00000001004a3ff4
- (void)updateSKUConstraints;	// IMP=0x00000001004a3d30
- (void)updateStyleForSelectionEnable:(_Bool)arg1;	// IMP=0x00000001004a3ac0
- (void)setProductName:(id)arg1 productSupportShoppingCoupon:(_Bool)arg2 productSelectionEnable:(_Bool)arg3 productIsBigSaleItem:(_Bool)arg4 bigSaleBrand:(id)arg5 bigSaleBrandBgColor:(id)arg6 bigSaleLogoImgURL:(id)arg7 bigSaleItemWidth:(id)arg8 bigSaleItemHeight:(id)arg9;	// IMP=0x00000001004a3028
- (void)prepareForReuse;	// IMP=0x00000001004a2418
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000010049f778

@end

