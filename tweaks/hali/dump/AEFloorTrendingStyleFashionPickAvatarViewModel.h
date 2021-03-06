//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEBaseTile.h"

@class AEImageTileComponent, AETextTileComponent, NSString;

@interface AEFloorTrendingStyleFashionPickAvatarViewModel : AEBaseTile
{
    _Bool _isFollowing;	// 8 = 0x8
    AEImageTileComponent *_avatarImageModel;	// 16 = 0x10
    AETextTileComponent *_nickNameModel;	// 24 = 0x18
    AETextTileComponent *_titleModel;	// 32 = 0x20
    AETextTileComponent *_followModel;	// 40 = 0x28
    NSString *_headAction;	// 48 = 0x30
    NSString *_memberSeq;	// 56 = 0x38
}

+ (Class)cellClass;	// IMP=0x000000010039c39c
@property(copy, nonatomic) NSString *memberSeq; // @synthesize memberSeq=_memberSeq;
@property(nonatomic) _Bool isFollowing; // @synthesize isFollowing=_isFollowing;
@property(copy, nonatomic) NSString *headAction; // @synthesize headAction=_headAction;
@property(retain, nonatomic) AETextTileComponent *followModel; // @synthesize followModel=_followModel;
@property(retain, nonatomic) AETextTileComponent *titleModel; // @synthesize titleModel=_titleModel;
@property(retain, nonatomic) AETextTileComponent *nickNameModel; // @synthesize nickNameModel=_nickNameModel;
@property(retain, nonatomic) AEImageTileComponent *avatarImageModel; // @synthesize avatarImageModel=_avatarImageModel;
- (void).cxx_destruct;	// IMP=0x000000010039c1ec
- (double)heightForReferenceWidth:(double)arg1;	// IMP=0x000000010039c068
- (id)initWithTileDTO:(id)arg1;	// IMP=0x000000010039bbf8

@end

