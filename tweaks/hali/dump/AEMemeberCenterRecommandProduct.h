//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AFMoney, NSString;

@interface AEMemeberCenterRecommandProduct : NSObject
{
    NSString *_title;	// 8 = 0x8
    NSString *_imageUrl;	// 16 = 0x10
    AFMoney *_oriMaxPrice;	// 24 = 0x18
    AFMoney *_oriMinPrice;	// 32 = 0x20
}

@property(copy, nonatomic) AFMoney *oriMinPrice; // @synthesize oriMinPrice=_oriMinPrice;
@property(copy, nonatomic) AFMoney *oriMaxPrice; // @synthesize oriMaxPrice=_oriMaxPrice;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;	// IMP=0x000000010013f224

@end

