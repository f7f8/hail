//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEBaseTileComponent.h"

@class AFMoney, NSDate, NSString;

@interface AEGetCouponResultComponnentViewModel : AEBaseTileComponent
{
    NSString *_title;	// 8 = 0x8
    NSString *_des;	// 16 = 0x10
    NSDate *_startDate;	// 24 = 0x18
    NSDate *_endDate;	// 32 = 0x20
    AFMoney *_couponAmount;	// 40 = 0x28
}

@property(retain, nonatomic) AFMoney *couponAmount; // @synthesize couponAmount=_couponAmount;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) NSString *des; // @synthesize des=_des;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;	// IMP=0x00000001003b4c24

@end

