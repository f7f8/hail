//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class AEUserTaskService, NSString, UIButton, UIImageView, UILabel, UIView, inviteeAwardsDTO;

@interface AETaskDetailCell : UITableViewCell
{
    UIView *taskCardBox;	// 8 = 0x8
    UIView *vLine;	// 16 = 0x10
    UIView *hLine;	// 24 = 0x18
    UIImageView *imageView;	// 32 = 0x20
    UILabel *priceLabel;	// 40 = 0x28
    UILabel *descLabel;	// 48 = 0x30
    UILabel *countLabel;	// 56 = 0x38
    AEUserTaskService *sendService;	// 64 = 0x40
    _Bool _presentMode;	// 72 = 0x48
    id <cellDelegate> _delegate;	// 80 = 0x50
    NSString *_from;	// 88 = 0x58
    inviteeAwardsDTO *_cellDto;	// 96 = 0x60
    UIButton *_sendBt;	// 104 = 0x68
}

@property(retain, nonatomic) UIButton *sendBt; // @synthesize sendBt=_sendBt;
@property(retain, nonatomic) inviteeAwardsDTO *cellDto; // @synthesize cellDto=_cellDto;
@property(retain, nonatomic) NSString *from; // @synthesize from=_from;
@property(nonatomic) _Bool presentMode; // @synthesize presentMode=_presentMode;
@property(nonatomic) __weak id <cellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x0000000100278c04
- (void)checkStatus:(int)arg1;	// IMP=0x00000001002786f0
- (void)doSend;	// IMP=0x000000010027764c
- (id)getCountText:(id)arg1 withEnable:(_Bool)arg2;	// IMP=0x0000000100277308
- (id)buildCountTxt:(id)arg1 remaining:(id)arg2;	// IMP=0x0000000100277118
- (id)buildDescTxt:(id)arg1;	// IMP=0x0000000100276ff4
- (void)bindData:(id)arg1;	// IMP=0x00000001002766f8
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000100273f5c

@end

