//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WVObjectProperty : NSObject
{
    NSString *_name;	// 8 = 0x8
    NSString *_typeString;	// 16 = 0x10
    Class _type;	// 24 = 0x18
}

@property(readonly, nonatomic) Class type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *typeString; // @synthesize typeString=_typeString;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;	// IMP=0x0000000101b84388
- (id)description;	// IMP=0x0000000101b8428c
- (_Bool)isNumberType;	// IMP=0x0000000101b84240
- (_Bool)isBOOLType;	// IMP=0x0000000101b8421c
@property(readonly, nonatomic) unsigned short typeCode;
- (id)initWithName:(id)arg1 withTypeString:(id)arg2;	// IMP=0x0000000101b840b4

@end

