//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AETileAdapterFloor.h"

#import "AIFExposureProtocol.h"
#import "UIScrollViewDelegate.h"

@class AEFloorPhotoScrollViewModel, NSMutableArray, NSString, NSTimer, UIPageControl, UIScrollView;

@interface AEFloorPhotoScroll : AETileAdapterFloor <UIScrollViewDelegate, AIFExposureProtocol>
{
    long long _prePageIndex;	// 8 = 0x8
    AEFloorPhotoScrollViewModel *_photoScrollVM;	// 16 = 0x10
    int _autoScrollTime;	// 24 = 0x18
    _Bool _autoScroll;	// 28 = 0x1c
    _Bool _skipNextScroll;	// 29 = 0x1d
    UIScrollView *_scrollView;	// 32 = 0x20
    UIPageControl *_pageControl;	// 40 = 0x28
    NSTimer *_timer;	// 48 = 0x30
    NSMutableArray *_imgs;	// 56 = 0x38
    struct UIEdgeInsets _contentEdgeInsets;	// 64 = 0x40
}

+ (Class)modelClass;	// IMP=0x000000010036ddc8
+ (id)additionalIdentifiers;	// IMP=0x000000010036dd44
+ (id)identifier;	// IMP=0x000000010036dd18
@property(retain, nonatomic) NSMutableArray *imgs; // @synthesize imgs=_imgs;
@property(nonatomic) _Bool skipNextScroll; // @synthesize skipNextScroll=_skipNextScroll;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(readonly, nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;	// IMP=0x000000010036ffa8
- (id)additionalParaForExposure;	// IMP=0x000000010036fd60
- (id)exposureType;	// IMP=0x000000010036fcc0
- (id)sceneId;	// IMP=0x000000010036fc94
- (void)willMoveToWindow:(id)arg1;	// IMP=0x000000010036fc18
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x000000010036fb68
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x000000010036fab8
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x000000010036f9f0
- (void)changeToPage:(long long)arg1;	// IMP=0x000000010036f548
- (id)getTargetURLFromAction:(id)arg1;	// IMP=0x000000010036f478
- (void)configImageModels:(id)arg1 corderRadius:(double)arg2;	// IMP=0x000000010036eb60
- (_Bool)renderWithTile:(id)arg1;	// IMP=0x000000010036e7e8
@property(nonatomic, getter=isAutoScroll) _Bool autoScroll; // @synthesize autoScroll=_autoScroll;
- (void)dealloc;	// IMP=0x000000010036e614
- (void)tickTock;	// IMP=0x000000010036e480
@property(readonly, nonatomic) double defaultRatio;
- (void)configConstraints;	// IMP=0x000000010036e108
- (void)configComponents;	// IMP=0x000000010036de64
- (id)initFloor;	// IMP=0x000000010036dddc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

