//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class AFMoney, GiftcardEntryDTO, NSArray<GiftcardTransactionRecordDTO>;

@interface AEGiftcardInfoDTO : JSONModel
{
    GiftcardEntryDTO *_giftcardEntry;	// 8 = 0x8
    AFMoney *_balanceAmount;	// 16 = 0x10
    NSArray<GiftcardTransactionRecordDTO> *_recordList;	// 24 = 0x18
}

+ (_Bool)propertyIsOptional:(id)arg1;	// IMP=0x0000000100117dd8
@property(retain, nonatomic) NSArray<GiftcardTransactionRecordDTO> *recordList; // @synthesize recordList=_recordList;
@property(retain, nonatomic) AFMoney *balanceAmount; // @synthesize balanceAmount=_balanceAmount;
@property(retain, nonatomic) GiftcardEntryDTO *giftcardEntry; // @synthesize giftcardEntry=_giftcardEntry;
- (void).cxx_destruct;	// IMP=0x0000000100117f38
- (void)setBalanceAmountWithNSDictionary:(id)arg1;	// IMP=0x0000000100117de0

@end

