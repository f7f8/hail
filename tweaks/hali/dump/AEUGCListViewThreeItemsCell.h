//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUGCListViewCell.h"

@class AEUGCCollectionListDTO, AEUGCPostThreeItemsView, NSString;

@interface AEUGCListViewThreeItemsCell : AEUGCListViewCell
{
    AEUGCPostThreeItemsView *postContentView;	// 16 = 0x10
}

@property(retain, nonatomic) AEUGCPostThreeItemsView *postContentView; // @synthesize postContentView;
- (void).cxx_destruct;	// IMP=0x00000001007842ec
- (void)setContentImageUrls:(id)arg1;	// IMP=0x0000000100784004
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100783f58
- (void)commentButtonAction:(id)arg1;	// IMP=0x00000001006bc4e4
- (void)likeButtonAction:(id)arg1;	// IMP=0x00000001006bbd04
- (void)checkLikeCoin;	// IMP=0x00000001006bbba4
- (void)executeProfileAction:(id)arg1;	// IMP=0x00000001006bb9e8
@property(retain, nonatomic) AEUGCCollectionListDTO *bindDTO;
- (id)currentMemSeq;	// IMP=0x00000001006bb9c0
- (void)setCurrentMemSeq:(id)arg1;	// IMP=0x00000001006bb9b0
@property(copy, nonatomic) NSString *commentCntNotiUUID;
@property(copy, nonatomic) NSString *likeCntNotiUUID;
- (void)postConentTouched:(id)arg1;	// IMP=0x00000001006bb900
@property(retain, nonatomic) NSString *executeUrl;
- (void)bindCommentCntNotiUUID:(id)arg1 likeCntNotiUUID:(id)arg2;	// IMP=0x00000001006bb86c
- (void)bindData:(id)arg1 withLimitedWidth:(double)arg2;	// IMP=0x00000001006ba920

@end

