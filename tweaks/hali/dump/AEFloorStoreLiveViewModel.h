//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEBaseTile.h"

@class AEImageTileComponent, AETextTileComponent;

@interface AEFloorStoreLiveViewModel : AEBaseTile
{
    AETextTileComponent *_titleModel;	// 8 = 0x8
    AETextTileComponent *_viewAllModel;	// 16 = 0x10
    AETextTileComponent *_statusModel;	// 24 = 0x18
    AEImageTileComponent *_liveImageModel;	// 32 = 0x20
    AEImageTileComponent *_noticeImageModel;	// 40 = 0x28
    AETextTileComponent *_noticeTitleModel;	// 48 = 0x30
    AETextTileComponent *_liveTimeModel;	// 56 = 0x38
    AETextTileComponent *_subscribeModel;	// 64 = 0x40
    AETextTileComponent *_liveIdModel;	// 72 = 0x48
    AETextTileComponent *_noticeUrlModel;	// 80 = 0x50
}

+ (Class)cellClass;	// IMP=0x0000000100d0b6a4
@property(retain, nonatomic) AETextTileComponent *noticeUrlModel; // @synthesize noticeUrlModel=_noticeUrlModel;
@property(retain, nonatomic) AETextTileComponent *liveIdModel; // @synthesize liveIdModel=_liveIdModel;
@property(retain, nonatomic) AETextTileComponent *subscribeModel; // @synthesize subscribeModel=_subscribeModel;
@property(retain, nonatomic) AETextTileComponent *liveTimeModel; // @synthesize liveTimeModel=_liveTimeModel;
@property(retain, nonatomic) AETextTileComponent *noticeTitleModel; // @synthesize noticeTitleModel=_noticeTitleModel;
@property(retain, nonatomic) AEImageTileComponent *noticeImageModel; // @synthesize noticeImageModel=_noticeImageModel;
@property(retain, nonatomic) AEImageTileComponent *liveImageModel; // @synthesize liveImageModel=_liveImageModel;
@property(retain, nonatomic) AETextTileComponent *statusModel; // @synthesize statusModel=_statusModel;
@property(retain, nonatomic) AETextTileComponent *viewAllModel; // @synthesize viewAllModel=_viewAllModel;
@property(retain, nonatomic) AETextTileComponent *titleModel; // @synthesize titleModel=_titleModel;
- (void).cxx_destruct;	// IMP=0x0000000100d0b4a0
- (id)initWithTileDTO:(id)arg1;	// IMP=0x0000000100d0accc

@end

