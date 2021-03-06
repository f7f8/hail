//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AERStoreDTOV1, AERStoreDTOV2, NSDate, NSString;

@interface AERStoreDTO : NSObject
{
    NSDate *_serverTime;	// 8 = 0x8
    NSString *_currency;	// 16 = 0x10
    NSString *_companyId;	// 24 = 0x18
    NSString *_storeNo;	// 32 = 0x20
    NSString *_type;	// 40 = 0x28
    NSString *_sellerAdminSeq;	// 48 = 0x30
    AERStoreDTOV2 *_storeV2;	// 56 = 0x38
    AERStoreDTOV1 *_storeV1;	// 64 = 0x40
}

@property(retain, nonatomic) AERStoreDTOV1 *storeV1; // @synthesize storeV1=_storeV1;
@property(retain, nonatomic) AERStoreDTOV2 *storeV2; // @synthesize storeV2=_storeV2;
@property(copy, nonatomic) NSString *sellerAdminSeq; // @synthesize sellerAdminSeq=_sellerAdminSeq;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *storeNo; // @synthesize storeNo=_storeNo;
@property(copy, nonatomic) NSString *companyId; // @synthesize companyId=_companyId;
@property(copy, nonatomic) NSString *currency; // @synthesize currency=_currency;
@property(retain, nonatomic) NSDate *serverTime; // @synthesize serverTime=_serverTime;
- (void).cxx_destruct;	// IMP=0x0000000100d399b8

@end

