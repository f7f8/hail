//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UILabel;

@interface AEModuleTreeBottomAlertView : UIView
{
    NSString *_text;	// 8 = 0x8
    UILabel *_labelTitle;	// 16 = 0x10
    UIView *_viewBg;	// 24 = 0x18
}

@property(retain, nonatomic) UIView *viewBg; // @synthesize viewBg=_viewBg;
@property(retain, nonatomic) UILabel *labelTitle; // @synthesize labelTitle=_labelTitle;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;	// IMP=0x0000000100b2c750
- (void)animationHidden;	// IMP=0x0000000100b2c1ec
- (void)animationShow;	// IMP=0x0000000100b2bfd4
- (void)showAlert;	// IMP=0x0000000100b2bf10
- (void)initView;	// IMP=0x0000000100b2ba64
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100b2ba0c

@end

