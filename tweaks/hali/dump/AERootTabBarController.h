//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITabBarController.h"

#import "AETabBarDelegate.h"

@class AETabBar, NSString;

@interface AERootTabBarController : UITabBarController <AETabBarDelegate>
{
    _Bool _ignoreNextSelection;	// 8 = 0x8
    AETabBar *_aeTabBar;	// 16 = 0x10
}

@property(nonatomic) _Bool ignoreNextSelection; // @synthesize ignoreNextSelection=_ignoreNextSelection;
@property(retain, nonatomic) AETabBar *aeTabBar; // @synthesize aeTabBar=_aeTabBar;
- (void).cxx_destruct;	// IMP=0x0000000100a45ef4
- (void)tabBar:(id)arg1 didEndCustomizingItems:(id)arg2 changed:(_Bool)arg3;	// IMP=0x0000000100a45e38
- (void)tabBar:(id)arg1 willBeginCustomizingItems:(id)arg2;	// IMP=0x0000000100a45dd4
- (void)tabBar:(id)arg1 didSelectItem:(id)arg2;	// IMP=0x0000000100a45bdc
- (_Bool)tabBar:(id)arg1 shouldSelect:(id)arg2;	// IMP=0x0000000100a459f0
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100a45704
- (void)viewDidLoad;	// IMP=0x0000000100a45660
- (void)dealloc;	// IMP=0x0000000100a45568
- (_Bool)shouldAutorotate;	// IMP=0x0000000100a45560
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x0000000100a45470
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;	// IMP=0x0000000100a453e4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

