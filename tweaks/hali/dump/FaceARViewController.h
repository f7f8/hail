//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUIViewController.h"

#import "AEFaceARDelegate.h"
#import "AFCommandTest.h"
#import "AIFMediaUploadServiceDelegate.h"

@class FaceARSubViewController, MovieMaker, NSMutableArray, NSString, RMDownloadIndicator, UIActivityIndicatorView, UIButton, UIImageView, UIScrollView, UIView;

@interface FaceARViewController : AEUIViewController <AFCommandTest, AIFMediaUploadServiceDelegate, AEFaceARDelegate>
{
    NSMutableArray *postURLArray;	// 8 = 0x8
    NSString *pcImgURL;	// 16 = 0x10
    NSString *mobiImgURL;	// 24 = 0x18
    NSString *coverImgUrl;	// 32 = 0x20
    UIActivityIndicatorView *indicatorView;	// 40 = 0x28
    NSMutableArray *simpImgBigArray;	// 48 = 0x30
    NSMutableArray *simpImgArray;	// 56 = 0x38
    NSMutableArray *simpModelArray;	// 64 = 0x40
    NSMutableArray *simpModelUrlArray;	// 72 = 0x48
    int _screenWidth;	// 80 = 0x50
    int _screenHeight;	// 84 = 0x54
    int _selectIndex;	// 88 = 0x58
    int _frameCount;	// 92 = 0x5c
    NSString *_activityId;	// 96 = 0x60
    NSString *_displayFocus;	// 104 = 0x68
    NSString *_showInAds;	// 112 = 0x70
    NSString *_outputFielPath;	// 120 = 0x78
    UIButton *_takeVideo;	// 128 = 0x80
    UIView *_takeVideoBg;	// 136 = 0x88
    UIScrollView *_selectTempView;	// 144 = 0x90
    NSMutableArray *_arrayWithImageView;	// 152 = 0x98
    MovieMaker *_mvMaker;	// 160 = 0xa0
    RMDownloadIndicator *_loadIndicator;	// 168 = 0xa8
    UIImageView *_maskView;	// 176 = 0xb0
    UIView *_selectTempBox;	// 184 = 0xb8
    UIView *_topBg;	// 192 = 0xc0
    NSMutableArray *_currentImgArray;	// 200 = 0xc8
    FaceARSubViewController *_arvc;	// 208 = 0xd0
    UIActivityIndicatorView *_indicatorViewLoad;	// 216 = 0xd8
}

