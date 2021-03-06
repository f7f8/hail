//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUGCAdapterViewController.h"

#import "AIFExposureProtocol.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class AECoinTaskView, AEUGCHFCouponCollectionViewCell, AEUGCHappyFridayViewModel, NSMutableArray, NSString, UICollectionView;

@interface AEUGCHappyFridayViewController : AEUGCAdapterViewController <UICollectionViewDelegate, UICollectionViewDataSource, AIFExposureProtocol>
{
    AEUGCHappyFridayViewModel *_currentViewModel;	// 8 = 0x8
    NSString *_commentListVcActionUUID;	// 16 = 0x10
    _Bool _needUpdateCoupon;	// 24 = 0x18
    _Bool _lockCouponTapped;	// 25 = 0x19
    _Bool _needReloadCouponInfo;	// 26 = 0x1a
    UICollectionView *_collectionView;	// 32 = 0x20
    NSMutableArray *_currentSections;	// 40 = 0x28
    AEUGCHFCouponCollectionViewCell *_refCouponCell;	// 48 = 0x30
    AECoinTaskView *_coinTaskView;	// 56 = 0x38
}

@property(retain, nonatomic) AECoinTaskView *coinTaskView; // @synthesize coinTaskView=_coinTaskView;
@property(nonatomic) _Bool needReloadCouponInfo; // @synthesize needReloadCouponInfo=_needReloadCouponInfo;
@property(nonatomic) _Bool lockCouponTapped; // @synthesize lockCouponTapped=_lockCouponTapped;
@property(nonatomic) _Bool needUpdateCoupon; // @synthesize needUpdateCoupon=_needUpdateCoupon;
@property(retain, nonatomic) AEUGCHFCouponCollectionViewCell *refCouponCell; // @synthesize refCouponCell=_refCouponCell;
@property(retain, nonatomic) NSMutableArray *currentSections; // @synthesize currentSections=_currentSections;
@property(retain, nonatomic) AEUGCHappyFridayViewModel *currentViewModel; // @synthesize currentViewModel=_currentViewModel;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;	// IMP=0x00000001006aabb4
- (void)receiveCouponTimerOut:(id)arg1;	// IMP=0x00000001006aa41c
- (void)updateCommentStatus:(id)arg1;	// IMP=0x00000001006aa334
- (id)pageTrackName;	// IMP=0x00000001006aa308
- (id)exposureType;	// IMP=0x00000001006aa284
- (long long)preferredStatusBarStyle;	// IMP=0x00000001006aa27c
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x00000001006a9b68
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x00000001006a91d0
- (id)cardCell:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00000001006a7eec
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000001006a75f8
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x00000001006a74d0
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;	// IMP=0x00000001006a70f0
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;	// IMP=0x00000001006a6f58
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x00000001006a699c
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x00000001006a649c
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x00000001006a60d4
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x00000001006a6088
- (void)didReceiveSessionLoginNotification;	// IMP=0x00000001006a607c
- (void)loadCoinView;	// IMP=0x00000001006a57dc
- (void)dealloc;	// IMP=0x00000001006a5718
- (void)didReceiveMemoryWarning;	// IMP=0x00000001006a56e4
- (void)updateNavigationBarIndicator:(_Bool)arg1;	// IMP=0x00000001006a5514
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000001006a5090
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000001006a4d7c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001006a48b0
- (void)viewDidLoad;	// IMP=0x00000001006a3fe4
- (id)initWithParam:(id)arg1;	// IMP=0x00000001006a3f0c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

