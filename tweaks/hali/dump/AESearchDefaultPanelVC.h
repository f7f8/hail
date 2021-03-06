//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUIViewController.h"

#import "AESearchPanelDataSourceAndDelegateProtocol.h"
#import "UISearchResultsUpdating.h"

@class AESearchBarController, AESearchPanelDatasourceAndDelegate, NSDictionary, NSString, UITableView;

@interface AESearchDefaultPanelVC : AEUIViewController <AESearchPanelDataSourceAndDelegateProtocol, UISearchResultsUpdating>
{
    _Bool _isStorePanel;	// 8 = 0x8
    _Bool _isInSearchBarController;	// 9 = 0x9
    UITableView *_tableView;	// 16 = 0x10
    NSDictionary *_extraParam;	// 24 = 0x18
    id <AESearchDefaultPanelDelegate> _delegate;	// 32 = 0x20
    AESearchPanelDatasourceAndDelegate *_tableViewDelegateDataSource;	// 40 = 0x28
    AESearchBarController *_searchBarController;	// 48 = 0x30
}

@property(retain, nonatomic) AESearchBarController *searchBarController; // @synthesize searchBarController=_searchBarController;
@property(retain, nonatomic) AESearchPanelDatasourceAndDelegate *tableViewDelegateDataSource; // @synthesize tableViewDelegateDataSource=_tableViewDelegateDataSource;
@property(nonatomic) _Bool isInSearchBarController; // @synthesize isInSearchBarController=_isInSearchBarController;
@property(nonatomic) __weak id <AESearchDefaultPanelDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSDictionary *extraParam; // @synthesize extraParam=_extraParam;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool isStorePanel; // @synthesize isStorePanel=_isStorePanel;
- (void).cxx_destruct;	// IMP=0x0000000100bf04f4
- (void)dealloc;	// IMP=0x0000000100bf007c
- (void)didReceiveMemoryWarning;	// IMP=0x0000000100bf0048
- (void)refresh;	// IMP=0x0000000100bf0008
- (void)updateSearchResultsForSearchController:(id)arg1;	// IMP=0x0000000100befffc
- (void)notifyTableViewStatus:(long long)arg1 indexPath:(id)arg2 data:(id)arg3;	// IMP=0x0000000100befb58
- (void)notifyTableViewEventWithContext:(id)arg1;	// IMP=0x0000000100bef82c
- (id)dataSource;	// IMP=0x0000000100bef7ac
- (void)keyboardOnScreen:(id)arg1;	// IMP=0x0000000100bef45c
- (void)keyboardHideOnScreen:(id)arg1;	// IMP=0x0000000100bef2dc
- (void)viewDidLoad;	// IMP=0x0000000100bef044
- (_Bool)needTrackPage;	// IMP=0x0000000100bef03c
- (id)init;	// IMP=0x0000000100beef48

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

