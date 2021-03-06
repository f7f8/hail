//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUGCHomeHozSliderItem.h"

@class AEImageTileComponent, AETextTileComponent, UIImageView, UILabel, UIView;

@interface AEUGCHomeShowYourIdeaItem : AEUGCHomeHozSliderItem
{
    UIImageView *_bannerImageView;	// 8 = 0x8
    UIView *_maskView;	// 16 = 0x10
    UILabel *_imageTitleLabel;	// 24 = 0x18
    UIView *_subtitleView;	// 32 = 0x20
    UIImageView *_iconImageView;	// 40 = 0x28
    UILabel *_imageSubtitleLabel;	// 48 = 0x30
    AETextTileComponent *_titleViewModel;	// 56 = 0x38
    AETextTileComponent *_imageSubtitleViewModel;	// 64 = 0x40
    AEImageTileComponent *_imageViewModel;	// 72 = 0x48
    AEImageTileComponent *_iconImageViewModel;	// 80 = 0x50
}

@property(retain, nonatomic) AEImageTileComponent *iconImageViewModel; // @synthesize iconImageViewModel=_iconImageViewModel;
@property(retain, nonatomic) AEImageTileComponent *imageViewModel; // @synthesize imageViewModel=_imageViewModel;
@property(retain, nonatomic) AETextTileComponent *imageSubtitleViewModel; // @synthesize imageSubtitleViewModel=_imageSubtitleViewModel;
@property(retain, nonatomic) AETextTileComponent *titleViewModel; // @synthesize titleViewModel=_titleViewModel;
@property(retain, nonatomic) UILabel *imageSubtitleLabel; // @synthesize imageSubtitleLabel=_imageSubtitleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIView *subtitleView; // @synthesize subtitleView=_subtitleView;
@property(retain, nonatomic) UILabel *imageTitleLabel; // @synthesize imageTitleLabel=_imageTitleLabel;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIImageView *bannerImageView; // @synthesize bannerImageView=_bannerImageView;
- (void).cxx_destruct;	// IMP=0x0000000100d91cac
- (void)configConstraints;	// IMP=0x0000000100d8fe60
- (id)initWithItemDTO:(id)arg1 withWidth:(double)arg2;	// IMP=0x0000000100d8f6b4

@end

