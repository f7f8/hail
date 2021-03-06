//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSMutableArray, UIButton, UILabel, UIView;

@interface AESearchFilterMultImageBaseCell : UITableViewCell
{
    UILabel *_titleLabel;	// 8 = 0x8
    UILabel *_tipLabel;	// 16 = 0x10
    NSMutableArray *_imageViewArray;	// 24 = 0x18
    UIView *_borderView;	// 32 = 0x20
    UIButton *_deleteBtn;	// 40 = 0x28
}

+ (double)heightWithViewModel:(id)arg1 displayWidth:(double)arg2;	// IMP=0x0000000100c975cc
@property(retain, nonatomic) UIButton *deleteBtn; // @synthesize deleteBtn=_deleteBtn;
@property(retain, nonatomic) UIView *borderView; // @synthesize borderView=_borderView;
@property(retain, nonatomic) NSMutableArray *imageViewArray; // @synthesize imageViewArray=_imageViewArray;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;	// IMP=0x0000000100c99e1c
- (void)deleteBtnTapped;	// IMP=0x0000000100c99cf0
- (void)bindDataWithTitle:(id)arg1 imageUrlArray:(id)arg2 displayWidth:(double)arg3;	// IMP=0x0000000100c98008
- (void)bindDataWithViewModel:(id)arg1 displayWidth:(double)arg2;	// IMP=0x0000000100c98004
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000100c975d8

@end

