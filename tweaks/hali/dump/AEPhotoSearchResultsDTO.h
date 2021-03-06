//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class AEPhotoSearchRegion, NSArray;

@interface AEPhotoSearchResultsDTO : NSObject <NSCopying>
{
    long long _status;	// 8 = 0x8
    AEPhotoSearchRegion *_region;	// 16 = 0x10
    NSArray *_categories;	// 24 = 0x18
    NSArray *_categoryNames;	// 32 = 0x20
    NSArray *_items;	// 40 = 0x28
}

+ (id)objectClassInArray;	// IMP=0x0000000100c60f7c
+ (id)replacedKeyFromPropertyName;	// IMP=0x0000000100c60f08
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(copy, nonatomic) NSArray *categoryNames; // @synthesize categoryNames=_categoryNames;
@property(copy, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(retain, nonatomic) AEPhotoSearchRegion *region; // @synthesize region=_region;
@property(nonatomic) long long status; // @synthesize status=_status;
- (void).cxx_destruct;	// IMP=0x0000000100c61274
- (void)keyValuesDidFinishConvertingToObject;	// IMP=0x0000000100c61020
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100c60e28

@end

