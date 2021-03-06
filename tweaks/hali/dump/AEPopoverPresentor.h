//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AEPopOverBgView, NSMutableArray, UIView;

@interface AEPopoverPresentor : NSObject
{
    AEPopOverBgView *_popoverBgView;	// 8 = 0x8
    UIView *_popoverContainerView;	// 16 = 0x10
    NSMutableArray *_bottomMargins;	// 24 = 0x18
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100a3813c
+ (id)sharedInstance;	// IMP=0x0000000100a37ff8
@property(retain, nonatomic) NSMutableArray *bottomMargins; // @synthesize bottomMargins=_bottomMargins;
@property(retain, nonatomic) UIView *popoverContainerView; // @synthesize popoverContainerView=_popoverContainerView;
@property(retain, nonatomic) AEPopOverBgView *popoverBgView; // @synthesize popoverBgView=_popoverBgView;
- (void).cxx_destruct;	// IMP=0x0000000100a38b98
- (struct CGSize)contentSizeWithSize:(struct CGSize)arg1;	// IMP=0x0000000100a38a04
- (struct CGSize)defaultContentSize;	// IMP=0x0000000100a389ec
- (id)topMostPopover;	// IMP=0x0000000100a38950
- (_Bool)viewControllerIsPopover:(id)arg1;	// IMP=0x0000000100a38800
- (_Bool)currentHasPresentingPopover;	// IMP=0x0000000100a387a4
- (void)updatePopoverBackgroundFrame:(double)arg1;	// IMP=0x0000000100a386e8
- (void)dismissPopover:(_Bool)arg1 dismissAllContent:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100a385a8
- (void)presentPopoverViewController:(id)arg1 size:(struct CGSize)arg2 bottomMargin:(double)arg3 dismissCurrent:(_Bool)arg4 animated:(_Bool)arg5 springAnimated:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x0000000100a383d4
- (void)presentPopoverViewController:(id)arg1 size:(struct CGSize)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100a3835c
- (void)presentPopoverViewController:(id)arg1;	// IMP=0x0000000100a382f8
- (id)init;	// IMP=0x0000000100a38164
- (id)onceInit;	// IMP=0x0000000100a38160
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100a3815c

@end

