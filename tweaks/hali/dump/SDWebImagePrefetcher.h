//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSObject<OS_dispatch_queue>, SDWebImageManager;

@interface SDWebImagePrefetcher : NSObject
{
    SDWebImageManager *_manager;	// 8 = 0x8
    unsigned long long _options;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_prefetcherQueue;	// 24 = 0x18
    id <SDWebImagePrefetcherDelegate> _delegate;	// 32 = 0x20
    NSArray *_prefetchURLs;	// 40 = 0x28
    unsigned long long _requestedCount;	// 48 = 0x30
    unsigned long long _skippedCount;	// 56 = 0x38
    unsigned long long _finishedCount;	// 64 = 0x40
    double _startedTime;	// 72 = 0x48
    CDUnknownBlockType _completionBlock;	// 80 = 0x50
    CDUnknownBlockType _progressBlock;	// 88 = 0x58
}

+ (id)sharedImagePrefetcher;	// IMP=0x0000000101460dcc
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) double startedTime; // @synthesize startedTime=_startedTime;
@property(nonatomic) unsigned long long finishedCount; // @synthesize finishedCount=_finishedCount;
@property(nonatomic) unsigned long long skippedCount; // @synthesize skippedCount=_skippedCount;
@property(nonatomic) unsigned long long requestedCount; // @synthesize requestedCount=_requestedCount;
@property(retain, nonatomic) NSArray *prefetchURLs; // @synthesize prefetchURLs=_prefetchURLs;
@property(nonatomic) __weak id <SDWebImagePrefetcherDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) NSObject<OS_dispatch_queue> *prefetcherQueue; // @synthesize prefetcherQueue=_prefetcherQueue;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(retain, nonatomic) SDWebImageManager *manager; // @synthesize manager=_manager;
- (void).cxx_destruct;	// IMP=0x0000000101461bbc
- (void)cancelPrefetching;	// IMP=0x00000001014619b4
- (void)prefetchURLs:(id)arg1 progress:(CDUnknownBlockType)arg2 completed:(CDUnknownBlockType)arg3;	// IMP=0x000000010146180c
- (void)prefetchURLs:(id)arg1;	// IMP=0x00000001014617f8
- (void)reportStatus;	// IMP=0x00000001014616e8
- (void)startPrefetchingAtIndex:(unsigned long long)arg1;	// IMP=0x000000010146106c
@property(nonatomic) unsigned long long maxConcurrentDownloads;
- (id)initWithImageManager:(id)arg1;	// IMP=0x0000000101460ecc
- (id)init;	// IMP=0x0000000101460e74

@end

