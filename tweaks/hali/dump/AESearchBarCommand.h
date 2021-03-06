//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFCommandService.h"

@class AESearchBarController, AESearchBarView, AESearchDefaultPanelVC<UISearchResultsUpdating>, AESearchResultVC<UISearchResultsUpdating>, UIView, UIViewController;

@interface AESearchBarCommand : AFCommandService
{
    _Bool _isStoreSearch;	// 8 = 0x8
    AESearchResultVC<UISearchResultsUpdating> *_searchResultVC;	// 16 = 0x10
    AESearchDefaultPanelVC<UISearchResultsUpdating> *_searchPanelVC;	// 24 = 0x18
    AESearchBarController *_searchBarController;	// 32 = 0x20
    UIViewController *_searchContainer;	// 40 = 0x28
    AESearchBarView *_searchBarView;	// 48 = 0x30
    UIView *_leftView;	// 56 = 0x38
    long long *_searchBarType;	// 64 = 0x40
}

@property(nonatomic) long long *searchBarType; // @synthesize searchBarType=_searchBarType;
@property(retain, nonatomic) UIView *leftView; // @synthesize leftView=_leftView;
@property(nonatomic) _Bool isStoreSearch; // @synthesize isStoreSearch=_isStoreSearch;
@property(retain, nonatomic) AESearchBarView *searchBarView; // @synthesize searchBarView=_searchBarView;
@property(nonatomic) __weak UIViewController *searchContainer; // @synthesize searchContainer=_searchContainer;
@property(retain, nonatomic) AESearchBarController *searchBarController; // @synthesize searchBarController=_searchBarController;
@property(retain, nonatomic) AESearchDefaultPanelVC<UISearchResultsUpdating> *searchPanelVC; // @synthesize searchPanelVC=_searchPanelVC;
@property(retain, nonatomic) AESearchResultVC<UISearchResultsUpdating> *searchResultVC; // @synthesize searchResultVC=_searchResultVC;
- (void).cxx_destruct;	// IMP=0x0000000100c64010
- (long long)supportModules;	// IMP=0x0000000100c63e5c
- (void)runWithParams:(id)arg1;	// IMP=0x0000000100c63a00
- (void)doQrcode:(id)arg1;	// IMP=0x0000000100c63990
- (void)refreshPanel;	// IMP=0x0000000100c63950
- (void)resetSearchBarController;	// IMP=0x0000000100c6390c
- (void)homeSearchBar;	// IMP=0x0000000100c628f8

@end

