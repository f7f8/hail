//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface AECategoryBrandDTOV3 : NSObject <NSCoding>
{
    NSString *_brandID;	// 8 = 0x8
    NSString *_logo;	// 16 = 0x10
    long long _cateID;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
}

+ (id)replacedKeyFromPropertyName;	// IMP=0x0000000100c1f9dc
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long cateID; // @synthesize cateID=_cateID;
@property(retain, nonatomic) NSString *logo; // @synthesize logo=_logo;
@property(retain, nonatomic) NSString *brandID; // @synthesize brandID=_brandID;
- (void).cxx_destruct;	// IMP=0x0000000100c1fdbc
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100c1fb70
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100c1fa44
- (id)brandCellModel;	// IMP=0x0000000100cb5e60

@end

