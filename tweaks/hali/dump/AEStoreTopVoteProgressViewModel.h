//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AEImageTileComponent, AETextTileComponent;

@interface AEStoreTopVoteProgressViewModel : NSObject
{
    AETextTileComponent *_nameModel;	// 8 = 0x8
    AETextTileComponent *_numberModel;	// 16 = 0x10
    AEImageTileComponent *_imageModel;	// 24 = 0x18
}

@property(retain, nonatomic) AEImageTileComponent *imageModel; // @synthesize imageModel=_imageModel;
@property(retain, nonatomic) AETextTileComponent *numberModel; // @synthesize numberModel=_numberModel;
@property(retain, nonatomic) AETextTileComponent *nameModel; // @synthesize nameModel=_nameModel;
- (void).cxx_destruct;	// IMP=0x0000000100d1b1c4

@end

