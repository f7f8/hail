//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UILabel;

@interface AVFSDetailTableCell : UITableViewCell
{
    UILabel *_nameLabel;	// 8 = 0x8
    UILabel *_detailLabel;	// 16 = 0x10
}

@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
- (void).cxx_destruct;	// IMP=0x00000001011aa24c
- (void)layoutSubviews;	// IMP=0x00000001011aa0c4
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000001011a9edc

@end

