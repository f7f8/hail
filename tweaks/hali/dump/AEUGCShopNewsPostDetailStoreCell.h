//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UIButton, UIImageView, UILabel;

@interface AEUGCShopNewsPostDetailStoreCell : UICollectionViewCell
{
    UIImageView *_avatarImageView;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    UILabel *_subtitleLabel;	// 24 = 0x18
    UIButton *_followButton;	// 32 = 0x20
    UIButton *_visitStoreButton;	// 40 = 0x28
    CDUnknownBlockType _avatarHandler;	// 48 = 0x30
    CDUnknownBlockType _followHandler;	// 56 = 0x38
    CDUnknownBlockType _visitStoreHandler;	// 64 = 0x40
    id <AEUGCShopNewsPostDetailStoreCellViewModel> _viewModel;	// 72 = 0x48
}

@property(nonatomic) __weak id <AEUGCShopNewsPostDetailStoreCellViewModel> viewModel; // @synthesize viewModel=_viewModel;
@property(copy, nonatomic) CDUnknownBlockType visitStoreHandler; // @synthesize visitStoreHandler=_visitStoreHandler;
@property(copy, nonatomic) CDUnknownBlockType followHandler; // @synthesize followHandler=_followHandler;
@property(copy, nonatomic) CDUnknownBlockType avatarHandler; // @synthesize avatarHandler=_avatarHandler;
- (void).cxx_destruct;	// IMP=0x0000000100edb82c
- (void)bindModel:(id)arg1;	// IMP=0x0000000100eda490
- (void)visitStoreAction:(id)arg1;	// IMP=0x0000000100eda2e4
- (void)followAction:(id)arg1;	// IMP=0x0000000100eda2c8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100ed87d8

@end

