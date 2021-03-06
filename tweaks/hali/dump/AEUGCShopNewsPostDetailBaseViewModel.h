//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AEUGCComponentHeaderViewModel.h"
#import "AEUGCShopNewsPostDetailHeaderCellViewModel.h"
#import "AEUGCShopNewsPostDetailInfoCellViewModel.h"
#import "AEUGCShopNewsPostDetailStoreCellViewModel.h"
#import "AEUGCShopNewsPostDetailToolViewModel.h"

@class AEUGCShopNewsPostDetailDTO, AIFCountry, NSAttributedString, NSMutableArray, NSString;

@interface AEUGCShopNewsPostDetailBaseViewModel : NSObject <AEUGCShopNewsPostDetailHeaderCellViewModel, AEUGCComponentHeaderViewModel, AEUGCShopNewsPostDetailInfoCellViewModel, AEUGCShopNewsPostDetailStoreCellViewModel, AEUGCShopNewsPostDetailToolViewModel>
{
    AEUGCShopNewsPostDetailDTO *_dto;	// 8 = 0x8
    NSString *_postId;	// 16 = 0x10
    _Bool _isTransLated;	// 24 = 0x18
    _Bool _supportFollowAction;	// 25 = 0x19
    NSMutableArray *_subPostViewModels;	// 32 = 0x20
    NSMutableArray *_likeViewModles;	// 40 = 0x28
    NSMutableArray *_commentViewModels;	// 48 = 0x30
}

+ (id)convertCommentUIData:(id)arg1 action:(id)arg2;	// IMP=0x0000000100f1fec4
+ (id)fillDeletedCommentViewModels:(id)arg1;	// IMP=0x0000000100f1fb74
+ (id)convertLikeListUIData:(id)arg1;	// IMP=0x0000000100f1f8e0
@property(nonatomic) _Bool supportFollowAction; // @synthesize supportFollowAction=_supportFollowAction;
@property(readonly, copy, nonatomic) NSMutableArray *commentViewModels; // @synthesize commentViewModels=_commentViewModels;
@property(readonly, copy, nonatomic) NSMutableArray *likeViewModles; // @synthesize likeViewModles=_likeViewModles;
@property(readonly, copy, nonatomic) NSMutableArray *subPostViewModels; // @synthesize subPostViewModels=_subPostViewModels;
@property(nonatomic) _Bool isTransLated; // @synthesize isTransLated=_isTransLated;
@property(readonly, copy, nonatomic) NSString *postId; // @synthesize postId=_postId;
- (void).cxx_destruct;	// IMP=0x0000000100f1f864
- (void)onUpdateCommentStatusDone:(id)arg1;	// IMP=0x0000000100f1f2cc
@property(nonatomic) _Bool showVisitStore;
@property(copy, nonatomic) NSString *commentCountStr;
@property(copy, nonatomic) NSString *likeCountStr;
@property(nonatomic) unsigned long long commentCount;
@property(nonatomic) unsigned long long likeCount;
@property(nonatomic) _Bool isLiked;
@property(readonly, nonatomic) _Bool supportFollow;
@property(readonly, copy, nonatomic) NSString *followCountStr;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, nonatomic) _Bool isFollowed;
@property(readonly, copy, nonatomic) NSString *subtitleLabelText;
@property(readonly, copy, nonatomic) NSString *titleLabelText;
@property(readonly, copy, nonatomic) NSString *avatarImageUrl;
@property(nonatomic) unsigned long long actionViewType;
@property(readonly, nonatomic) long long contentViewType;
@property(readonly, nonatomic) long long leftViewType;
@property(readonly, nonatomic) __weak id <AEUGCComponentHeaderViewModel> headViewModel;
@property(readonly, copy, nonatomic) NSString *imageUrl;
- (void)changeCommentCount:(long long)arg1;	// IMP=0x0000000100f1ea10
- (void)changeLikeStatus:(_Bool)arg1;	// IMP=0x0000000100f1e644
- (void)changeFollowStatus:(_Bool)arg1;	// IMP=0x0000000100f1e528
- (_Bool)isValidateData;	// IMP=0x0000000100f1e48c
- (void)follow:(CDUnknownBlockType)arg1;	// IMP=0x0000000100f1deb0
- (void)like:(CDUnknownBlockType)arg1;	// IMP=0x0000000100f1dc2c
- (void)loadPostDetail:(CDUnknownBlockType)arg1;	// IMP=0x0000000100f1dc28
@property(readonly, nonatomic) _Bool supportFloor;
@property(readonly, nonatomic) _Bool isOfficial;
@property(readonly, nonatomic) unsigned long long status;
@property(readonly, nonatomic) unsigned long long appType;
@property(readonly, copy, nonatomic) NSString *sellerMemberSeq;
- (id)companyId;	// IMP=0x0000000100f1d9ac
@property(readonly, copy, nonatomic) NSString *storeId;
- (id)initWithPostId:(id)arg1;	// IMP=0x0000000100f1d6d0

// Remaining properties
@property(readonly, nonatomic) NSString *buyerLevelStr;
@property(readonly, nonatomic) AIFCountry *country;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) unsigned long long gender;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *languageText;
@property(readonly, copy, nonatomic) NSAttributedString *subAttributedText;
@property(readonly, copy, nonatomic) NSString *subText;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *tipsLableText;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, nonatomic) _Bool topLineHidden;

@end

