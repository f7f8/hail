//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class AEStandardMailingAddressView, UILabel, UIView;

@interface AELogisticsAddressCell : UITableViewCell
{
    UILabel *_shipLabel;	// 8 = 0x8
    AEStandardMailingAddressView *_addressView;	// 16 = 0x10
    UIView *_sepratorLine1;	// 24 = 0x18
    UIView *_sepratorLine2;	// 32 = 0x20
    UIView *_sepratorLine3;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100120fb4
- (void)bindData:(id)arg1;	// IMP=0x000000010011fccc
- (void)setupUI;	// IMP=0x000000010011f838
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000010011f7e0

@end

