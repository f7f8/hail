//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AEUGCVideoPlayer, UIButton;

@interface AEUGCWatchWhileBuyingView : UIView
{
    AEUGCVideoPlayer *_videoPlayer;	// 8 = 0x8
    UIButton *_closeBtn;	// 16 = 0x10
    CDUnknownBlockType _block;	// 24 = 0x18
}

+ (void)removePlayerIfExist;	// IMP=0x0000000100f57f0c
+ (void)removePlayer;	// IMP=0x0000000100f57f00
+ (void)showPlayerWhileBuying:(id)arg1 withTapBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100f57ce8
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) AEUGCVideoPlayer *videoPlayer; // @synthesize videoPlayer=_videoPlayer;
- (void).cxx_destruct;	// IMP=0x0000000100f58094
- (void)dealloc;	// IMP=0x0000000100f57f8c
- (void)handlePlayOtherVideoNotification:(id)arg1;	// IMP=0x0000000100f57c34
- (void)handleVCChangeNotification:(id)arg1;	// IMP=0x0000000100f57b10
- (void)handeTapGesture:(id)arg1;	// IMP=0x0000000100f57a7c
- (void)handlePanGesture:(id)arg1;	// IMP=0x0000000100f577c4
- (void)closeBtnClicked:(id)arg1;	// IMP=0x0000000100f57768
- (void)configConstraint;	// IMP=0x0000000100f570c4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100f56eb8

@end

