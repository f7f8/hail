//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AEUGCShopNewsFeedItemCouponDTO : NSObject
{
    long long _couponType;	// 8 = 0x8
    long long _activityId;	// 16 = 0x10
    NSString *_denomination;	// 24 = 0x18
    long long _sellerMemberSeq;	// 32 = 0x20
    long long _storeId;	// 40 = 0x28
}

@property(nonatomic) long long storeId; // @synthesize storeId=_storeId;
@property(nonatomic) long long sellerMemberSeq; // @synthesize sellerMemberSeq=_sellerMemberSeq;
@property(copy, nonatomic) NSString *denomination; // @synthesize denomination=_denomination;
@property(nonatomic) long long activityId; // @synthesize activityId=_activityId;
@property(nonatomic) long long couponType; // @synthesize couponType=_couponType;
- (void).cxx_destruct;	// IMP=0x0000000100ec1b58

@end

