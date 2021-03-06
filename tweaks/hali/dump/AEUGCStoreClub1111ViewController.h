//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUGCAdapterViewController.h"

#import "UIGestureRecognizerDelegate.h"
#import "UIPageViewControllerDataSource.h"
#import "UIPageViewControllerDelegate.h"
#import "UIScrollViewDelegate.h"

@class AEUGCStoreClub1111BannerView, AEUGCStoreClub1111ViewModel, AEUGCStoreClubDynamicItem, HMSegmentedControl, NSArray, NSDictionary, NSString, UIAttachmentBehavior, UICollectionView, UIDynamicAnimator, UIDynamicItemBehavior, UILabel, UIPageViewController, UIPanGestureRecognizer, UIScrollView, UIView;

@interface AEUGCStoreClub1111ViewController : AEUGCAdapterViewController <UIScrollViewDelegate, UIGestureRecognizerDelegate, UIPageViewControllerDelegate, UIPageViewControllerDataSource>
{
    NSDictionary *_params;	// 8 = 0x8
    _Bool _isVertical;	// 16 = 0x10
    double _headerHeight;	// 24 = 0x18
    AEUGCStoreClubDynamicItem *_dynamicItem;	// 32 = 0x20
    UIDynamicAnimator *_animator;	// 40 = 0x28
    UIDynamicItemBehavior *_decelerationBehavior;	// 48 = 0x30
    UIAttachmentBehavior *_springBehavior;	// 56 = 0x38
    UIPanGestureRecognizer *_panGesture;	// 64 = 0x40
    UIScrollView *_mainScrollView;	// 72 = 0x48
    UIView *_topContainerView;	// 80 = 0x50
    AEUGCStoreClub1111BannerView *_bannerView;	// 88 = 0x58
    HMSegmentedControl *_segmentedControl;	// 96 = 0x60
    UIPageViewController *_pageViewController;	// 104 = 0x68
    NSArray *_subviewControllersArray;	// 112 = 0x70
    UICollectionView *_currentFeedCollectionView;	// 120 = 0x78
    UILabel *_cartCountLbl;	// 128 = 0x80
    AEUGCStoreClub1111ViewModel *_viewModel;	// 136 = 0x88
}

@property(retain, nonatomic) AEUGCStoreClub1111ViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UILabel *cartCountLbl; // @synthesize cartCountLbl=_cartCountLbl;
@property(nonatomic) __weak UICollectionView *currentFeedCollectionView; // @synthesize currentFeedCollectionView=_currentFeedCollectionView;
@property(retain, nonatomic) NSArray *subviewControllersArray; // @synthesize subviewControllersArray=_subviewControllersArray;
@property(retain, nonatomic) UIPageViewController *pageViewController; // @synthesize pageViewController=_pageViewController;
@property(retain, nonatomic) HMSegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
@property(retain, nonatomic) AEUGCStoreClub1111BannerView *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) UIView *topContainerView; // @synthesize topContainerView=_topContainerView;
@property(retain, nonatomic) UIScrollView *mainScrollView; // @synthesize mainScrollView=_mainScrollView;
@property(retain, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(nonatomic) __weak UIAttachmentBehavior *springBehavior; // @synthesize springBehavior=_springBehavior;
@property(nonatomic) __weak UIDynamicItemBehavior *decelerationBehavior; // @synthesize decelerationBehavior=_decelerationBehavior;
@property(retain, nonatomic) UIDynamicAnimator *animator; // @synthesize animator=_animator;
@property(retain, nonatomic) AEUGCStoreClubDynamicItem *dynamicItem; // @synthesize dynamicItem=_dynamicItem;
@property(nonatomic) _Bool isVertical; // @synthesize isVertical=_isVertical;
@property(nonatomic) double headerHeight; // @synthesize headerHeight=_headerHeight;
- (void).cxx_destruct;	// IMP=0x0000000100ed59fc
- (id)pageTrackParams;	// IMP=0x0000000100ed5538
- (id)pageTrackName;	// IMP=0x0000000100ed5528
- (void)controlScrollForVertical:(double)arg1 AndState:(long long)arg2;	// IMP=0x0000000100ed49d4
- (void)panGestureRecognizerAction:(id)arg1;	// IMP=0x0000000100ed4354
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0000000100ed4274
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x0000000100ed4174
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0000000100ed4108
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;	// IMP=0x0000000100ed4078
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;	// IMP=0x0000000100ed3fe8
- (void)pageViewController:(id)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(_Bool)arg4;	// IMP=0x0000000100ed3d6c
- (void)shopAction:(id)arg1;	// IMP=0x0000000100ed3d1c
- (void)searchAction:(id)arg1;	// IMP=0x0000000100ed3ccc
- (void)shareAction;	// IMP=0x0000000100ed3988
- (void)updateItemCount;	// IMP=0x0000000100ed3828
- (void)showGetCouponSuccessAlertView:(id)arg1 action:(id)arg2 successHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100ed346c
- (void)showVoteGetCouponFailureAlertView:(CDUnknownBlockType)arg1;	// IMP=0x0000000100ed323c
- (void)loginIfNeed:(CDUnknownBlockType)arg1;	// IMP=0x0000000100ed30fc
- (void)getCoupon:(id)arg1 successHandler:(CDUnknownBlockType)arg2 failureHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100ed2cfc
- (void)updateNavigationBar:(double)arg1;	// IMP=0x0000000100ed2884
- (void)updateNavigationBarIndicator:(_Bool)arg1;	// IMP=0x0000000100ed22b4
- (double)pageScollViewTopGap;	// IMP=0x0000000100ed2298
- (double)mainScrollViewMaxOffSetY;	// IMP=0x0000000100ed2244
- (void)loadSubviewControllerWithIndex:(long long)arg1;	// IMP=0x0000000100ed1b00
- (void)loadSegmentedControlWithIndex:(long long)arg1;	// IMP=0x0000000100ed1980
- (void)loadBanner;	// IMP=0x0000000100ed05ec
- (void)loadData;	// IMP=0x0000000100ed02c8
- (void)configAutoLayout;	// IMP=0x0000000100ecf5b0
- (void)configView;	// IMP=0x0000000100ece660
- (void)configBehavior;	// IMP=0x0000000100ece500
- (long long)preferredStatusBarStyle;	// IMP=0x0000000100ece4cc
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100ece22c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100ecdfa4
- (void)viewDidLoad;	// IMP=0x0000000100ecdf24
- (id)initWithParam:(id)arg1;	// IMP=0x0000000100ecde48
- (void)dealloc;	// IMP=0x0000000100ecde14

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

