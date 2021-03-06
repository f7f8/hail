//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUIViewController.h"

#import "AEOverlayViewDelegate.h"
#import "AEPhotoPickerDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class AEOverlayView, NSArray, NSMutableArray, NSString, NSTimer, UIButton, UIImagePickerController, UIImageView, UIView;

@interface OverlayViewController : AEUIViewController <UINavigationControllerDelegate, UIImagePickerControllerDelegate, AEPhotoPickerDelegate, AEOverlayViewDelegate>
{
    struct CGRect bounds;	// 8 = 0x8
    UIButton *takePictureButton;	// 40 = 0x28
    UIButton *doneButton;	// 48 = 0x30
    NSTimer *cameraTimer;	// 56 = 0x38
    long long photoNums;	// 64 = 0x40
    UIImageView *shotImgNow;	// 72 = 0x48
    UIButton *flushBt;	// 80 = 0x50
    UIButton *rearBt;	// 88 = 0x58
    UIButton *albumBt;	// 96 = 0x60
    UIButton *shotBt;	// 104 = 0x68
    NSMutableArray *postImgArray;	// 112 = 0x70
    int addTargetOld;	// 120 = 0x78
    AEOverlayView *optionArea;	// 128 = 0x80
    UIView *optionAreaTop;	// 136 = 0x88
    UIButton *backButton;	// 144 = 0x90
    double _cameraRatio;	// 152 = 0x98
    _Bool isFinish;	// 160 = 0xa0
    int _maxShot;	// 164 = 0xa4
    int _addTarget;	// 168 = 0xa8
    UIView *shotImgList;	// 176 = 0xb0
    id <OverlayViewControllerDelegate> _delegate;	// 184 = 0xb8
    UIImagePickerController *_imagePickerController;	// 192 = 0xc0
    NSMutableArray *_origenImgData;	// 200 = 0xc8
    NSArray *_tempChangeData;	// 208 = 0xd0
}

@property(nonatomic) int addTarget; // @synthesize addTarget=_addTarget;
@property(nonatomic) int maxShot; // @synthesize maxShot=_maxShot;
@property(retain, nonatomic) NSArray *tempChangeData; // @synthesize tempChangeData=_tempChangeData;
@property(retain, nonatomic) NSMutableArray *origenImgData; // @synthesize origenImgData=_origenImgData;
@property(retain, nonatomic) UIImagePickerController *imagePickerController; // @synthesize imagePickerController=_imagePickerController;
@property(nonatomic) id <OverlayViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *shotImgList; // @synthesize shotImgList;
- (void).cxx_destruct;	// IMP=0x000000010087cb0c
- (void)imagePickerControllerDidCancel:(id)arg1;	// IMP=0x000000010087c938
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;	// IMP=0x000000010087c2cc
- (void)rearMode:(id)arg1;	// IMP=0x000000010087c144
- (void)flushMode:(id)arg1;	// IMP=0x000000010087bf54
- (void)aeOverlayViewGoToAlbum:(id)arg1;	// IMP=0x000000010087bebc
- (void)aeOverlayViewGoToCamera:(id)arg1;	// IMP=0x000000010087beb8
- (void)aeOverlayViewTakePhoto:(id)arg1;	// IMP=0x000000010087be30
- (void)aeOverlayViewDone:(id)arg1;	// IMP=0x000000010087bdb4
- (void)doBack:(id)arg1;	// IMP=0x000000010087bd58
- (void)setupImagePicker:(long long)arg1;	// IMP=0x000000010087ab90
- (void)aeRemovePhoto:(id)arg1;	// IMP=0x000000010087a684
- (void)doCancelPost;	// IMP=0x000000010087a350
- (_Bool)prefersStatusBarHidden;	// IMP=0x000000010087a348
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000010087a2b4
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100879cdc
- (void)viewDidLoad;	// IMP=0x0000000100879a18
- (id)pageTrackName;	// IMP=0x00000001008799ec
- (id)init;	// IMP=0x0000000100879864

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

