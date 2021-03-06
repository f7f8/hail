//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AECoinTaskDTO;

@interface AECoinTaskBigSaleView : UIView
{
    AECoinTaskDTO *_dto;	// 8 = 0x8
    UIView *_containerView;	// 16 = 0x10
    UIView *_headView;	// 24 = 0x18
    UIView *_contentView;	// 32 = 0x20
    UIView *_footView;	// 40 = 0x28
}

@property(retain, nonatomic) UIView *footView; // @synthesize footView=_footView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *headView; // @synthesize headView=_headView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) AECoinTaskDTO *dto; // @synthesize dto=_dto;
- (void).cxx_destruct;	// IMP=0x00000001007fa088
- (void)dealloc;	// IMP=0x00000001007f9eec
- (void)buildAnimation;	// IMP=0x00000001007f9db8
- (void)buildFootView;	// IMP=0x00000001007f7bd4
- (void)buildContentView;	// IMP=0x00000001007f6b2c
- (void)buildHeadView;	// IMP=0x00000001007f596c
- (void)buildContainerView;	// IMP=0x00000001007f54f8
- (void)buildUI;	// IMP=0x00000001007f542c
- (void)layoutSubviews;	// IMP=0x00000001007f53dc
- (void)dismiss;	// IMP=0x00000001007f53d0
- (void)show;	// IMP=0x00000001007f5214
- (id)initWithCoinTaskDTO:(id)arg1;	// IMP=0x00000001007f519c

@end

