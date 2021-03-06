//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUGCShopNewsPostDetailBaseViewModel.h"

#import "AEUGCShopNewsPicTextCouponCellViewModel.h"

@class NSMutableArray, NSString;

@interface AEUGCShopNewsPicTextDetailViewModel : AEUGCShopNewsPostDetailBaseViewModel <AEUGCShopNewsPicTextCouponCellViewModel>
{
    NSMutableArray *_photoSubPostViewModels;	// 32 = 0x20
    NSMutableArray *_couponViewModels;	// 40 = 0x28
}

@property(readonly, copy, nonatomic) NSMutableArray *couponViewModels; // @synthesize couponViewModels=_couponViewModels;
- (void).cxx_destruct;	// IMP=0x0000000100eeaa6c
- (id)couponInfosArray;	// IMP=0x0000000100eea8cc
- (id)subAttributedText;	// IMP=0x0000000100eea37c
- (id)title;	// IMP=0x0000000100eea214
- (void)acquireCoupons:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100eea064
- (void)loadPostDetail:(CDUnknownBlockType)arg1;	// IMP=0x0000000100ee95c0
@property(readonly, copy, nonatomic) NSMutableArray *photoSubPostViewModels; // @synthesize photoSubPostViewModels=_photoSubPostViewModels;
- (id)initWithPostId:(id)arg1;	// IMP=0x0000000100ee934c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

