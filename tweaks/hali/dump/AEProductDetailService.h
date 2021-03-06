//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AEProductDetailService : NSObject
{
}

- (void)loadProductDescriptopnsFromCDNURL:(id)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x00000001005ca494
- (void)getProductDetailDesc:(id)arg1 sellerMemberId:(id)arg2 language:(id)arg3 preview:(_Bool)arg4 success:(CDUnknownBlockType)arg5 error:(CDUnknownBlockType)arg6;	// IMP=0x00000001005c9e34
- (void)getProductWarrantyService:(id)arg1 skuAttr:(id)arg2 quantity:(long long)arg3 success:(CDUnknownBlockType)arg4 error:(CDUnknownBlockType)arg5;	// IMP=0x00000001005c9a10
- (void)getProductTrialReport:(id)arg1 success:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;	// IMP=0x00000001005c974c
- (void)getShippingInfoByProductId:(id)arg1 country:(id)arg2 quantity:(long long)arg3 sendGoodsCountry:(id)arg4 success:(CDUnknownBlockType)arg5 error:(CDUnknownBlockType)arg6;	// IMP=0x00000001005c9394
- (void)getProductStoreInfo:(id)arg1 sellerAdminSeq:(id)arg2 companyID:(id)arg3 success:(CDUnknownBlockType)arg4 error:(CDUnknownBlockType)arg5;	// IMP=0x00000001005c9070
- (void)getProductQuestionAndAnswers:(id)arg1 success:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;	// IMP=0x00000001005c8d90
- (void)getProductRecommendations:(id)arg1 scene:(id)arg2 recommendInfo:(id)arg3 success:(CDUnknownBlockType)arg4 error:(CDUnknownBlockType)arg5;	// IMP=0x00000001005c8a28
- (void)getProductReviewsList:(id)arg1 sellerAdminSeq:(id)arg2 page:(long long)arg3 filter:(id)arg4 sortedType:(unsigned long long)arg5 success:(CDUnknownBlockType)arg6 error:(CDUnknownBlockType)arg7;	// IMP=0x00000001005c85c4
- (void)getProductImageReviews:(id)arg1 sellerAdminSeq:(id)arg2 page:(long long)arg3 filter:(id)arg4 success:(CDUnknownBlockType)arg5 error:(CDUnknownBlockType)arg6;	// IMP=0x00000001005c7f3c
- (void)getProductImageReviews:(id)arg1 sellerAdminSeq:(id)arg2 page:(long long)arg3 success:(CDUnknownBlockType)arg4 error:(CDUnknownBlockType)arg5;	// IMP=0x00000001005c7ae8
- (void)getProductVoucherLocalShops:(id)arg1 page:(id)arg2 success:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4;	// IMP=0x00000001005c77b4
- (void)getProductReviews:(id)arg1 success:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;	// IMP=0x00000001005c752c
- (void)getProductDetail:(id)arg1 timeZone:(id)arg2 promotionID:(id)arg3 success:(CDUnknownBlockType)arg4 error:(CDUnknownBlockType)arg5;	// IMP=0x00000001005c7140
- (id)defaultTimeZone;	// IMP=0x00000001005c7064

@end

