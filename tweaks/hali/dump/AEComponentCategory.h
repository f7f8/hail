//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AETileAdapterView.h"

@class UIImageView, UILabel;

@interface AEComponentCategory : AETileAdapterView
{
    UIImageView *_imageView;	// 8 = 0x8
    UILabel *_label;	// 16 = 0x10
}

@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;	// IMP=0x00000001009d7924
- (void)prepareForReuse;	// IMP=0x00000001009d7810
- (void)configStyle;	// IMP=0x00000001009d77cc
- (id)init;	// IMP=0x00000001009d7694
- (_Bool)renderWithTile:(id)arg1;	// IMP=0x00000001009d7514
- (Class)viewModelClass;	// IMP=0x00000001009d7500

@end

