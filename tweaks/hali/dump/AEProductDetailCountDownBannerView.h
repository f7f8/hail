//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEProductDetailBgImageBannerView.h"

@class AECountDownView, AEHTMLDescriptionLabel, UILabel;

@interface AEProductDetailCountDownBannerView : AEProductDetailBgImageBannerView
{
    UILabel *_titleLabel;	// 8 = 0x8
    UILabel *_subTitleLabel;	// 16 = 0x10
    AECountDownView *_countDownView;	// 24 = 0x18
    AEHTMLDescriptionLabel *_descriptionLabel;	// 32 = 0x20
}

@property(retain, nonatomic) AEHTMLDescriptionLabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) AECountDownView *countDownView; // @synthesize countDownView=_countDownView;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;	// IMP=0x000000010059f1cc
- (void)bindModel:(id)arg1;	// IMP=0x000000010059e9c8
- (id)descriptionAttributes;	// IMP=0x000000010059e8d4
- (void)configLabels;	// IMP=0x000000010059d4d0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010059d480

@end

