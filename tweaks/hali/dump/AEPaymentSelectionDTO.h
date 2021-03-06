//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AECreditCardInfoDTO, NSString;

@interface AEPaymentSelectionDTO : NSObject
{
    AECreditCardInfoDTO *_selectedCard;	// 8 = 0x8
    unsigned long long _payAction;	// 16 = 0x10
    NSString *_payActionStr;	// 24 = 0x18
}

@property(retain, nonatomic) NSString *payActionStr; // @synthesize payActionStr=_payActionStr;
@property(nonatomic) unsigned long long payAction; // @synthesize payAction=_payAction;
@property(retain, nonatomic) AECreditCardInfoDTO *selectedCard; // @synthesize selectedCard=_selectedCard;
- (void).cxx_destruct;	// IMP=0x0000000100577838
- (_Bool)isEqualToPayMethod:(id)arg1;	// IMP=0x0000000100577644
- (id)makeDictionary;	// IMP=0x0000000100577420

@end

