//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface LOTShapeGroup : NSObject
{
    NSString *_keyname;	// 8 = 0x8
    NSArray *_items;	// 16 = 0x10
}

+ (id)shapeItemWithJSON:(id)arg1;	// IMP=0x0000000101d0338c
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, nonatomic) NSString *keyname; // @synthesize keyname=_keyname;
- (void).cxx_destruct;	// IMP=0x0000000101d03748
- (id)description;	// IMP=0x0000000101d03674
- (void)_mapFromJSON:(id)arg1;	// IMP=0x0000000101d0313c
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000101d030c4

@end

