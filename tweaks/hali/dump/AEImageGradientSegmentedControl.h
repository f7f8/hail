//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "UIScrollViewDelegate.h"

@class CALayer, NSArray, NSMutableArray, NSString, UIColor, UIFont, UIScrollView;

@interface AEImageGradientSegmentedControl : UIControl <UIScrollViewDelegate>
{
    _Bool _indexChangeFromTouched;	// 8 = 0x8
    NSArray *_titles;	// 16 = 0x10
    unsigned long long _selectedSegmentIndex;	// 24 = 0x18
    unsigned long long _numberOfSegments;	// 32 = 0x20
    CDUnknownBlockType _selectedBlock;	// 40 = 0x28
    UIFont *_segmentFont;	// 48 = 0x30
    UIFont *_selectedSegmentFont;	// 56 = 0x38
    UIColor *_indicatorColor;	// 64 = 0x40
    UIColor *_segmentColor;	// 72 = 0x48
    UIColor *_selectedSegmentColor;	// 80 = 0x50
    double _imageTopGap;	// 88 = 0x58
    double _titleLabTopGap;	// 96 = 0x60
    double _titleLabBottomGap;	// 104 = 0x68
    double _minimumTitleSpacing;	// 112 = 0x70
    NSArray *_unSelectedImages;	// 120 = 0x78
    NSArray *_selectedImages;	// 128 = 0x80
    UIScrollView *_scrollView;	// 136 = 0x88
    NSMutableArray *_itemViews;	// 144 = 0x90
    NSMutableArray *_fittingRects;	// 152 = 0x98
    double _maxFittingHeight;	// 160 = 0xa0
    CALayer *_indicatorLayer;	// 168 = 0xa8
    double _preOffsetX;	// 176 = 0xb0
    struct CGSize _imageSize;	// 184 = 0xb8
}

+ (double)heightWithSelectedTitleFont:(id)arg1 imageSize:(struct CGSize)arg2 imageTopGap:(double)arg3 titleLabTopGap:(double)arg4 titleLabBottomGap:(double)arg5;	// IMP=0x00000001008234ec
+ (double)heightWithSelectedTitleFont:(id)arg1;	// IMP=0x00000001008233a0
@property(nonatomic) _Bool indexChangeFromTouched; // @synthesize indexChangeFromTouched=_indexChangeFromTouched;
@property(nonatomic) double preOffsetX; // @synthesize preOffsetX=_preOffsetX;
@property(retain, nonatomic) CALayer *indicatorLayer; // @synthesize indicatorLayer=_indicatorLayer;
@property(nonatomic) double maxFittingHeight; // @synthesize maxFittingHeight=_maxFittingHeight;
@property(retain, nonatomic) NSMutableArray *fittingRects; // @synthesize fittingRects=_fittingRects;
@property(retain, nonatomic) NSMutableArray *itemViews; // @synthesize itemViews=_itemViews;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(copy, nonatomic) NSArray *selectedImages; // @synthesize selectedImages=_selectedImages;
@property(copy, nonatomic) NSArray *unSelectedImages; // @synthesize unSelectedImages=_unSelectedImages;
@property(nonatomic) double minimumTitleSpacing; // @synthesize minimumTitleSpacing=_minimumTitleSpacing;
@property(nonatomic) double titleLabBottomGap; // @synthesize titleLabBottomGap=_titleLabBottomGap;
@property(nonatomic) double titleLabTopGap; // @synthesize titleLabTopGap=_titleLabTopGap;
@property(nonatomic) double imageTopGap; // @synthesize imageTopGap=_imageTopGap;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(retain, nonatomic) UIColor *selectedSegmentColor; // @synthesize selectedSegmentColor=_selectedSegmentColor;
@property(retain, nonatomic) UIColor *segmentColor; // @synthesize segmentColor=_segmentColor;
@property(retain, nonatomic) UIColor *indicatorColor; // @synthesize indicatorColor=_indicatorColor;
@property(retain, nonatomic) UIFont *selectedSegmentFont; // @synthesize selectedSegmentFont=_selectedSegmentFont;
@property(retain, nonatomic) UIFont *segmentFont; // @synthesize segmentFont=_segmentFont;
@property(copy, nonatomic) CDUnknownBlockType selectedBlock; // @synthesize selectedBlock=_selectedBlock;
@property(nonatomic) unsigned long long numberOfSegments; // @synthesize numberOfSegments=_numberOfSegments;
@property(nonatomic) unsigned long long selectedSegmentIndex; // @synthesize selectedSegmentIndex=_selectedSegmentIndex;
@property(copy, nonatomic) NSArray *titles; // @synthesize titles=_titles;
- (void).cxx_destruct;	// IMP=0x0000000100823a5c
- (void)setSelectedSegmentIndex:(unsigned long long)arg1 animated:(_Bool)arg2 notify:(_Bool)arg3;	// IMP=0x0000000100822e48
- (void)setSelectedSegmentIndex:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100822e38
- (struct CGRect)indicatorLayerRectAtIndex:(long long)arg1;	// IMP=0x0000000100822cc4
- (void)indicatorAnimationToIndex:(long long)arg1;	// IMP=0x0000000100822a30
- (void)itemViewAnimationFrom:(long long)arg1 toIndex:(long long)arg2;	// IMP=0x0000000100822364
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;	// IMP=0x00000001008222d0
- (void)pagingScrollViewDidEndDecelerating:(id)arg1;	// IMP=0x000000010082223c
- (void)scrollToSelectedSegmentedIndexAnimated:(_Bool)arg1;	// IMP=0x0000000100822140
- (double)appropriateContentOffsetXValueAtIndex:(long long)arg1;	// IMP=0x0000000100821f80
- (void)scrollToIndex:(long long)arg1 progress:(double)arg2 animated:(_Bool)arg3;	// IMP=0x0000000100821e54
- (void)updateIndicatorLayerFrameWithProgress:(double)arg1 targetIndex:(long long)arg2;	// IMP=0x0000000100821b58
- (void)setSegmentOffset:(double)arg1 targetIndex:(long long)arg2;	// IMP=0x0000000100821acc
- (void)pagingScrollViewDidScroll:(id)arg1;	// IMP=0x0000000100821970
- (void)itemViewTouched:(id)arg1;	// IMP=0x0000000100821778
- (void)fittingItemViewsAttributes;	// IMP=0x0000000100820cc8
- (void)fittingSubViewsAttributes;	// IMP=0x00000001008209a0
- (void)layoutSubviews;	// IMP=0x000000010082092c
- (void)commonInit;	// IMP=0x0000000100820520
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001008204c8
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100820470

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

