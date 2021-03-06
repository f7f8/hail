//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AEUGCShopNewsPostStoreDTO : NSObject
{
    _Bool _followedByMe;	// 8 = 0x8
    _Bool _officiaStore;	// 9 = 0x9
    NSString *_iconUrl;	// 16 = 0x10
    NSString *_storeName;	// 24 = 0x18
    long long _storeId;	// 32 = 0x20
    unsigned long long _followCount;	// 40 = 0x28
    NSString *_storeUrl;	// 48 = 0x30
    long long _companyId;	// 56 = 0x38
    long long _sellerMemberSeq;	// 64 = 0x40
}

@property(nonatomic) long long sellerMemberSeq; // @synthesize sellerMemberSeq=_sellerMemberSeq;
@property(nonatomic) long long companyId; // @synthesize companyId=_companyId;
@property(nonatomic) _Bool officiaStore; // @synthesize officiaStore=_officiaStore;
@property(copy, nonatomic) NSString *storeUrl; // @synthesize storeUrl=_storeUrl;
@property(nonatomic) unsigned long long followCount; // @synthesize followCount=_followCount;
@property(nonatomic) long long storeId; // @synthesize storeId=_storeId;
@property(nonatomic) _Bool followedByMe; // @synthesize followedByMe=_followedByMe;
@property(copy, nonatomic) NSString *storeName; // @synthesize storeName=_storeName;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
- (void).cxx_destruct;	// IMP=0x0000000100ec1a68

@end

