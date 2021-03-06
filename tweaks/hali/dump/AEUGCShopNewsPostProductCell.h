//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UIImageView, UILabel, UIView;

@interface AEUGCShopNewsPostProductCell : UICollectionViewCell
{
    UIImageView *_imageView;	// 8 = 0x8
    UILabel *_priceLabel;	// 16 = 0x10
    UILabel *_originPriceLabel;	// 24 = 0x18
    UIView *_containerView;	// 32 = 0x20
    id <AEUGCShopNewsPostProductCellViewModel> _viewModel;	// 40 = 0x28
    struct UIEdgeInsets _edgeInsets;	// 48 = 0x30
}

@property(nonatomic) __weak id <AEUGCShopNewsPostProductCellViewModel> viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;	// IMP=0x0000000100f06a84
- (void)bindModel:(id)arg1;	// IMP=0x0000000100f05c20
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100f047d4

@end

