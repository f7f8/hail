//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RWPromise.h"

@interface RWProgressPromise : RWPromise
{
    CDUnknownBlockType _progressHandler;	// 8 = 0x8
    CDUnknownBlockType _progressBlock;	// 16 = 0x10
}

+ (id)promise:(CDUnknownBlockType)arg1;	// IMP=0x00000001009370c4
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(readonly, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
- (void).cxx_destruct;	// IMP=0x00000001009375e0
- (void)progress:(double)arg1:(id)arg2;	// IMP=0x000000010093753c
- (void)setProgressHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100937504
- (CDUnknownBlockType)progress;	// IMP=0x00000001009373fc

@end

