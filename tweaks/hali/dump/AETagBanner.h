//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AEBigSaleResource, AFMoney, NSNumber;

@interface AETagBanner : NSObject
{
    AEBigSaleResource *_bigSaleResource;	// 8 = 0x8
    NSNumber *_bigSaleStatus;	// 16 = 0x10
    NSNumber *_leftTime;	// 24 = 0x18
    NSNumber *_previewDiscount;	// 32 = 0x20
    AFMoney *_previewMinPrice;	// 40 = 0x28
}

@property(retain, nonatomic) AFMoney *previewMinPrice; // @synthesize previewMinPrice=_previewMinPrice;
@property(retain, nonatomic) NSNumber *previewDiscount; // @synthesize previewDiscount=_previewDiscount;
@property(retain, nonatomic) NSNumber *leftTime; // @synthesize leftTime=_leftTime;
@property(retain, nonatomic) NSNumber *bigSaleStatus; // @synthesize bigSaleStatus=_bigSaleStatus;
@property(retain, nonatomic) AEBigSaleResource *bigSaleResource; // @synthesize bigSaleResource=_bigSaleResource;
- (void).cxx_destruct;	// IMP=0x0000000100871f10

@end

