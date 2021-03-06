//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MobileRechargeService, NSString, RACSubject;

@interface AEMobileRechargeViewModel : NSObject
{
    NSString *_sellerAliMemberId;	// 8 = 0x8
    NSString *_countryCode;	// 16 = 0x10
    RACSubject *_mobileRechargeListSuccess;	// 24 = 0x18
    RACSubject *_mobileRechargeListError;	// 32 = 0x20
    MobileRechargeService *_service;	// 40 = 0x28
    NSString *_numberRegular;	// 48 = 0x30
}

+ (id)trimPhoneNumber:(id)arg1;	// IMP=0x000000010052198c
+ (void)payWithOrderSignature:(id)arg1;	// IMP=0x0000000100521658
+ (void)placeOrderForPhone:(id)arg1 productId:(id)arg2 promotionCode:(id)arg3 sellerId:(id)arg4 countryCode:(id)arg5 complete:(CDUnknownBlockType)arg6;	// IMP=0x0000000100521284
+ (void)removeCachedPhoneNumber:(id)arg1;	// IMP=0x000000010052096c
+ (id)getMatchedHistoryNumber:(id)arg1;	// IMP=0x00000001005208e4
@property(retain, nonatomic) NSString *numberRegular; // @synthesize numberRegular=_numberRegular;
@property(retain, nonatomic) MobileRechargeService *service; // @synthesize service=_service;
@property(retain, nonatomic) RACSubject *mobileRechargeListError; // @synthesize mobileRechargeListError=_mobileRechargeListError;
@property(retain, nonatomic) RACSubject *mobileRechargeListSuccess; // @synthesize mobileRechargeListSuccess=_mobileRechargeListSuccess;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(retain, nonatomic) NSString *sellerAliMemberId; // @synthesize sellerAliMemberId=_sellerAliMemberId;
- (void).cxx_destruct;	// IMP=0x0000000100521d30
- (_Bool)isValidPhoneNumber:(id)arg1;	// IMP=0x00000001005219b0
- (void)checkPhoneNumber:(id)arg1 product:(id)arg2;	// IMP=0x0000000100520e8c
- (void)getMobileRechargeList;	// IMP=0x00000001005209dc
- (id)initWithSellerId:(id)arg1;	// IMP=0x0000000100520838

@end