+ (id)paramsToTest;	// IMP=0x0000000100450450
@property(retain, nonatomic) UIActivityIndicatorView *indicatorViewLoad; // @synthesize indicatorViewLoad=_indicatorViewLoad;
@property(retain, nonatomic) FaceARSubViewController *arvc; // @synthesize arvc=_arvc;
@property(retain, nonatomic) NSMutableArray *currentImgArray; // @synthesize currentImgArray=_currentImgArray;
@property(retain, nonatomic) UIView *topBg; // @synthesize topBg=_topBg;
@property(retain, nonatomic) UIView *selectTempBox; // @synthesize selectTempBox=_selectTempBox;
@property(retain, nonatomic) UIImageView *maskView; // @synthesize maskView=_maskView;
@property(nonatomic) int frameCount; // @synthesize frameCount=_frameCount;
@property(retain, nonatomic) RMDownloadIndicator *loadIndicator; // @synthesize loadIndicator=_loadIndicator;
@property(retain, nonatomic) MovieMaker *mvMaker; // @synthesize mvMaker=_mvMaker;
@property(nonatomic) int selectIndex; // @synthesize selectIndex=_selectIndex;
@property(retain, nonatomic) NSMutableArray *arrayWithImageView; // @synthesize arrayWithImageView=_arrayWithImageView;
@property(retain, nonatomic) UIScrollView *selectTempView; // @synthesize selectTempView=_selectTempView;
@property(retain, nonatomic) UIView *takeVideoBg; // @synthesize takeVideoBg=_takeVideoBg;
@property(retain, nonatomic) UIButton *takeVideo; // @synthesize takeVideo=_takeVideo;
@property(retain, nonatomic) NSString *outputFielPath; // @synthesize outputFielPath=_outputFielPath;
@property(nonatomic) int screenHeight; // @synthesize screenHeight=_screenHeight;
@property(nonatomic) int screenWidth; // @synthesize screenWidth=_screenWidth;
@property(retain, nonatomic) NSString *showInAds; // @synthesize showInAds=_showInAds;
@property(retain, nonatomic) NSString *displayFocus; // @synthesize displayFocus=_displayFocus;
@property(retain, nonatomic) NSString *activityId; // @synthesize activityId=_activityId;
- (void).cxx_destruct;	// IMP=0x0000000100450244
- (long long)preferredInterfaceOrientationForPresentation;	// IMP=0x000000010044fd3c
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x000000010044fd34
- (_Bool)shouldAutorotate;	// IMP=0x000000010044fd2c
- (id)pageTrackName;	// IMP=0x000000010044fd00
- (void)createGIFByImageRefs:(id)arg1 maxFrameCount:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010044f778
- (void)showLoadModelWaiting:(id)arg1;	// IMP=0x000000010044f618
- (void)showWaiting;	// IMP=0x000000010044f46c
- (void)postURL;	// IMP=0x000000010044ed04
- (void)successUpload:(id)arg1;	// IMP=0x000000010044ebcc
- (id)addImage:(id)arg1 secondImage:(id)arg2 withText:(id)arg3 andSize:(struct CGSize)arg4;	// IMP=0x000000010044ea4c
- (void)nextAction:(id)arg1;	// IMP=0x000000010044e930
- (void)mediaUploadFailed:(id)arg1 error:(id)arg2;	// IMP=0x000000010044e92c
- (void)mediaUploadSucc:(id)arg1 result:(id)arg2;	// IMP=0x000000010044e7e8
- (id)imageWithImage:(id)arg1 scaledToSize:(struct CGSize)arg2;	// IMP=0x000000010044e734
- (id)cropImage:(id)arg1 atRect:(struct CGRect)arg2;	// IMP=0x000000010044e57c
- (void)stopTakingVideo;	// IMP=0x000000010044e564
- (void)initVideoSetting;	// IMP=0x000000010044e488
- (void)saveFirstImg:(id)arg1;	// IMP=0x000000010044e378
- (void)glkview:(id)arg1;	// IMP=0x000000010044e0c4
- (_Bool)preparePath:(id)arg1;	// IMP=0x000000010044e02c
- (void)changeModel:(int)arg1;	// IMP=0x000000010044da0c
- (void)setTemplateIndex:(int)arg1;	// IMP=0x000000010044d56c
- (void)handleTap:(id)arg1;	// IMP=0x000000010044d4a0
- (void)backAction;	// IMP=0x000000010044d43c
- (void)setupTempArea;	// IMP=0x000000010044c4b8
- (void)startRecord:(id)arg1;	// IMP=0x000000010044c43c
- (void)setupTakeVideo;	// IMP=0x000000010044aff8
- (void)setupBt;	// IMP=0x000000010044a75c
- (void)initData;	// IMP=0x000000010044a3b8
- (void)dealloc;	// IMP=0x000000010044a2d4
- (_Bool)prefersStatusBarHidden;	// IMP=0x000000010044a2cc
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000010044a204
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010044a13c
- (void)didReceiveMemoryWarning;	// IMP=0x000000010044a124
- (void)viewDidLayoutSubviews;	// IMP=0x000000010044a120
- (void)viewDidLoad;	// IMP=0x0000000100449bdc
- (id)initWithParam:(id)arg1;	// IMP=0x0000000100449ba8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

