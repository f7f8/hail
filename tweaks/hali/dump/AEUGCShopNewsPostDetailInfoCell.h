//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UIImageView, UILabel, UIView;

@interface AEUGCShopNewsPostDetailInfoCell : UICollectionViewCell
{
    UIView *_topLine;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    UIView *_midLine;	// 24 = 0x18
    UILabel *_subTextLabel;	// 32 = 0x20
    UIView *_bottomSplitLeft;	// 40 = 0x28
    UIImageView *_bottomSplitCenterImageView;	// 48 = 0x30
    UIView *_bottomSplitRight;	// 56 = 0x38
    id <AEUGCShopNewsPostDetailInfoCellViewModel> _viewModel;	// 64 = 0x40
}

@property(nonatomic) __weak id <AEUGCShopNewsPostDetailInfoCellViewModel> viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;	// IMP=0x0000000100ef9a94
- (void)bindModel:(id)arg1;	// IMP=0x0000000100ef90c8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100ef7470

@end

