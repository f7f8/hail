//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface AEBookSaleSuccessInfoDTO : NSObject
{
    NSNumber *_bookCoins;	// 8 = 0x8
    NSString *_bookSuccessMsg;	// 16 = 0x10
    NSString *_bookSuccessHint;	// 24 = 0x18
    NSString *_paymentTimeReminder;	// 32 = 0x20
}

@property(retain, nonatomic) NSString *paymentTimeReminder; // @synthesize paymentTimeReminder=_paymentTimeReminder;
@property(retain, nonatomic) NSString *bookSuccessHint; // @synthesize bookSuccessHint=_bookSuccessHint;
@property(retain, nonatomic) NSString *bookSuccessMsg; // @synthesize bookSuccessMsg=_bookSuccessMsg;
@property(retain, nonatomic) NSNumber *bookCoins; // @synthesize bookCoins=_bookCoins;
- (void).cxx_destruct;	// IMP=0x0000000100480340

@end

