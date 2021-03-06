//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AEUGCPostDetailProduct, NSString;

@interface AEUGCPostDetailSubPost : NSObject
{
    long long _type;	// 8 = 0x8
    long long _position;	// 16 = 0x10
    NSString *_content;	// 24 = 0x18
    NSString *_translateContent;	// 32 = 0x20
    NSString *_imgsUrl;	// 40 = 0x28
    NSString *_bigImgsUrl;	// 48 = 0x30
    AEUGCPostDetailProduct *_productInfo;	// 56 = 0x38
    struct CGSize _imageSize;	// 64 = 0x40
}

+ (id)replacedKeyFromPropertyName;	// IMP=0x00000001006dfc14
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(retain, nonatomic) AEUGCPostDetailProduct *productInfo; // @synthesize productInfo=_productInfo;
@property(copy, nonatomic) NSString *bigImgsUrl; // @synthesize bigImgsUrl=_bigImgsUrl;
@property(copy, nonatomic) NSString *imgsUrl; // @synthesize imgsUrl=_imgsUrl;
@property(copy, nonatomic) NSString *translateContent; // @synthesize translateContent=_translateContent;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) long long position; // @synthesize position=_position;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;	// IMP=0x00000001006dfd9c

@end

