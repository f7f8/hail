//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUGCAdapterViewController.h"

@class AELaunchScreenViewModel, NSObject<OS_dispatch_source>, UIButton, UIImageView, UIWindow;

@interface AELaunchScreenViewController : AEUGCAdapterViewController
{
    UIWindow *_window;	// 8 = 0x8
    UIImageView *_imageView;	// 16 = 0x10
    UIImageView *_logoImageView;	// 24 = 0x18
    UIButton *_dismissButton;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_timer;	// 40 = 0x28
    AELaunchScreenViewModel *_viewModel;	// 48 = 0x30
}

+ (void)downloadLaunchScreenData;	// IMP=0x0000000100728118
+ (void)showLaunchScreenIfNeed;	// IMP=0x00000001007280cc
@property(retain, nonatomic) AELaunchScreenViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;	// IMP=0x0000000100728b04
- (void)dismissAction:(id)arg1;	// IMP=0x0000000100728a60
- (void)dismiss;	// IMP=0x00000001007288f8
- (void)display;	// IMP=0x0000000100728818
- (void)launchAnimation;	// IMP=0x000000010072864c
- (void)launchCountDown;	// IMP=0x000000010072817c
- (void)displayIfNeed;	// IMP=0x000000010072812c
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010072802c
- (void)viewDidLayoutSubviews;	// IMP=0x0000000100727d70
- (void)viewDidLoad;	// IMP=0x0000000100727580
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000001007274d4
- (void)dealloc;	// IMP=0x00000001007274a0

@end

