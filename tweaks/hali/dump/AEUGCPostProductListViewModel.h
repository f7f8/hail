//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AEUGCPostProductAddBgCellModelProtocol.h"
#import "AEUGCPostProductContentEditViewModelProtocol.h"
#import "AEUGCPostProductTagEditViewModelProtocol.h"

@class AEUGCPostBannerMaterialDTO, NSArray, NSDate, NSDictionary, NSMutableArray, NSString, UIImage;

@interface AEUGCPostProductListViewModel : NSObject <AEUGCPostProductAddBgCellModelProtocol, AEUGCPostProductContentEditViewModelProtocol, AEUGCPostProductTagEditViewModelProtocol>
{
    NSString *_title;	// 8 = 0x8
    NSString *_summary;	// 16 = 0x10
    NSString *_themeId;	// 24 = 0x18
    NSDate *_date;	// 32 = 0x20
    NSString *_postId;	// 40 = 0x28
    NSMutableArray *_selectedTagsList;	// 48 = 0x30
    NSMutableArray *_unSelectedTagsList;	// 56 = 0x38
    _Bool _hasChangeBanner;	// 64 = 0x40
    AEUGCPostBannerMaterialDTO *_bannerMaterialDto;	// 72 = 0x48
    NSDictionary *_bannerImageInfo;	// 80 = 0x50
    NSMutableArray *_productViewModelList;	// 88 = 0x58
    unsigned long long _maxTitleLength;	// 96 = 0x60
    unsigned long long _maxDescroptionLength;	// 104 = 0x68
    unsigned long long _maxTagsCount;	// 112 = 0x70
    unsigned long long _minProductCount;	// 120 = 0x78
    unsigned long long _maxProductCount;	// 128 = 0x80
}

+ (id)toastErrorString:(unsigned long long)arg1;	// IMP=0x0000000100e376ec
@property(readonly, nonatomic) unsigned long long maxProductCount; // @synthesize maxProductCount=_maxProductCount;
@property(readonly, nonatomic) unsigned long long minProductCount; // @synthesize minProductCount=_minProductCount;
@property(readonly, nonatomic) unsigned long long maxTagsCount; // @synthesize maxTagsCount=_maxTagsCount;
@property(readonly, nonatomic) unsigned long long maxDescroptionLength; // @synthesize maxDescroptionLength=_maxDescroptionLength;
@property(readonly, nonatomic) unsigned long long maxTitleLength; // @synthesize maxTitleLength=_maxTitleLength;
@property(readonly, nonatomic) NSMutableArray *productViewModelList; // @synthesize productViewModelList=_productViewModelList;
@property(readonly, nonatomic) NSDictionary *bannerImageInfo; // @synthesize bannerImageInfo=_bannerImageInfo;
@property(readonly, nonatomic) AEUGCPostBannerMaterialDTO *bannerMaterialDto; // @synthesize bannerMaterialDto=_bannerMaterialDto;
@property(copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_summary;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;	// IMP=0x0000000100e388a8
- (unsigned long long)count;	// IMP=0x0000000100e387d8
@property(readonly, nonatomic) NSArray *unSelectedTagsTextArray;
@property(readonly, nonatomic) NSArray *selectedTagsTextArray;
@property(readonly, copy, nonatomic) NSString *imageURL;
@property(readonly, copy, nonatomic) UIImage *image;
- (void)prepareBannerMaterialAndImage:(CDUnknownBlockType)arg1;	// IMP=0x0000000100e37c50
- (_Bool)alreadyInputData;	// IMP=0x0000000100e37ba8
- (id)productIdList;	// IMP=0x0000000100e37a54
- (unsigned long long)errorTest;	// IMP=0x0000000100e375a0
- (void)post:(CDUnknownBlockType)arg1;	// IMP=0x0000000100e371c8
- (void)loadUnSelectedTags;	// IMP=0x0000000100e36e3c
- (id)initWithThemeId:(id)arg1 date:(id)arg2;	// IMP=0x0000000100e36c08
- (void)dealloc;	// IMP=0x0000000100e36bd4
- (void)requestRandomBannerBgImageCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100e38a78
- (void)addBannerBgImageWithBannerMaterialDto:(id)arg1;	// IMP=0x0000000100e38a00
- (void)addBannerBgImageWithInfo:(id)arg1;	// IMP=0x0000000100e38988
- (void)deleteSelectedTagAtIndex:(unsigned long long)arg1;	// IMP=0x0000000100e390b8
- (void)addFromUnSelectedTagWithText:(id)arg1;	// IMP=0x0000000100e38efc
- (void)addNewTagWithText:(id)arg1;	// IMP=0x0000000100e38e54
- (void)addProductWithViewModel:(id)arg1;	// IMP=0x0000000100e3914c
- (id)generateSubPostList;	// IMP=0x0000000100e39d50
- (id)generateTagsString;	// IMP=0x0000000100e39bdc
- (id)exportCollectionModelDic;	// IMP=0x0000000100e394b4
- (id)exportModelDic;	// IMP=0x0000000100e39164

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

