//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AEProductBrand, NSString;

@interface AEProductBrandStore : NSObject
{
    AEProductBrand *_brand;	// 8 = 0x8
    NSString *_storeStory;	// 16 = 0x10
    NSString *_action;	// 24 = 0x18
    NSString *_sellerAliMemberId;	// 32 = 0x20
    NSString *_storeName;	// 40 = 0x28
    NSString *_backgroundImage;	// 48 = 0x30
}

@property(retain, nonatomic) NSString *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(retain, nonatomic) NSString *storeName; // @synthesize storeName=_storeName;
@property(retain, nonatomic) NSString *sellerAliMemberId; // @synthesize sellerAliMemberId=_sellerAliMemberId;
@property(retain, nonatomic) NSString *action; // @synthesize action=_action;
@property(retain, nonatomic) NSString *storeStory; // @synthesize storeStory=_storeStory;
@property(retain, nonatomic) AEProductBrand *brand; // @synthesize brand=_brand;
- (void).cxx_destruct;	// IMP=0x0000000100cdaf8c

@end

