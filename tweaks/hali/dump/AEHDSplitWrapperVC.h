//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UISplitViewController.h"

#import "AESessionUserChangeTask.h"
#import "AEVCCommandParamInterceptor.h"
#import "UISplitViewControllerDelegate.h"

@class NSString, UINavigationController, UIViewController;

@interface AEHDSplitWrapperVC : UISplitViewController <UISplitViewControllerDelegate, AEVCCommandParamInterceptor, AESessionUserChangeTask>
{
    UINavigationController *_detailNavigationVC;	// 8 = 0x8
    UINavigationController *_masterNavigationViewController;	// 16 = 0x10
    UIViewController *_masterContentViewController;	// 24 = 0x18
}

@property(retain, nonatomic) UIViewController *masterContentViewController; // @synthesize masterContentViewController=_masterContentViewController;
@property(retain, nonatomic) UINavigationController *masterNavigationViewController; // @synthesize masterNavigationViewController=_masterNavigationViewController;
@property(retain, nonatomic) UINavigationController *detailNavigationVC; // @synthesize detailNavigationVC=_detailNavigationVC;
- (void).cxx_destruct;	// IMP=0x0000000100a23aa4
- (_Bool)shouldTerminateHierarchyTraverse;	// IMP=0x0000000100a239c4
- (void)execute:(unsigned long long)arg1;	// IMP=0x0000000100a239b8
- (void)clearDetailVC;	// IMP=0x0000000100a238e4
- (id)filterParam:(id)arg1 withCommandAlias:(id)arg2 isSelf:(_Bool)arg3;	// IMP=0x0000000100a2389c
- (void)setupSplitViewControllers;	// IMP=0x0000000100a233d4
- (Class)masterContentViewControllerClass;	// IMP=0x0000000100a233c0
- (void)viewDidLoad;	// IMP=0x0000000100a2324c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

