//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUGCAdapterViewController.h"

@class UILabel;

@interface AEUGCBaseViewController : AEUGCAdapterViewController
{
    UILabel *_labelTitle;	// 8 = 0x8
    CDUnknownBlockType _blockRight;	// 16 = 0x10
    CDUnknownBlockType _blockLeft;	// 24 = 0x18
}

@property(copy, nonatomic) CDUnknownBlockType blockLeft; // @synthesize blockLeft=_blockLeft;
@property(copy, nonatomic) CDUnknownBlockType blockRight; // @synthesize blockRight=_blockRight;
@property(retain, nonatomic) UILabel *labelTitle; // @synthesize labelTitle=_labelTitle;
- (void).cxx_destruct;	// IMP=0x00000001007323b8
- (id)captureView:(id)arg1 frame:(struct CGRect)arg2;	// IMP=0x0000000100732050
- (id)pageTrackName;	// IMP=0x0000000100732034
- (void)onLeftBarButtonTouched:(id)arg1;	// IMP=0x0000000100731fe4
- (void)rightButtonDidClick:(id)arg1;	// IMP=0x0000000100731ef4
- (id)createItemWithImgName:(id)arg1 title:(id)arg2 titleColor:(id)arg3 tag:(long long)arg4 isRight:(_Bool)arg5;	// IMP=0x0000000100731c50
- (void)showMessage:(id)arg1 withView:(id)arg2;	// IMP=0x0000000100731b90
- (void)hiddenLoading;	// IMP=0x0000000100731b48
- (void)showLoadingWithView:(id)arg1;	// IMP=0x0000000100731ad8
- (double)getScale;	// IMP=0x0000000100731a74
- (void)setLeftItemWithImgName:(id)arg1 title:(id)arg2 titleColor:(id)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x000000010073195c
- (void)setRightItemWithImgName:(id)arg1 title:(id)arg2 titleColor:(id)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x0000000100731844
- (void)setTitleView:(id)arg1;	// IMP=0x00000001007314d4
- (void)didReceiveMemoryWarning;	// IMP=0x00000001007314a0
- (void)viewDidLoad;	// IMP=0x00000001007312c8
- (id)initWithParam:(id)arg1;	// IMP=0x0000000100731294

@end

