//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AVPlayer.h"

#import "AVPlayerItemOutputPullDelegate.h"
#import "AVPlayerItemOutputPushDelegate.h"

@class AVPlayerItem, AVPlayerItemVideoOutput, CADisplayLink, NSString, VSImageView, VSImageYuvToRgbFilter;

@interface VSPlayer : AVPlayer <AVPlayerItemOutputPullDelegate, AVPlayerItemOutputPushDelegate>
{
    CADisplayLink *_displayLink;	// 16 = 0x10
    AVPlayerItemVideoOutput *_videoOutput;	// 24 = 0x18
    AVPlayerItem *_oldItem;	// 32 = 0x20
    double _itemsLoopLength;	// 40 = 0x28
    id _timeObserver;	// 48 = 0x30
    _Bool _rendererWasSetup;	// 56 = 0x38
    struct CGAffineTransform _rendererTransform;	// 64 = 0x40
    _Bool _loopEnabled;	// 112 = 0x70
    _Bool _shouldSuppressPlayerRendering;	// 113 = 0x71
    _Bool _autoRotate;	// 114 = 0x72
    id <VSPlayerDelegate> _delegate;	// 120 = 0x78
    VSImageView *_preview;	// 128 = 0x80
    VSImageYuvToRgbFilter *_yuvToRgbFilter;	// 136 = 0x88
}

@property(retain, nonatomic) VSImageYuvToRgbFilter *yuvToRgbFilter; // @synthesize yuvToRgbFilter=_yuvToRgbFilter;
@property(retain, nonatomic) VSImageView *preview; // @synthesize preview=_preview;
@property(nonatomic) _Bool autoRotate; // @synthesize autoRotate=_autoRotate;
@property(nonatomic) _Bool shouldSuppressPlayerRendering; // @synthesize shouldSuppressPlayerRendering=_shouldSuppressPlayerRendering;
@property(nonatomic) _Bool loopEnabled; // @synthesize loopEnabled=_loopEnabled;
@property(nonatomic) __weak id <VSPlayerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x0000000101adb454
- (void)removeAllTargets;	// IMP=0x0000000101adb320
- (void)addTarget:(id)arg1;	// IMP=0x0000000101adb2a0
@property(readonly, nonatomic) _Bool isSendingPlayMessages;
@property(readonly, nonatomic) CDStruct_1b6d18a9 itemDuration;
@property(readonly, nonatomic) _Bool isPlaying;
- (void)setSmoothLoopItemByAsset:(id)arg1 smoothLoopCount:(unsigned long long)arg2;	// IMP=0x0000000101adb03c
- (void)setSmoothLoopItemByUrl:(id)arg1 smoothLoopCount:(unsigned long long)arg2;	// IMP=0x0000000101adafd4
- (void)setSmoothLoopItemByStringPath:(id)arg1 smoothLoopCount:(unsigned long long)arg2;	// IMP=0x0000000101adaf70
- (void)setItem:(id)arg1;	// IMP=0x0000000101adaf64
- (void)setItemByAsset:(id)arg1;	// IMP=0x0000000101adaf10
- (void)setItemByUrl:(id)arg1;	// IMP=0x0000000101adaeb8
- (void)setItemByStringPath:(id)arg1;	// IMP=0x0000000101adae64
@property(readonly, nonatomic) CDStruct_1b6d18a9 playableDuration;
- (void)initObserver;	// IMP=0x0000000101adaa70
- (void)unsetupVideoOutputToItem:(id)arg1;	// IMP=0x0000000101ada9c4
- (void)setupVideoOutputToItem:(id)arg1;	// IMP=0x0000000101ada4f8
- (void)unsetupDisplayLink;	// IMP=0x0000000101ada460
- (void)setupDisplayLink;	// IMP=0x0000000101ada2fc
- (void)suspendDisplay;	// IMP=0x0000000101ada2a8
- (void)willRenderFrame:(id)arg1;	// IMP=0x0000000101ada228
- (void)replaceCurrentItemWithPlayerItem:(id)arg1;	// IMP=0x0000000101ada1c8
- (void)renderVideo:(double)arg1;	// IMP=0x0000000101ada0cc
- (void)outputMediaDataWillChange:(id)arg1;	// IMP=0x0000000101ada048
- (void)removeOldObservers;	// IMP=0x0000000101ad9f84
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000101ad9dd4
- (void)playReachedEnd:(id)arg1;	// IMP=0x0000000101ad9c84
- (void)endSendingPlayMessages;	// IMP=0x0000000101ad9c34
- (void)beginSendingPlayMessages;	// IMP=0x0000000101ad9990
- (void)dealloc;	// IMP=0x0000000101ad98b4
- (id)init;	// IMP=0x0000000101ad97fc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

