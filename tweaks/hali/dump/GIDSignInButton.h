//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class UIImageView, UIViewController;

@interface GIDSignInButton : UIControl
{
    UIImageView *_icon;	// 8 = 0x8
    long long _style;	// 16 = 0x10
    long long _colorScheme;	// 24 = 0x18
    UIViewController *_delegate;	// 32 = 0x20
    unsigned long long _brand;	// 40 = 0x28
    unsigned long long _buttonState;	// 48 = 0x30
}

+ (id)buttonTextFont;	// IMP=0x000000010094adfc
@property(nonatomic) unsigned long long buttonState; // @synthesize buttonState=_buttonState;
@property(nonatomic) unsigned long long brand; // @synthesize brand=_brand;
@property(nonatomic) __weak UIViewController *delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long colorScheme; // @synthesize colorScheme=_colorScheme;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;	// IMP=0x000000010094aee8
- (id)buttonText;	// IMP=0x000000010094ad94
- (void)drawButtonText:(struct CGContext *)arg1;	// IMP=0x000000010094ac54
- (void)drawButtonBackground:(struct CGContext *)arg1;	// IMP=0x000000010094a950
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x000000010094a8cc
- (void)updateConstraints;	// IMP=0x000000010094a4d4
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000010094a44c
- (_Bool)isConstraint:(id)arg1 equalToConstraint:(id)arg2;	// IMP=0x000000010094a224
- (double)minWidth;	// IMP=0x000000010094a154
- (void)pressed;	// IMP=0x0000000100949fac
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000100949ecc
- (void)setEnabled:(_Bool)arg1;	// IMP=0x0000000100949de8
- (void)switchToDisabled;	// IMP=0x0000000100949d88
- (void)switchToNormal;	// IMP=0x0000000100949d78
- (void)switchToPressed;	// IMP=0x0000000100949d68
- (void)scopesDidChange:(id)arg1;	// IMP=0x0000000100949cdc
- (unsigned long long)brandFromScopes:(id)arg1;	// IMP=0x0000000100949cb8
- (void)loadIcon;	// IMP=0x0000000100949974
- (void)updateUI;	// IMP=0x00000001009498d8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100949804
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001009496c8
- (void)dealloc;	// IMP=0x000000010094964c
- (void)sharedInit;	// IMP=0x0000000100949398
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010094933c

@end

