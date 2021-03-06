//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface AEUGCStoreClubCardBannerView : UIView
{
    UIImageView *_backgroundImageView;	// 8 = 0x8
    UIView *_maskView;	// 16 = 0x10
    UIImageView *_rankingImageView;	// 24 = 0x18
    UILabel *_rankingLabel;	// 32 = 0x20
    UIImageView *_iconImageView;	// 40 = 0x28
    id <AEUGCStoreClubCardBannerViewModel> _viewModel;	// 48 = 0x30
}

@property(nonatomic) __weak id <AEUGCStoreClubCardBannerViewModel> viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;	// IMP=0x0000000100ef4e34
- (void)setIconImageUrl:(id)arg1;	// IMP=0x0000000100ef4aa8
- (void)setRanking:(long long)arg1;	// IMP=0x0000000100ef495c
- (void)setBannerImageUrl:(id)arg1;	// IMP=0x0000000100ef45c8
- (void)bindModel:(id)arg1;	// IMP=0x0000000100ef43d8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100ef34f4

@end

