//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class AEAfterSaleServiceWorkFlowView, NSMutableArray, UILabel, UIView;

@interface AEAfterSaleServiceDescriptionCell : UITableViewCell
{
    UIView *_splitView;	// 8 = 0x8
    UILabel *_moreIntroLbl;	// 16 = 0x10
    UILabel *_howToUseLbl;	// 24 = 0x18
    AEAfterSaleServiceWorkFlowView *_howToUseView;	// 32 = 0x20
    NSMutableArray *_serviceDesViewArr;	// 40 = 0x28
}

+ (double)cellHeight:(id)arg1;	// IMP=0x0000000100476d10
- (void).cxx_destruct;	// IMP=0x0000000100476e78
- (void)bindData:(id)arg1;	// IMP=0x00000001004761d0
- (void)configConstraints;	// IMP=0x0000000100474fb0
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000100474a5c

@end

