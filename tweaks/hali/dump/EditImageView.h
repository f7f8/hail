//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@class UIButton;

@interface EditImageView : UIImageView
{
    UIImageView *_deleteImgView;	// 8 = 0x8
    UIImageView *_videoImgView;	// 16 = 0x10
    _Bool _canDelete;	// 24 = 0x18
    _Bool _isVideo;	// 25 = 0x19
    _Bool _isProcessing;	// 26 = 0x1a
    CDUnknownBlockType _deleteBlock;	// 32 = 0x20
    CDUnknownBlockType _selectBlock;	// 40 = 0x28
    UIButton *_addNewEvidence;	// 48 = 0x30
    UIImageView *_contentImageView;	// 56 = 0x38
}

@property(retain) UIImageView *contentImageView; // @synthesize contentImageView=_contentImageView;
@property(retain, nonatomic) UIButton *addNewEvidence; // @synthesize addNewEvidence=_addNewEvidence;
@property(copy) CDUnknownBlockType selectBlock; // @synthesize selectBlock=_selectBlock;
@property(copy) CDUnknownBlockType deleteBlock; // @synthesize deleteBlock=_deleteBlock;
@property(nonatomic) _Bool isProcessing; // @synthesize isProcessing=_isProcessing;
@property(nonatomic) _Bool isVideo; // @synthesize isVideo=_isVideo;
@property(nonatomic) _Bool canDelete; // @synthesize canDelete=_canDelete;
- (void).cxx_destruct;	// IMP=0x0000000100097c98
- (void)buildUI;	// IMP=0x0000000100097284
- (id)initWithEditOption:(_Bool)arg1 completeBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000971c8

@end

