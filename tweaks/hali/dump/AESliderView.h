//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AESliderViewConfig;

@interface AESliderView : UIView
{
    UIView *_highlightView;	// 8 = 0x8
    AESliderViewConfig *_config;	// 16 = 0x10
    UIView *_highlightContainerView;	// 24 = 0x18
}

@property(retain, nonatomic) UIView *highlightContainerView; // @synthesize highlightContainerView=_highlightContainerView;
@property(retain, nonatomic) AESliderViewConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) UIView *highlightView; // @synthesize highlightView=_highlightView;
- (void).cxx_destruct;	// IMP=0x0000000100271090
- (void)setProgress:(double)arg1 duration:(double)arg2;	// IMP=0x0000000100270874
- (id)initWithFrame:(struct CGRect)arg1 config:(id)arg2;	// IMP=0x00000001002700f4

@end

