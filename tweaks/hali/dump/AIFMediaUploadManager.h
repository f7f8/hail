//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AIFMediaUploadServiceDelegate.h"

@class AFReachability, NSMutableDictionary, NSOperationQueue, NSString;

@interface AIFMediaUploadManager : NSObject <AIFMediaUploadServiceDelegate>
{
    NSMutableDictionary *_uploadInfosDict;	// 8 = 0x8
    NSMutableDictionary *_uploadFinishedCacheDict;	// 16 = 0x10
    NSOperationQueue *_uploadQueue;	// 24 = 0x18
    unsigned long long _imageUploadScene;	// 32 = 0x20
    unsigned long long _videoUploadScene;	// 40 = 0x28
    AFReachability *_reachability;	// 48 = 0x30
    CDUnknownBlockType _completeBlock;	// 56 = 0x38
    CDUnknownBlockType _completeBlockWithAssetURL;	// 64 = 0x40
}

+ (id)resizeImagesForUpLoad:(id)arg1;	// IMP=0x00000001008be2f0
@property(copy, nonatomic) CDUnknownBlockType completeBlockWithAssetURL; // @synthesize completeBlockWithAssetURL=_completeBlockWithAssetURL;
@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
- (void).cxx_destruct;	// IMP=0x00000001008be7bc
- (void)mediaUploadService:(id)arg1 totalBytesWritten:(long long)arg2 totalBytesExpectedToWrite:(long long)arg3;	// IMP=0x00000001008be6a4
- (void)mediaUploadSucc:(id)arg1 result:(id)arg2;	// IMP=0x00000001008be5a0
- (void)mediaUploadFailed:(id)arg1 error:(id)arg2;	// IMP=0x00000001008be42c
- (id)preparedImagesForUpLoad:(id)arg1;	// IMP=0x00000001008be114
- (void)uploadMedia:(id)arg1;	// IMP=0x00000001008bdeb0
- (void)cancelAll;	// IMP=0x00000001008bde14
- (void)checkAllOperationAndInvokeCompleteBlock;	// IMP=0x00000001008bd8c8
- (void)uploadAllMediaWithAddtionInfo:(CDUnknownBlockType)arg1;	// IMP=0x00000001008bd858
- (void)uploadAllMedia:(CDUnknownBlockType)arg1;	// IMP=0x00000001008bd7e8
- (void)removeMedia:(id)arg1;	// IMP=0x00000001008bd628
- (void)addMedia:(id)arg1 WithProgressChangedBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001008bd23c
- (void)addMedia:(id)arg1;	// IMP=0x00000001008bd22c
- (void)uploadSingleMedia:(id)arg1 progressBlock:(CDUnknownBlockType)arg2 complete:(CDUnknownBlockType)arg3;	// IMP=0x00000001008bcd78
- (void)networkStatusChanged:(id)arg1;	// IMP=0x00000001008bcb18
- (void)setVideoUploadScene:(unsigned long long)arg1;	// IMP=0x00000001008bcb08
- (void)setImageUploadScene:(unsigned long long)arg1;	// IMP=0x00000001008bcaf8
- (void)initUploadQueue;	// IMP=0x00000001008bca38
- (void)dealloc;	// IMP=0x00000001008bc988
- (id)init;	// IMP=0x00000001008bc80c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

