//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

#import "UIScrollViewDelegate.h"

@class AEUGCHDLazyLoadingImageView, NSString, UIImage, UILongPressGestureRecognizer, UITapGestureRecognizer, UIView;

@interface AEUGCZoomingImageScrollView : UIScrollView <UIScrollViewDelegate>
{
    UIView *_tapView;	// 8 = 0x8
    AEUGCHDLazyLoadingImageView *_imageView;	// 16 = 0x10
    UITapGestureRecognizer *_singleTapGestureRecognizer;	// 24 = 0x18
    UITapGestureRecognizer *_doubleTapGestureRecognizer;	// 32 = 0x20
    UITapGestureRecognizer *_singleTapGestureRecognizerForBackground;	// 40 = 0x28
    UITapGestureRecognizer *_doubleTapGestureRecognizerForBackground;	// 48 = 0x30
    UILongPressGestureRecognizer *_longPressGestureRecognizer;	// 56 = 0x38
    UILongPressGestureRecognizer *_longPressGestureRecognizerForBackground;	// 64 = 0x40
    _Bool _zoomEnabled;	// 72 = 0x48
    NSString *_imageURLString;	// 80 = 0x50
    id <AEUGCZoomingScrollViewDelegate> _tapDelegate;	// 88 = 0x58
}

@property(nonatomic, getter=isZoomEnabled) _Bool zoomEnabled; // @synthesize zoomEnabled=_zoomEnabled;
@property(nonatomic) __weak id <AEUGCZoomingScrollViewDelegate> tapDelegate; // @synthesize tapDelegate=_tapDelegate;
@property(copy, nonatomic) NSString *imageURLString; // @synthesize imageURLString=_imageURLString;
- (void).cxx_destruct;	// IMP=0x00000001007d09f0
- (void)backgroundViewLongPressDetected:(id)arg1;	// IMP=0x00000001007d0950
- (void)backgroundViewSingleTapDetected:(id)arg1;	// IMP=0x00000001007d0944
- (void)backgroundViewDoubleTapDetected:(id)arg1;	// IMP=0x00000001007d0858
- (void)longPressDetected:(id)arg1;	// IMP=0x00000001007d080c
- (void)singleTapDetected:(id)arg1;	// IMP=0x00000001007d0800
- (void)doubleTapDetected:(id)arg1;	// IMP=0x00000001007d0794
- (void)handleLongPress;	// IMP=0x00000001007d06c4
- (void)handleSingleTap;	// IMP=0x00000001007d05f4
- (void)handleDoubleTap:(struct CGPoint)arg1;	// IMP=0x00000001007d0428
- (void)scrollViewDidZoom:(id)arg1;	// IMP=0x00000001007d03f4
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;	// IMP=0x00000001007d03e4
- (id)viewForZoomingInScrollView:(id)arg1;	// IMP=0x00000001007d03d4
- (void)setMaxMinZoomScalesForCurrentBounds;	// IMP=0x00000001007d0174
- (void)scaleToFit;	// IMP=0x00000001007d0130
- (void)startLoading;	// IMP=0x00000001007cff1c
@property(readonly, nonatomic) UIImage *sdImage;
- (void)setBackgroundColor:(id)arg1;	// IMP=0x00000001007cfdc4
- (void)layoutSubviews;	// IMP=0x00000001007cfc40
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x00000001007cfbf0
- (void)dealloc;	// IMP=0x00000001007cfb9c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001007cf6f4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

