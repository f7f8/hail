//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUGCShopNewsBaseCell.h"

@class AEUGCComponentLiveView;

@interface AEUGCShopNewsLiveCell : AEUGCShopNewsBaseCell
{
    AEUGCComponentLiveView *_contentView;	// 56 = 0x38
    CDUnknownBlockType _contentAction;	// 64 = 0x40
}

+ (struct CGSize)autoLayoutCalculateSizeWithViewModel:(id)arg1 preferredMaxLayoutWidth:(double)arg2;	// IMP=0x0000000100ec7eb4
- (CDUnknownBlockType)contentAction;	// IMP=0x0000000100ec83ac
- (void).cxx_destruct;	// IMP=0x0000000100ec83bc
- (void)reloadContentView;	// IMP=0x0000000100ec8300
- (void)setContentAction:(CDUnknownBlockType)arg1;	// IMP=0x0000000100ec8138
- (void)stopAnimation;	// IMP=0x0000000100ec7e9c
- (void)startAnimation;	// IMP=0x0000000100ec7e84
- (id)viewModel;	// IMP=0x0000000100ec7e14
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100ec7d3c

@end

