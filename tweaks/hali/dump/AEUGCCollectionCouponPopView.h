//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AEUGCCouponView, UIButton, UILabel;

@interface AEUGCCollectionCouponPopView : UIView
{
    AEUGCCouponView *_couponView;	// 8 = 0x8
    UIButton *_leftButton;	// 16 = 0x10
    UIButton *_rightButton;	// 24 = 0x18
    id <AEUGCCollectionCouponPopViewDelegate> _delegate;	// 32 = 0x20
    UILabel *_titleLabel;	// 40 = 0x28
    UILabel *_desLabel;	// 48 = 0x30
    UIButton *_closeButton;	// 56 = 0x38
}

@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UILabel *desLabel; // @synthesize desLabel=_desLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <AEUGCCollectionCouponPopViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UIButton *leftButton; // @synthesize leftButton=_leftButton;
@property(retain, nonatomic) AEUGCCouponView *couponView; // @synthesize couponView=_couponView;
- (void).cxx_destruct;	// IMP=0x0000000100670d50
- (void)closeAction:(id)arg1;	// IMP=0x0000000100670b24
- (void)leftButtonAction:(id)arg1;	// IMP=0x0000000100670a7c
- (void)sizeToFit;	// IMP=0x0000000100670180
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010066ed88

@end

