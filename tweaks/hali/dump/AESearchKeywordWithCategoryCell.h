//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "AESearchPanelCellProtocol.h"

@class AESearchKeywordCellModel, NSString, UIButton, UILabel;

@interface AESearchKeywordWithCategoryCell : UITableViewCell <AESearchPanelCellProtocol>
{
    CDUnknownBlockType eventCallBlock;	// 8 = 0x8
    id <AESearchKeywordWithCategoryCellDelegate> _delegate;	// 16 = 0x10
    UILabel *_keywordsLabel;	// 24 = 0x18
    UILabel *_categoryLabel;	// 32 = 0x20
    UIButton *_accessoryButton;	// 40 = 0x28
    AESearchKeywordCellModel *_cellModel;	// 48 = 0x30
}

@property(retain, nonatomic) AESearchKeywordCellModel *cellModel; // @synthesize cellModel=_cellModel;
@property(retain, nonatomic) UIButton *accessoryButton; // @synthesize accessoryButton=_accessoryButton;
@property(retain, nonatomic) UILabel *categoryLabel; // @synthesize categoryLabel=_categoryLabel;
@property(retain, nonatomic) UILabel *keywordsLabel; // @synthesize keywordsLabel=_keywordsLabel;
@property(nonatomic) __weak id <AESearchKeywordWithCategoryCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType eventCallBlock; // @synthesize eventCallBlock;
- (void).cxx_destruct;	// IMP=0x0000000100bd6f54
- (id)getAttributeString:(id)arg1 currentInput:(id)arg2;	// IMP=0x0000000100bd6c48
- (void)actionButtonClicked:(id)arg1;	// IMP=0x0000000100bd6aa0
- (void)eventCallBack:(CDUnknownBlockType)arg1;	// IMP=0x0000000100bd6a94
- (void)bindKeywordCellModel:(id)arg1 userInput:(id)arg2 rightImageName:(id)arg3;	// IMP=0x0000000100bd6380
- (void)bindData:(id)arg1;	// IMP=0x0000000100bd6294
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000100bd4f60

// Remaining properties
@property(nonatomic) _Bool canEdit;
@property(retain, nonatomic) Class clz;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) id model;
@property(readonly) Class superclass;

@end

