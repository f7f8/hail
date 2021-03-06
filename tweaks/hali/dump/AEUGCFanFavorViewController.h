//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUGCAdapterViewController.h"

#import "AEUGCPopoverListViewDelegate.h"
#import "AEUGCSelectTypeCollectionViewCellDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class AEUGCListVenueCardListViewModel, AEUGCListVenueReadyBannersViewModel, AEUGCPopoverListView, AEUGCSelectTypeCollectionViewCell, HMSegmentedControl, NSDictionary, NSMutableArray, NSString, UIActivityIndicatorView, UICollectionView;

@interface AEUGCFanFavorViewController : AEUGCAdapterViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDelegate, AEUGCSelectTypeCollectionViewCellDelegate, UICollectionViewDataSource, AEUGCPopoverListViewDelegate>
{
    NSDictionary *_params;	// 8 = 0x8
    NSString *_commentListVcActionUUID;	// 16 = 0x10
    _Bool _hideSegmentCtr;	// 24 = 0x18
    unsigned long long screenType;	// 32 = 0x20
    HMSegmentedControl *_segmentedControl;	// 40 = 0x28
    UICollectionView *_collectionView;	// 48 = 0x30
    AEUGCListVenueReadyBannersViewModel *_bannersViewModel;	// 56 = 0x38
    NSMutableArray *_popoverItems;	// 64 = 0x40
    AEUGCListVenueCardListViewModel *_cardlistViewModel;	// 72 = 0x48
    AEUGCSelectTypeCollectionViewCell *_selectionCell;	// 80 = 0x50
    AEUGCPopoverListView *_popoverListView;	// 88 = 0x58
    UIActivityIndicatorView *_indicatorView;	// 96 = 0x60
}

@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) AEUGCPopoverListView *popoverListView; // @synthesize popoverListView=_popoverListView;
@property(retain, nonatomic) AEUGCSelectTypeCollectionViewCell *selectionCell; // @synthesize selectionCell=_selectionCell;
@property(retain, nonatomic) AEUGCListVenueCardListViewModel *cardlistViewModel; // @synthesize cardlistViewModel=_cardlistViewModel;
@property(copy, nonatomic) NSMutableArray *popoverItems; // @synthesize popoverItems=_popoverItems;
@property(retain, nonatomic) AEUGCListVenueReadyBannersViewModel *bannersViewModel; // @synthesize bannersViewModel=_bannersViewModel;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) HMSegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
- (void).cxx_destruct;	// IMP=0x000000010068ab00
- (id)pageTrackParams;	// IMP=0x000000010068a778
- (id)pageTrackName;	// IMP=0x000000010068a74c
- (id)showMode;	// IMP=0x000000010068a720
- (void)updateCommentStatus:(id)arg1;	// IMP=0x000000010068a638
- (void)popListViewDismissAction:(id)arg1;	// IMP=0x000000010068a620
- (void)popListView:(id)arg1 DidSelectItemAtIndex:(unsigned long long)arg2;	// IMP=0x000000010068a010
- (void)typeButtonPressed:(id)arg1;	// IMP=0x0000000100689d18
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x00000001006899b0
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000100689788
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0000000100689730
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x0000000100689728
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x00000001006895c4
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x00000001006895b0
- (unsigned long long)convertToOrderByFromIndex:(unsigned long long)arg1;	// IMP=0x0000000100689598
- (unsigned long long)convertToIndexFromOrderBy:(unsigned long long)arg1;	// IMP=0x0000000100689584
- (id)cardCell:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00000001006883d4
- (void)prepareLoadListData:(CDUnknownBlockType)arg1;	// IMP=0x0000000100688170
- (void)loadData;	// IMP=0x0000000100687838
- (void)configAutoLayout;	// IMP=0x000000010068715c
- (void)configUI;	// IMP=0x0000000100687048
- (void)viewDidLoad;	// IMP=0x0000000100686280
- (id)initWithParam:(id)arg1;	// IMP=0x0000000100685ce4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

