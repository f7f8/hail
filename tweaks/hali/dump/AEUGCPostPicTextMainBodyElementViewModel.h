//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AEUGCPostPicTextMainBodyElementViewModelProtocol.h"

@class AEUGCPostPicTextMainBodyElementDTO, NSString, NSURL, UIImage;

@interface AEUGCPostPicTextMainBodyElementViewModel : NSObject <AEUGCPostPicTextMainBodyElementViewModelProtocol>
{
    AEUGCPostPicTextMainBodyElementDTO *_dto;	// 8 = 0x8
    UIImage *_picImage;	// 16 = 0x10
    NSString *_localPicImageKey;	// 24 = 0x18
    NSURL *_remotePicImageUrl;	// 32 = 0x20
    NSString *_productImageUrl;	// 40 = 0x28
    NSString *_currency;	// 48 = 0x30
    NSString *_displayPrice;	// 56 = 0x38
    NSString *_originalPrice;	// 64 = 0x40
    NSString *_youtubeThumbUrl;	// 72 = 0x48
    NSString *_youtubeVideoUrl;	// 80 = 0x50
    NSString *_videoId;	// 88 = 0x58
    _Bool _displayPlaceHolder;	// 96 = 0x60
    unsigned long long _wordContentFormat;	// 104 = 0x68
    unsigned long long _wordOrderStyle;	// 112 = 0x70
}

+ (id)viewModelWithType:(unsigned long long)arg1;	// IMP=0x0000000100e3aa80
+ (id)parseWithDic:(id)arg1;	// IMP=0x0000000100e3c550
+ (id)wordElementViewModelWithContent:(id)arg1;	// IMP=0x0000000100e3c8b8
+ (id)picElementViewModelWithImage:(id)arg1;	// IMP=0x0000000100e3c978
+ (id)productElementViewModelWithProductId:(id)arg1 productUrl:(id)arg2 productImgUrl:(id)arg3 currency:(id)arg4 displayPrice:(id)arg5 originalPrice:(id)arg6;	// IMP=0x0000000100e3ca38
+ (id)videoElementViewModelWithVideoId:(id)arg1 videoUrlUrl:(id)arg2 thumbUrl:(id)arg3;	// IMP=0x0000000100e3ccd8
@property(readonly, copy, nonatomic) UIImage *image; // @synthesize image=_picImage;
@property(nonatomic) _Bool displayPlaceHolder; // @synthesize displayPlaceHolder=_displayPlaceHolder;
@property(nonatomic) unsigned long long wordOrderStyle; // @synthesize wordOrderStyle=_wordOrderStyle;
@property(nonatomic) unsigned long long wordContentFormat; // @synthesize wordContentFormat=_wordContentFormat;
- (void).cxx_destruct;	// IMP=0x0000000100e3c098
- (void)setYoutubeVideoUrl:(id)arg1;	// IMP=0x0000000100e3bed0
@property(readonly, copy, nonatomic) NSString *youtubeVideoUrl;
- (void)setYoutubeThumbUrl:(id)arg1;	// IMP=0x0000000100e3bce4
@property(readonly, copy, nonatomic) NSString *youtubeThumbUrl;
- (void)setYoutubeVideoId:(id)arg1;	// IMP=0x0000000100e3bc38
@property(readonly, copy, nonatomic) NSString *youtubeVideoId;
@property(readonly, copy, nonatomic) NSString *originalPrice;
@property(readonly, copy, nonatomic) NSString *displayPrice;
- (void)setProductImgUrl:(id)arg1;	// IMP=0x0000000100e3b8f0
@property(readonly, copy, nonatomic) NSString *productImgUrl;
- (void)setHeight:(double)arg1;	// IMP=0x0000000100e3b70c
@property(readonly, nonatomic) double height;
- (void)setWidth:(double)arg1;	// IMP=0x0000000100e3b3c0
@property(readonly, nonatomic) double width;
@property(readonly, copy, nonatomic) NSURL *imageUrl;
- (void)setImage:(id)arg1;	// IMP=0x0000000100e3b0b0
@property(copy, nonatomic) NSString *wordContent;
@property(nonatomic) unsigned long long type;
- (void)prepareElementModelCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100e3ab18
- (id)init;	// IMP=0x0000000100e3aa08
- (id)initWithDto:(id)arg1;	// IMP=0x0000000100e3a958
- (id)exportDic;	// IMP=0x0000000100e3c18c
@property(readonly, copy, nonatomic) NSString *productId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

