//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEComponentHeader.h"

@class MASConstraint, UIImageView, UILabel;

@interface AEComponentHeaderStore : AEComponentHeader
{
    MASConstraint *_bottomConstraint;	// 8 = 0x8
    UIImageView *_storeImage;	// 16 = 0x10
    UILabel *_labelA;	// 24 = 0x18
    UILabel *_labelB;	// 32 = 0x20
}

@property(retain, nonatomic) UILabel *labelB; // @synthesize labelB=_labelB;
@property(retain, nonatomic) UILabel *labelA; // @synthesize labelA=_labelA;
@property(retain, nonatomic) UIImageView *storeImage; // @synthesize storeImage=_storeImage;
- (void).cxx_destruct;	// IMP=0x00000001009c5e48
- (_Bool)renderWithTile:(id)arg1;	// IMP=0x00000001009c58d0
- (void)resetFloorStyle;	// IMP=0x00000001009c5470
- (void)prepareForReuse;	// IMP=0x00000001009c5420
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001009c4840

@end

