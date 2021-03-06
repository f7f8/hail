//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class AEUGCFeedWaterfallModel, UIButton, UIImageView, UIView, UIViewController;

@interface AEUGCFeedWaterfallCollectionViewCell : UICollectionViewCell
{
    _Bool _showProfile;	// 8 = 0x8
    _Bool _didSetupConstraints;	// 9 = 0x9
    UIViewController *_parentViewController;	// 16 = 0x10
    UIView *_wrapperView;	// 24 = 0x18
    UIImageView *_feedImageView;	// 32 = 0x20
    UIButton *_likeButton;	// 40 = 0x28
    UIButton *_commentButton;	// 48 = 0x30
    UIView *_line;	// 56 = 0x38
    UIImageView *_avatarImageView;	// 64 = 0x40
    UIImageView *_imageMask;	// 72 = 0x48
    UIButton *_nicknameButton;	// 80 = 0x50
    AEUGCFeedWaterfallModel *_feedWaterfallModel;	// 88 = 0x58
}

+ (_Bool)requiresConstraintBasedLayout;	// IMP=0x00000001006d1638
@property(retain, nonatomic) AEUGCFeedWaterfallModel *feedWaterfallModel; // @synthesize feedWaterfallModel=_feedWaterfallModel;
@property(retain, nonatomic) UIButton *nicknameButton; // @synthesize nicknameButton=_nicknameButton;
@property(retain, nonatomic) UIImageView *imageMask; // @synthesize imageMask=_imageMask;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) UIButton *commentButton; // @synthesize commentButton=_commentButton;
@property(retain, nonatomic) UIButton *likeButton; // @synthesize likeButton=_likeButton;
@property(retain, nonatomic) UIImageView *feedImageView; // @synthesize feedImageView=_feedImageView;
@property(retain, nonatomic) UIView *wrapperView; // @synthesize wrapperView=_wrapperView;
@property(nonatomic) _Bool didSetupConstraints; // @synthesize didSetupConstraints=_didSetupConstraints;
@property(nonatomic) __weak UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(nonatomic) _Bool showProfile; // @synthesize showProfile=_showProfile;
- (void).cxx_destruct;	// IMP=0x00000001006d4548
- (void)bindModel:(id)arg1;	// IMP=0x00000001006d234c
- (void)updateConstraints;	// IMP=0x00000001006d0b54
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001006d06f8

@end

