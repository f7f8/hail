//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUGCListViewCell.h"

@class AEUGCCollectionListDTO, AEUGCFloatingLabelsContentView, NSString;

@interface AEUGCListViewFloatingLabelsCell : AEUGCListViewCell
{
    AEUGCFloatingLabelsContentView *postContentView;	// 16 = 0x10
}

@property(retain, nonatomic) AEUGCFloatingLabelsContentView *postContentView; // @synthesize postContentView;
- (void).cxx_destruct;	// IMP=0x0000000100783f38
- (void)setContent:(id)arg1;	// IMP=0x0000000100783e74
- (void)setContentImageUrl:(id)arg1;	// IMP=0x0000000100783d88
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100783cc4
- (void)commentButtonAction:(id)arg1;	// IMP=0x00000001006ba604
- (void)likeButtonAction:(id)arg1;	// IMP=0x00000001006b9e24
- (void)checkLikeCoin;	// IMP=0x00000001006b9cc4
- (void)executeProfileAction:(id)arg1;	// IMP=0x00000001006b9b08
@property(retain, nonatomic) AEUGCCollectionListDTO *bindDTO;
@property(retain, nonatomic) NSString *currentMemSeq;
@property(retain, nonatomic) NSString *executeUrl;
@property(copy, nonatomic) NSString *commentCntNotiUUID;
@property(copy, nonatomic) NSString *likeCntNotiUUID;
- (void)postConentTouched:(id)arg1;	// IMP=0x00000001006b9a04
- (void)bindCommentCntNotiUUID:(id)arg1 likeCntNotiUUID:(id)arg2;	// IMP=0x00000001006b998c
- (void)bindData:(id)arg1 withLimitedWidth:(double)arg2;	// IMP=0x00000001006b89c8

@end

