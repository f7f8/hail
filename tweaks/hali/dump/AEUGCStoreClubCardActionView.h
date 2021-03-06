//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AEUGCLabel, MASConstraint, UIImageView, UILabel;

@interface AEUGCStoreClubCardActionView : UIView
{
    UIView *_contentWrapView;	// 8 = 0x8
    AEUGCLabel *_storeClubLabel;	// 16 = 0x10
    UIView *_voteWrapView;	// 24 = 0x18
    UIImageView *_voteIcon;	// 32 = 0x20
    UILabel *_voteLabel;	// 40 = 0x28
    MASConstraint *_constraint1;	// 48 = 0x30
    MASConstraint *_constraint2;	// 56 = 0x38
    CDUnknownBlockType _learnMoreHandler;	// 64 = 0x40
    CDUnknownBlockType _voteHandler;	// 72 = 0x48
    id <AEUGCStoreClubCardActionViewModel> _viewModel;	// 80 = 0x50
    struct UIEdgeInsets _margin;	// 88 = 0x58
}

@property(nonatomic) __weak id <AEUGCStoreClubCardActionViewModel> viewModel; // @synthesize viewModel=_viewModel;
@property(copy, nonatomic) CDUnknownBlockType voteHandler; // @synthesize voteHandler=_voteHandler;
@property(copy, nonatomic) CDUnknownBlockType learnMoreHandler; // @synthesize learnMoreHandler=_learnMoreHandler;
@property(nonatomic) struct UIEdgeInsets margin; // @synthesize margin=_margin;
- (void).cxx_destruct;	// IMP=0x0000000100efca1c
- (void)reloadStatus;	// IMP=0x0000000100efc700
- (void)bindModel:(id)arg1;	// IMP=0x0000000100efc228
- (void)setIsVote:(_Bool)arg1;	// IMP=0x0000000100efbac0
- (void)setVoteCount:(long long)arg1;	// IMP=0x0000000100efb500
- (void)setSupportVote:(_Bool)arg1;	// IMP=0x0000000100efb44c
- (void)setType:(long long)arg1;	// IMP=0x0000000100efb1f0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100ef9b48

@end

