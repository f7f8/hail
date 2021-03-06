//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface AEGiftcardHeaderFilterView : UIView
{
    UILabel *_currentCategoryLabel;	// 8 = 0x8
    UIImageView *_indicatorImageView;	// 16 = 0x10
    UIView *_dividerViewTop;	// 24 = 0x18
    UIView *_dividerViewBottom;	// 32 = 0x20
    long long _indicatorDirection;	// 40 = 0x28
    long long _transactionType;	// 48 = 0x30
}

@property(nonatomic) long long transactionType; // @synthesize transactionType=_transactionType;
@property(nonatomic) long long indicatorDirection; // @synthesize indicatorDirection=_indicatorDirection;
- (void).cxx_destruct;	// IMP=0x0000000100115e78
- (void)setupDividerView;	// IMP=0x00000001001154c8
- (void)setupFilterLabel;	// IMP=0x0000000100115068
- (void)setupIndicatorImageView;	// IMP=0x0000000100114d74
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100114c94

@end

