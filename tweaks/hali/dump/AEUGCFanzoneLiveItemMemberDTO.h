//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AEUGCFanzoneLiveItemMemberDTO : NSObject
{
    NSString *_avatar;	// 8 = 0x8
    NSString *_country;	// 16 = 0x10
    NSString *_gender;	// 24 = 0x18
    NSString *_memberSeq;	// 32 = 0x20
    NSString *_nickName;	// 40 = 0x28
}

+ (id)createFromDictionary:(id)arg1;	// IMP=0x000000010068ba78
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(copy, nonatomic) NSString *memberSeq; // @synthesize memberSeq=_memberSeq;
@property(copy, nonatomic) NSString *gender; // @synthesize gender=_gender;
@property(copy, nonatomic) NSString *country; // @synthesize country=_country;
@property(copy, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
- (void).cxx_destruct;	// IMP=0x000000010068bb18
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010068ba6c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010068b9f4

@end

