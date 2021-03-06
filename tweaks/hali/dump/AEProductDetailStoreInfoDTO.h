//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSNumber, NSString;

@interface AEProductDetailStoreInfoDTO : NSObject
{
    _Bool _isLocalSeller;	// 8 = 0x8
    NSNumber *_itemsCount;	// 16 = 0x10
    NSNumber *_wishlistCount;	// 24 = 0x18
    NSString *_storeName;	// 32 = 0x20
    NSString *_loginId;	// 40 = 0x28
    NSString *_storeHomeURL;	// 48 = 0x30
    NSString *_storeChatURL;	// 56 = 0x38
    NSString *_email;	// 64 = 0x40
    NSArray *_tags;	// 72 = 0x48
    NSString *_positiveFeedbackRate;	// 80 = 0x50
    NSNumber *_positiveFeedbackCount;	// 88 = 0x58
    NSNumber *_score;	// 96 = 0x60
    NSString *_level;	// 104 = 0x68
    NSNumber *_totalFeedbackCount;	// 112 = 0x70
}

+ (id)replacedKeyFromPropertyName;	// IMP=0x00000001005d10c4
+ (id)objectClassInArray;	// IMP=0x00000001005d1040
@property(retain, nonatomic) NSNumber *totalFeedbackCount; // @synthesize totalFeedbackCount=_totalFeedbackCount;
@property(retain, nonatomic) NSString *level; // @synthesize level=_level;
@property(retain, nonatomic) NSNumber *score; // @synthesize score=_score;
@property(retain, nonatomic) NSNumber *positiveFeedbackCount; // @synthesize positiveFeedbackCount=_positiveFeedbackCount;
@property(retain, nonatomic) NSString *positiveFeedbackRate; // @synthesize positiveFeedbackRate=_positiveFeedbackRate;
@property(retain, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(retain, nonatomic) NSString *email; // @synthesize email=_email;
@property(retain, nonatomic) NSString *storeChatURL; // @synthesize storeChatURL=_storeChatURL;
@property(retain, nonatomic) NSString *storeHomeURL; // @synthesize storeHomeURL=_storeHomeURL;
@property(nonatomic) _Bool isLocalSeller; // @synthesize isLocalSeller=_isLocalSeller;
@property(retain, nonatomic) NSString *loginId; // @synthesize loginId=_loginId;
@property(retain, nonatomic) NSString *storeName; // @synthesize storeName=_storeName;
@property(retain, nonatomic) NSNumber *wishlistCount; // @synthesize wishlistCount=_wishlistCount;
@property(retain, nonatomic) NSNumber *itemsCount; // @synthesize itemsCount=_itemsCount;
- (void).cxx_destruct;	// IMP=0x00000001005d1638

@end

