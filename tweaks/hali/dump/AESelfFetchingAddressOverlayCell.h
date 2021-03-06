//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class AESelfFetchingAddressOverlayCellModel, AEStandardMailingAddressView, UIButton, UIScrollView;

@interface AESelfFetchingAddressOverlayCell : UICollectionViewCell
{
    AESelfFetchingAddressOverlayCellModel *_viewModel;	// 8 = 0x8
    id <AESelfFetchingAddressOverlayCellDelegate> _delegate;	// 16 = 0x10
    AEStandardMailingAddressView *_addressView;	// 24 = 0x18
    UIButton *_setButton;	// 32 = 0x20
    UIScrollView *_addressScrollView;	// 40 = 0x28
}

@property(retain, nonatomic) UIScrollView *addressScrollView; // @synthesize addressScrollView=_addressScrollView;
@property(retain, nonatomic) UIButton *setButton; // @synthesize setButton=_setButton;
@property(retain, nonatomic) AEStandardMailingAddressView *addressView; // @synthesize addressView=_addressView;
@property(nonatomic) __weak id <AESelfFetchingAddressOverlayCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AESelfFetchingAddressOverlayCellModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;	// IMP=0x00000001005f95c0
- (void)onSet:(id)arg1;	// IMP=0x00000001005f93ac
- (void)flashScrollIndicators;	// IMP=0x00000001005f92c0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001005f8258

@end

