//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEBaseTileComponent.h"

@class AEComponentInfoButtonViewModel, NSString;

@interface AEUGCFloorActionToolsViewViewModel : AEBaseTileComponent
{
    _Bool _isLikeByMe;	// 8 = 0x8
    NSString *_postId;	// 16 = 0x10
    long long _likeCnt;	// 24 = 0x18
    long long _commentCnt;	// 32 = 0x20
    AEComponentInfoButtonViewModel *_infoButton1Model;	// 40 = 0x28
    AEComponentInfoButtonViewModel *_infoButton2Model;	// 48 = 0x30
    AEComponentInfoButtonViewModel *_infoButton3Model;	// 56 = 0x38
}

@property(retain, nonatomic) AEComponentInfoButtonViewModel *infoButton3Model; // @synthesize infoButton3Model=_infoButton3Model;
@property(retain, nonatomic) AEComponentInfoButtonViewModel *infoButton2Model; // @synthesize infoButton2Model=_infoButton2Model;
@property(retain, nonatomic) AEComponentInfoButtonViewModel *infoButton1Model; // @synthesize infoButton1Model=_infoButton1Model;
@property(nonatomic) long long commentCnt; // @synthesize commentCnt=_commentCnt;
@property(nonatomic) long long likeCnt; // @synthesize likeCnt=_likeCnt;
@property(nonatomic) _Bool isLikeByMe; // @synthesize isLikeByMe=_isLikeByMe;
@property(copy, nonatomic) NSString *postId; // @synthesize postId=_postId;
- (void).cxx_destruct;	// IMP=0x0000000100d8d2bc

@end

