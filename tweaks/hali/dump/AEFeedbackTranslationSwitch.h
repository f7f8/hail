//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UILabel;

@interface AEFeedbackTranslationSwitch : UIView
{
    UILabel *_descriptionLabel;	// 8 = 0x8
    UIButton *_switchButton;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001004f610c
- (void)setSwitchTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x00000001004f60f0
@property(readonly, nonatomic) double adjustedHeight;
- (void)setHaveTranslated:(_Bool)arg1;	// IMP=0x00000001004f5ef0
- (void)setupSeparatorLine;	// IMP=0x00000001004f5be4
- (void)setupSwitchButton;	// IMP=0x00000001004f5794
- (void)setupDescLabel;	// IMP=0x00000001004f5344
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001004f5290

@end

