//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUIViewController.h"

#import "AIFExposureProtocol.h"
#import "TileCollectionViewDataSource.h"
#import "TileCollectionViewDelegate.h"

@class AEPaymentResultInfoFloorViewModel, AETileCollectionView, NSMutableArray, NSString, UIView;

@interface AEPaymentResultViewController : AEUIViewController <TileCollectionViewDelegate, TileCollectionViewDataSource, AIFExposureProtocol>
{
    _Bool _haveNextPage;	// 8 = 0x8
    AETileCollectionView *_collectionView;	// 16 = 0x10
    UIView *_resultContentView;	// 24 = 0x18
    NSMutableArray *_allFloors;	// 32 = 0x20
    AEPaymentResultInfoFloorViewModel *_payFloorModel;	// 40 = 0x28
    NSString *_orderIds;	// 48 = 0x30
    NSString *_streamId;	// 56 = 0x38
    long long _currentPage;	// 64 = 0x40
}

@property(nonatomic) _Bool haveNextPage; // @synthesize haveNextPage=_haveNextPage;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(retain, nonatomic) NSString *streamId; // @synthesize streamId=_streamId;
@property(retain, nonatomic) NSString *orderIds; // @synthesize orderIds=_orderIds;
@property(retain, nonatomic) AEPaymentResultInfoFloorViewModel *payFloorModel; // @synthesize payFloorModel=_payFloorModel;
@property(retain, nonatomic) NSMutableArray *allFloors; // @synthesize allFloors=_allFloors;
@property(retain, nonatomic) UIView *resultContentView; // @synthesize resultContentView=_resultContentView;
@property(retain, nonatomic) AETileCollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;	// IMP=0x0000000100576cd0
- (id)sceneId;	// IMP=0x0000000100576ad4
- (id)exposureType;	// IMP=0x0000000100576abc
- (void)collectionView:(id)arg1 didEndDisplayingView:(id)arg2 withTile:(id)arg3 atIndexPath:(id)arg4;	// IMP=0x0000000100576974
- (void)collectionView:(id)arg1 willDisplayView:(id)arg2 withTile:(id)arg3 atIndexPath:(id)arg4;	// IMP=0x000000010057682c
- (void)prefetchStacksInCollectionView:(id)arg1;	// IMP=0x00000001005767e4
- (_Bool)haveMoreStacksInCollectionView:(id)arg1;	// IMP=0x00000001005767d8
- (id)stacksInCollectionView:(id)arg1;	// IMP=0x00000001005767cc
- (void)requestFloorData;	// IMP=0x0000000100576240
- (void)refreshView;	// IMP=0x0000000100575c2c
- (void)viewDidLoad;	// IMP=0x00000001005751a0
- (id)initWithParam:(id)arg1;	// IMP=0x0000000100575004

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

