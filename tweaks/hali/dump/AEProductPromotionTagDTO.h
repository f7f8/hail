//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AEProductPromotionTagDTO : NSObject
{
    _Bool _shoppingCoupon;	// 8 = 0x8
    _Bool _storeCoupon;	// 9 = 0x9
    _Bool _fixedDiscount;	// 10 = 0xa
    _Bool _fixedFreeShipping;	// 11 = 0xb
    NSString *_fixedFreeShippingTip;	// 16 = 0x10
}

+ (id)replacedKeyFromPropertyName;	// IMP=0x00000001005a7388
@property(retain, nonatomic) NSString *fixedFreeShippingTip; // @synthesize fixedFreeShippingTip=_fixedFreeShippingTip;
@property(nonatomic) _Bool fixedFreeShipping; // @synthesize fixedFreeShipping=_fixedFreeShipping;
@property(nonatomic) _Bool fixedDiscount; // @synthesize fixedDiscount=_fixedDiscount;
@property(nonatomic) _Bool storeCoupon; // @synthesize storeCoupon=_storeCoupon;
@property(nonatomic) _Bool shoppingCoupon; // @synthesize shoppingCoupon=_shoppingCoupon;
- (void).cxx_destruct;	// IMP=0x00000001005a75cc
@property(readonly, nonatomic) NSString *fixedFreeShippingTipForDisplay;
@property(readonly, nonatomic) _Bool hasAnyPromotion;

@end

