//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@interface UIImageView (AFNetworking)
+ (void)setSharedImageDownloader:(id)arg1;	// IMP=0x00000001008ba474
+ (id)sharedImageDownloader;	// IMP=0x00000001008ba400
- (_Bool)isActiveTaskURLEqualToURLRequest:(id)arg1;	// IMP=0x00000001008bacd0
- (void)clearActiveDownloadInformation;	// IMP=0x00000001008bacc0
- (void)cancelImageDownloadTask;	// IMP=0x00000001008babf8
- (void)setImageWithURLRequest:(id)arg1 placeholderImage:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;	// IMP=0x00000001008ba55c
- (void)setImageWithURL:(id)arg1 placeholderImage:(id)arg2;	// IMP=0x00000001008ba494
- (void)setImageWithURL:(id)arg1;	// IMP=0x00000001008ba484
@end

