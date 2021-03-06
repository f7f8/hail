//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "AESessionUserChangeTask.h"

@class AEStoreGetCouponSingleCouponViewModel, NSString, UIButton, UIImageView, UILabel;

@interface AEStoreSingleCouponView : UIView <AESessionUserChangeTask>
{
    UIImageView *_couponView;	// 8 = 0x8
    UILabel *_couponValueLbl;	// 16 = 0x10
    UILabel *_couponLimitLbl;	// 24 = 0x18
    UILabel *_stockLbl;	// 32 = 0x20
    UIButton *_getCouponBtn;	// 40 = 0x28
    _Bool _needAutoGetCouponAfterLogin;	// 48 = 0x30
    AEStoreGetCouponSingleCouponViewModel *_couponVM;	// 56 = 0x38
}

@property(nonatomic) __weak AEStoreGetCouponSingleCouponViewModel *couponVM; // @synthesize couponVM=_couponVM;
@property(nonatomic) _Bool needAutoGetCouponAfterLogin; // @synthesize needAutoGetCouponAfterLogin=_needAutoGetCouponAfterLogin;
- (void).cxx_destruct;	// IMP=0x0000000100423124
- (void)getCoupon:(id)arg1;	// IMP=0x0000000100422b40
- (void)execute:(unsigned long long)arg1;	// IMP=0x0000000100422ab4
- (void)bindModel:(id)arg1;	// IMP=0x0000000100421e54
- (void)setupConstraints;	// IMP=0x0000000100421070
- (id)init;	// IMP=0x0000000100420a08

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

