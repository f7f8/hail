//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEBaseTileCell.h"

@class UILabel;

@interface AETextTileCell : AEBaseTileCell
{
    UILabel *_label;	// 8 = 0x8
}

@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void).cxx_destruct;	// IMP=0x00000001009e14b4
- (void)prepareForReuse;	// IMP=0x00000001009e128c
- (void)renderWithTile:(id)arg1;	// IMP=0x00000001009e105c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001009e0b80

@end

