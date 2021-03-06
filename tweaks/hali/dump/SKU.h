//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AFMoney, NSDictionary, NSNumber, NSString;

@interface SKU : NSObject
{
    _Bool isActivityProduct;	// 8 = 0x8
    NSString *skuAttr;	// 16 = 0x10
    int skuBulkOrder;	// 24 = 0x18
    _Bool isSkuBulk;	// 28 = 0x1c
    int skuStock;	// 32 = 0x20
    NSString *skuPerPiecePrice;	// 40 = 0x28
    NSDictionary *skuActivityPriceVO;	// 48 = 0x30
    NSNumber *productId;	// 56 = 0x38
    NSString *skuPrice;	// 64 = 0x40
    int deliveryTime;	// 72 = 0x48
    NSString *skuImage;	// 80 = 0x50
    int skuBulkDiscount;	// 88 = 0x58
    NSString *skuBulkPrice;	// 96 = 0x60
    NSNumber *sellerAdminSeq;	// 104 = 0x68
    _Bool _coinsEnoughs;	// 112 = 0x70
    AFMoney *_skuAmount;	// 120 = 0x78
    AFMoney *_skuBulkAmount;	// 128 = 0x80
    AFMoney *_previewSkuAmount;	// 136 = 0x88
    AFMoney *_previewSkuBulkAmount;	// 144 = 0x90
    long long _coinsCost;	// 152 = 0x98
}

@property(nonatomic) _Bool coinsEnoughs; // @synthesize coinsEnoughs=_coinsEnoughs;
@property(nonatomic) long long coinsCost; // @synthesize coinsCost=_coinsCost;
@property(retain, nonatomic) AFMoney *previewSkuBulkAmount; // @synthesize previewSkuBulkAmount=_previewSkuBulkAmount;
@property(retain, nonatomic) AFMoney *previewSkuAmount; // @synthesize previewSkuAmount=_previewSkuAmount;
@property(retain, nonatomic) AFMoney *skuBulkAmount; // @synthesize skuBulkAmount=_skuBulkAmount;
@property(retain, nonatomic) AFMoney *skuAmount; // @synthesize skuAmount=_skuAmount;
@property(retain, nonatomic) NSNumber *sellerAdminSeq; // @synthesize sellerAdminSeq;
@property(copy, nonatomic) NSString *skuBulkPrice; // @synthesize skuBulkPrice;
@property(nonatomic) int skuBulkDiscount; // @synthesize skuBulkDiscount;
@property(copy, nonatomic) NSString *skuImage; // @synthesize skuImage;
@property(nonatomic) int deliveryTime; // @synthesize deliveryTime;
@property(copy, nonatomic) NSString *skuPrice; // @synthesize skuPrice;
@property(retain, nonatomic) NSNumber *productId; // @synthesize productId;
@property(retain, nonatomic) NSDictionary *skuActivityPriceVO; // @synthesize skuActivityPriceVO;
@property(copy, nonatomic) NSString *skuPerPiecePrice; // @synthesize skuPerPiecePrice;
@property(nonatomic) int skuStock; // @synthesize skuStock;
@property(nonatomic) _Bool isSkuBulk; // @synthesize isSkuBulk;
@property(nonatomic) int skuBulkOrder; // @synthesize skuBulkOrder;
@property(copy, nonatomic) NSString *skuAttr; // @synthesize skuAttr;
@property(nonatomic) _Bool isActivityProduct; // @synthesize isActivityProduct;
- (void).cxx_destruct;	// IMP=0x000000010063b398
- (id)fetchDisplaySubTotal:(long long)arg1;	// IMP=0x000000010063af3c
- (int)fetchDisplayStock;	// IMP=0x000000010063ae84
- (id)fetchOriginPrice;	// IMP=0x000000010063ae30
- (id)fetchPrice:(long long)arg1;	// IMP=0x000000010063abc0
- (id)fetchPreviewPrice:(long long)arg1;	// IMP=0x000000010063a8f8
- (id)fetchPreviewDisplayPrice:(long long)arg1;	// IMP=0x000000010063a7f4
- (id)fetchDisplayPrice:(long long)arg1;	// IMP=0x000000010063a7a0

@end

