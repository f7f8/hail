//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel;

@interface AECardCouponEmailInfoCell : UITableViewCell
{
    UIImageView *emailIconView;	// 8 = 0x8
    UILabel *tipsInfoLabel;	// 16 = 0x10
    double tipsInfoHeight;	// 24 = 0x18
    UILabel *_emailAddress;	// 32 = 0x20
}

@property(retain, nonatomic) UILabel *emailAddress; // @synthesize emailAddress=_emailAddress;
- (void).cxx_destruct;	// IMP=0x000000010002d358
- (double)measureCellHeightWithLimitedWith:(double)arg1;	// IMP=0x000000010002d1a0
- (void)layoutSubviews;	// IMP=0x000000010002d024
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000010002cbf8

@end

