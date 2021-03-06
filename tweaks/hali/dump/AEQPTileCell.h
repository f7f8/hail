//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEBaseTileCell.h"

#import "TileEventHandler.h"

@class NSString, UIImageView, UILabel;

@interface AEQPTileCell : AEBaseTileCell <TileEventHandler>
{
    UIImageView *_productImageView;	// 8 = 0x8
    UILabel *_price1;	// 16 = 0x10
    UILabel *_price2;	// 24 = 0x18
}

@property(retain, nonatomic) UILabel *price2; // @synthesize price2=_price2;
@property(retain, nonatomic) UILabel *price1; // @synthesize price1=_price1;
@property(retain, nonatomic) UIImageView *productImageView; // @synthesize productImageView=_productImageView;
- (void).cxx_destruct;	// IMP=0x00000001004042bc
- (void)handleEvent:(id)arg1;	// IMP=0x000000010040405c
- (void)prepareForReuse;	// IMP=0x0000000100403f78
- (void)renderWithTile:(id)arg1;	// IMP=0x0000000100403b5c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100403458

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

