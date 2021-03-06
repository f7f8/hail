//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class NSString, UIButton, UICollectionView, UIImageView, UILabel;

@interface AEUGCPhotoViewerController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    UIImageView *_animationImageView;	// 8 = 0x8
    UIImageView *_swipCrossImageView;	// 16 = 0x10
    UILabel *_swipCrossLabel;	// 24 = 0x18
    UIButton *_closeButton;	// 32 = 0x20
    UILabel *_pageLabel;	// 40 = 0x28
    UICollectionView *_collectionView;	// 48 = 0x30
    id <AEUGCPhotoViewerControllerDataSource> _dataSource;	// 56 = 0x38
    id <AEUGCPhotoViewerControllerDelegate> _delegate;	// 64 = 0x40
    double _cellSpace;	// 72 = 0x48
    CDUnknownBlockType _swipCrossHandler;	// 80 = 0x50
}

@property(copy, nonatomic) CDUnknownBlockType swipCrossHandler; // @synthesize swipCrossHandler=_swipCrossHandler;
@property(nonatomic) double cellSpace; // @synthesize cellSpace=_cellSpace;
@property(nonatomic) __weak id <AEUGCPhotoViewerControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <AEUGCPhotoViewerControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;	// IMP=0x00000001007a4904
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x00000001007a4600
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x00000001007a4564
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000001007a4558
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x00000001007a4488
- (void)closeAction:(id)arg1;	// IMP=0x00000001007a4474
- (void)updatePageCount;	// IMP=0x00000001007a4330
- (void)dismissWithAnimiation:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001007a3bbc
- (void)presentFromViewController:(id)arg1 atIndex:(unsigned long long)arg2 withAnimation:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001007a3010
- (void)viewDidLoad;	// IMP=0x00000001007a20d4
- (long long)preferredStatusBarUpdateAnimation;	// IMP=0x00000001007a20cc
- (_Bool)prefersStatusBarHidden;	// IMP=0x00000001007a20c4
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000001007a1df8
- (void)dealloc;	// IMP=0x00000001007a1dc4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

