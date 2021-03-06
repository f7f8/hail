//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AEProductDetailOrderButtonPanelCoinAnimationView, AEProductDetailOrderButtonPanelCountDownView, AEProductDetailOrderButtonPanelInfoView, AEProductDetailOrderButtonPanelVM, UIButton;

@interface AEProductDetailOrderButtonPanel : UIView
{
    UIView *_singleLineView;	// 8 = 0x8
    UIButton *_storeButton;	// 16 = 0x10
    UIButton *_cartButton;	// 24 = 0x18
    UIButton *_orderButton;	// 32 = 0x20
    AEProductDetailOrderButtonPanelCoinAnimationView *_coinAnimationView;	// 40 = 0x28
    AEProductDetailOrderButtonPanelInfoView *_infoView;	// 48 = 0x30
    UIView *_emptyLayoutView;	// 56 = 0x38
    AEProductDetailOrderButtonPanelCountDownView *_countDownView;	// 64 = 0x40
    AEProductDetailOrderButtonPanelVM *_viewModel;	// 72 = 0x48
}

@property(retain, nonatomic) AEProductDetailOrderButtonPanelVM *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) AEProductDetailOrderButtonPanelCountDownView *countDownView; // @synthesize countDownView=_countDownView;
@property(retain, nonatomic) UIView *emptyLayoutView; // @synthesize emptyLayoutView=_emptyLayoutView;
@property(retain, nonatomic) AEProductDetailOrderButtonPanelInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) AEProductDetailOrderButtonPanelCoinAnimationView *coinAnimationView; // @synthesize coinAnimationView=_coinAnimationView;
@property(retain, nonatomic) UIButton *orderButton; // @synthesize orderButton=_orderButton;
@property(retain, nonatomic) UIButton *cartButton; // @synthesize cartButton=_cartButton;
@property(retain, nonatomic) UIButton *storeButton; // @synthesize storeButton=_storeButton;
@property(retain, nonatomic) UIView *singleLineView; // @synthesize singleLineView=_singleLineView;
- (void).cxx_destruct;	// IMP=0x00000001005b4590
- (void)orderButtonTouched:(id)arg1;	// IMP=0x00000001005b4240
- (void)cartButtonTouched:(id)arg1;	// IMP=0x00000001005b4178
- (void)shopButtonTouched:(id)arg1;	// IMP=0x00000001005b40b0
- (void)bindModel:(id)arg1;	// IMP=0x00000001005b394c
- (void)remakeDisplayContentForView:(id)arg1;	// IMP=0x00000001005b2b94
- (void)showTopSingleLineView;	// IMP=0x00000001005b2834
- (void)makeConstrains;	// IMP=0x00000001005b2658
- (void)layoutSubviews;	// IMP=0x00000001005b23d8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001005b1b34

@end

