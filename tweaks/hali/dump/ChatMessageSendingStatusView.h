//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIActivityIndicatorView, UIImageView;

@interface ChatMessageSendingStatusView : UIView
{
    UIActivityIndicatorView *iView;	// 8 = 0x8
    UIImageView *statusView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100ab0910
- (void)showSendingError;	// IMP=0x0000000100ab08b0
- (void)showSendingSuccess;	// IMP=0x0000000100ab0850
- (void)showSending;	// IMP=0x0000000100ab07e8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100ab01d0

@end

