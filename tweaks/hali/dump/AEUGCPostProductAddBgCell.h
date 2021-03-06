//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UIButton, UIImageView;

@interface AEUGCPostProductAddBgCell : UICollectionViewCell
{
    UIImageView *_bgImageView;	// 8 = 0x8
    UIButton *_editBgImageButton;	// 16 = 0x10
    CDUnknownBlockType _addImageAction;	// 24 = 0x18
    CDUnknownBlockType _editImageAction;	// 32 = 0x20
    id <AEUGCPostProductAddBgCellModelProtocol> _model;	// 40 = 0x28
}

@property(nonatomic) __weak id <AEUGCPostProductAddBgCellModelProtocol> model; // @synthesize model=_model;
@property(copy, nonatomic) CDUnknownBlockType editImageAction; // @synthesize editImageAction=_editImageAction;
@property(copy, nonatomic) CDUnknownBlockType addImageAction; // @synthesize addImageAction=_addImageAction;
@property(readonly, nonatomic) UIButton *editBgImageButton; // @synthesize editBgImageButton=_editBgImageButton;
@property(readonly, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
- (void).cxx_destruct;	// IMP=0x0000000100e1d990
- (void)editBgImageAction:(id)arg1;	// IMP=0x0000000100e1d894
- (void)configAutoLayout;	// IMP=0x0000000100e1d480
- (void)bindModel:(id)arg1;	// IMP=0x0000000100e1d100
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100e1cd74

@end

