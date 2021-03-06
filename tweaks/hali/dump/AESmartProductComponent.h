//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AETileAdapterView.h"

@class AEAutolayoutLabel, UIImageView;

@interface AESmartProductComponent : AETileAdapterView
{
    _Bool _borderEnabled;	// 8 = 0x8
    UIImageView *_product;	// 16 = 0x10
    AEAutolayoutLabel *_prompt1;	// 24 = 0x18
    AEAutolayoutLabel *_prompt2;	// 32 = 0x20
}

@property(nonatomic) _Bool borderEnabled; // @synthesize borderEnabled=_borderEnabled;
@property(retain, nonatomic) AEAutolayoutLabel *prompt2; // @synthesize prompt2=_prompt2;
@property(retain, nonatomic) AEAutolayoutLabel *prompt1; // @synthesize prompt1=_prompt1;
@property(retain, nonatomic) UIImageView *product; // @synthesize product=_product;
- (void).cxx_destruct;	// IMP=0x00000001009e043c
- (_Bool)renderWithTile:(id)arg1;	// IMP=0x00000001009e020c
- (void)prepareForReuse;	// IMP=0x00000001009e01bc
- (void)configConstraints;	// IMP=0x00000001009dfad4
- (void)configSubviews;	// IMP=0x00000001009df784
- (void)setBackgroundColor:(id)arg1;	// IMP=0x00000001009df578
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001009df4d4

@end

