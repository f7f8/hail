//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UIButton, UIImageView, UILabel;

@interface AEUGCHFDiscoverMoreCollectionViewCell : UICollectionViewCell
{
    UIImageView *_iconImgView;	// 8 = 0x8
    UIButton *_gotoFanzoneButton;	// 16 = 0x10
    UILabel *_descLabel;	// 24 = 0x18
}

@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UIButton *gotoFanzoneButton; // @synthesize gotoFanzoneButton=_gotoFanzoneButton;
@property(retain, nonatomic) UIImageView *iconImgView; // @synthesize iconImgView=_iconImgView;
- (void).cxx_destruct;	// IMP=0x00000001006af044
- (void)gotoAction:(id)arg1;	// IMP=0x00000001006aeefc
- (void)awakeFromNib;	// IMP=0x00000001006aec50

@end

