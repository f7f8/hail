//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEBuyBaseCell.h"

@class UILabel;

@interface AEBuySelectLabelCell : AEBuyBaseCell
{
    UILabel *_label;	// 8 = 0x8
    CDUnknownBlockType _selectedBlock;	// 16 = 0x10
}

@property(copy, nonatomic) CDUnknownBlockType selectedBlock; // @synthesize selectedBlock=_selectedBlock;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void).cxx_destruct;	// IMP=0x000000010048d76c
- (void)handleTapGesture:(id)arg1;	// IMP=0x000000010048d68c
- (void)bindModel:(id)arg1;	// IMP=0x000000010048d58c
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000010048d010

@end

