//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AEUGCPostPicTextMainBodyElementDTO : NSObject
{
    unsigned long long _type;	// 8 = 0x8
    NSString *_content;	// 16 = 0x10
    id _extendsInfo;	// 24 = 0x18
}

+ (id)parseWithDic:(id)arg1;	// IMP=0x0000000100e1bd54
@property(retain, nonatomic) id extendsInfo; // @synthesize extendsInfo=_extendsInfo;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;	// IMP=0x0000000100e1bbdc
- (id)init;	// IMP=0x0000000100e1bb08
- (id)exportDic;	// IMP=0x0000000100e1bc1c

@end

