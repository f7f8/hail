//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AEMoneyDTO, NSString;

@interface AERefundItemViewDTO : NSObject
{
    NSString *_gmtRefundTime;	// 8 = 0x8
    AEMoneyDTO *_refundAmount;	// 16 = 0x10
    AEMoneyDTO *_refundBuyerLocal;	// 24 = 0x18
    NSString *_memo;	// 32 = 0x20
}

@property(copy, nonatomic) NSString *memo; // @synthesize memo=_memo;
@property(retain, nonatomic) AEMoneyDTO *refundBuyerLocal; // @synthesize refundBuyerLocal=_refundBuyerLocal;
@property(retain, nonatomic) AEMoneyDTO *refundAmount; // @synthesize refundAmount=_refundAmount;
@property(copy, nonatomic) NSString *gmtRefundTime; // @synthesize gmtRefundTime=_gmtRefundTime;
- (void).cxx_destruct;	// IMP=0x00000001001f6148

@end

