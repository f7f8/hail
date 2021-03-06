//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUIViewController.h"

@class AEBookSaleSuccessInfoDTO, UIButton, UIImageView, UILabel, UIView;

@interface AEBookSaleSuccessVC : AEUIViewController
{
    UIImageView *_logoView;	// 8 = 0x8
    UILabel *_infoLabel;	// 16 = 0x10
    UILabel *_paymentLabel;	// 24 = 0x18
    UILabel *_amountLabel;	// 32 = 0x20
    UILabel *_descLabel;	// 40 = 0x28
    UILabel *_additionalDescLabel;	// 48 = 0x30
    UIView *_separator;	// 56 = 0x38
    UIButton *_upperButton;	// 64 = 0x40
    UIButton *_bottomButton;	// 72 = 0x48
    AEBookSaleSuccessInfoDTO *_successInfo;	// 80 = 0x50
}

@property(retain, nonatomic) AEBookSaleSuccessInfoDTO *successInfo; // @synthesize successInfo=_successInfo;
- (void).cxx_destruct;	// IMP=0x0000000100482e58
- (void)onBottomButton:(id)arg1;	// IMP=0x0000000100482dc0
- (void)onUpperButton:(id)arg1;	// IMP=0x0000000100482d34
- (void)setupUI;	// IMP=0x0000000100480570
- (void)viewDidLoad;	// IMP=0x0000000100480454
- (id)initWithParam:(id)arg1;	// IMP=0x00000001004803b4

@end

