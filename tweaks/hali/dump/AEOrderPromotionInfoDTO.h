//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AFMoney, NSString;

@interface AEOrderPromotionInfoDTO : NSObject
{
    _Bool _isMobileSpecial;	// 8 = 0x8
    NSString *_promotionId;	// 16 = 0x10
    NSString *_promotionName;	// 24 = 0x18
    AFMoney *_discountAmount;	// 32 = 0x20
    AFMoney *_orderLimitAmount;	// 40 = 0x28
}

@property(retain, nonatomic) AFMoney *orderLimitAmount; // @synthesize orderLimitAmount=_orderLimitAmount;
@property(retain, nonatomic) AFMoney *discountAmount; // @synthesize discountAmount=_discountAmount;
@property(nonatomic) _Bool isMobileSpecial; // @synthesize isMobileSpecial=_isMobileSpecial;
@property(retain, nonatomic) NSString *promotionName; // @synthesize promotionName=_promotionName;
@property(retain, nonatomic) NSString *promotionId; // @synthesize promotionId=_promotionId;
- (void).cxx_destruct;	// IMP=0x0000000100559f9c

@end

