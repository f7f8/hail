//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MirrorMaterialManager.h"

#import "MirrorDownloaderDelegate.h"

@class MirrorDownload, MirrorNetworkAdapter, NSMutableArray, NSString, SDWebImageManager;

@interface MirrorMaterialUseCacheManager : MirrorMaterialManager <MirrorDownloaderDelegate>
{
    MirrorNetworkAdapter *_netWorkManager;	// 8 = 0x8
    MirrorDownload *_downloadManager;	// 16 = 0x10
    NSMutableArray *_makeupModelArray;	// 24 = 0x18
    unsigned long long _makeUpArrayCount;	// 32 = 0x20
    NSString *_osVersion;	// 40 = 0x28
    SDWebImageManager *_imageManager;	// 48 = 0x30
}

@property(retain, nonatomic) SDWebImageManager *imageManager; // @synthesize imageManager=_imageManager;
@property(nonatomic) __weak NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(nonatomic) unsigned long long makeUpArrayCount; // @synthesize makeUpArrayCount=_makeUpArrayCount;
@property(retain, nonatomic) NSMutableArray *makeupModelArray; // @synthesize makeupModelArray=_makeupModelArray;
@property(retain, nonatomic) MirrorDownload *downloadManager; // @synthesize downloadManager=_downloadManager;
@property(retain, nonatomic) MirrorNetworkAdapter *netWorkManager; // @synthesize netWorkManager=_netWorkManager;
- (void).cxx_destruct;	// IMP=0x0000000101357010
- (void)clear;	// IMP=0x0000000101356e58
- (void)dealloc;	// IMP=0x0000000101356e08
- (void)MirrorDownloadFail:(id)arg1 MirrorDownload:(id)arg2;	// IMP=0x0000000101356bf8
- (void)MirrorDownloadFinished:(id)arg1 MirrorDownload:(id)arg2;	// IMP=0x0000000101356710
- (void)MirrorDownloadProgress:(float)arg1 Percentage:(long long)arg2 MirrorDownload:(id)arg3;	// IMP=0x000000010135670c
- (void)resumeDownload;	// IMP=0x000000010135665c
- (void)pauseDownload;	// IMP=0x000000010135661c
- (void)cancelDownload;	// IMP=0x00000001013565dc
- (id)modelCacheKeyWithCspuId:(id)arg1 cspuVersion:(id)arg2;	// IMP=0x0000000101356520
- (id)modelCacheKeyWithCspuId:(id)arg1;	// IMP=0x000000010135650c
- (void)downloadFileWithModels:(id)arg1;	// IMP=0x000000010135631c
- (void)downloadFileWithModel:(id)arg1;	// IMP=0x00000001013561cc
- (void)downLoadGlassBgImgWithMakeUpModel:(id)arg1;	// IMP=0x0000000101355b3c
- (id)isNeedDownLoadGlassBgImgWithModelArray:(id)arg1;	// IMP=0x0000000101355798
- (void)processBatFileRequestSuccessData:(id)arg1 RequstModelArray:(id)arg2;	// IMP=0x0000000101355140
- (void)requestBatFilePathWithRequstModelArray:(id)arg1;	// IMP=0x00000001013549d8
- (void)getMaterialWithMakeUpModelArray:(id)arg1 osVersion:(id)arg2;	// IMP=0x0000000101354874
- (void)getMaterialWithMakeUpArrayData:(id)arg1 osVersion:(id)arg2;	// IMP=0x0000000101354194
- (id)init;	// IMP=0x000000010135415c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

