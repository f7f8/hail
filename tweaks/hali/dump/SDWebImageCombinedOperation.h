//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SDWebImageOperation.h"

@class NSOperation, NSString;

@interface SDWebImageCombinedOperation : NSObject <SDWebImageOperation>
{
    _Bool _cancelled;	// 8 = 0x8
    CDUnknownBlockType _cancelBlock;	// 16 = 0x10
    NSOperation *_cacheOperation;	// 24 = 0x18
}

@property(retain, nonatomic) NSOperation *cacheOperation; // @synthesize cacheOperation=_cacheOperation;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(nonatomic, getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
- (void).cxx_destruct;	// IMP=0x0000000101464efc
- (void)cancel;	// IMP=0x0000000101464d9c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

