//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface AELeaveFeedbackbuyerPersonInfoDTO : NSObject
{
    _Bool _required;	// 8 = 0x8
    NSString *_unit;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
    NSString *_placeholder;	// 32 = 0x20
    NSString *_value;	// 40 = 0x28
    NSString *_key;	// 48 = 0x30
    NSString *_type;	// 56 = 0x38
    NSArray *_list;	// 64 = 0x40
}

@property(nonatomic) _Bool required; // @synthesize required=_required;
@property(retain, nonatomic) NSArray *list; // @synthesize list=_list;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *unit; // @synthesize unit=_unit;
- (void).cxx_destruct;	// IMP=0x000000010011ebe8

@end

