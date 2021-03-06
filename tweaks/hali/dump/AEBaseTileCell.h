//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TileCell.h"

#import "AETileDisplayDelegate.h"

@class CAGradientLayer, NSString, UIImageView, UILabel;

@interface AEBaseTileCell : TileCell <AETileDisplayDelegate>
{
    _Bool _inTileCollectionView;	// 8 = 0x8
    UILabel *_debugLabel;	// 16 = 0x10
    CAGradientLayer *_gradientBackground;	// 24 = 0x18
    UIImageView *_backgroundImageView;	// 32 = 0x20
}

@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) CAGradientLayer *gradientBackground; // @synthesize gradientBackground=_gradientBackground;
@property(retain, nonatomic) UILabel *debugLabel; // @synthesize debugLabel=_debugLabel;
@property(nonatomic) _Bool inTileCollectionView; // @synthesize inTileCollectionView=_inTileCollectionView;
- (void).cxx_destruct;	// IMP=0x0000000100a0999c
- (void)prepareForReuse;	// IMP=0x0000000100a09324
- (void)layoutSubviews;	// IMP=0x0000000100a09254
- (void)renderWithTile:(id)arg1;	// IMP=0x0000000100a08b48
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100a08a70

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

