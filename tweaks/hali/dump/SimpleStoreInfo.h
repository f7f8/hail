//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface SimpleStoreInfo : NSObject
{
    NSNumber *_positiveFeedbackRate;	// 8 = 0x8
    NSNumber *_sellerAdminSeq;	// 16 = 0x10
    NSNumber *_storeId;	// 24 = 0x18
    NSString *_storeName;	// 32 = 0x20
}

@property(retain) NSString *storeName; // @synthesize storeName=_storeName;
@property(retain) NSNumber *storeId; // @synthesize storeId=_storeId;
@property(retain) NSNumber *sellerAdminSeq; // @synthesize sellerAdminSeq=_sellerAdminSeq;
@property(retain) NSNumber *positiveFeedbackRate; // @synthesize positiveFeedbackRate=_positiveFeedbackRate;
- (void).cxx_destruct;	// IMP=0x0000000100625550

@end

