//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AECoinTaskItemDTO, UILabel;

@interface AECoinsDailyBreakContentView : UIView
{
    double _contentHeight;	// 8 = 0x8
    AECoinTaskItemDTO *_itemDTO;	// 16 = 0x10
    UILabel *_desLabel;	// 24 = 0x18
}

@property(retain, nonatomic) UILabel *desLabel; // @synthesize desLabel=_desLabel;
@property(retain, nonatomic) AECoinTaskItemDTO *itemDTO; // @synthesize itemDTO=_itemDTO;
@property(nonatomic) double contentHeight; // @synthesize contentHeight=_contentHeight;
- (void).cxx_destruct;	// IMP=0x00000001007f10a0
- (void)buildUI;	// IMP=0x00000001007f00d0
- (id)buildInnerView:(long long)arg1 withDTO:(id)arg2 withCouponDTO:(id)arg3;	// IMP=0x00000001007f003c
- (id)initWithItemDTO:(id)arg1;	// IMP=0x00000001007efe9c

@end

