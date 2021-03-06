//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class AECategorySeletedDataController, NSString, UITableView;

@interface AECategorySelectedViewController : AEUIViewController <UITableViewDataSource, UITableViewDelegate>
{
    id <AECategorySelectedVCDelegate> _delegate;	// 8 = 0x8
    UITableView *_tableView;	// 16 = 0x10
    AECategorySeletedDataController *_dataController;	// 24 = 0x18
}

@property(retain, nonatomic) AECategorySeletedDataController *dataController; // @synthesize dataController=_dataController;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <AECategorySelectedVCDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x0000000100c02cf4
- (id)pageTrackName;	// IMP=0x0000000100c02c14
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x0000000100c02b28
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000100c0276c
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100c02760
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100c024e8
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000100c023d0
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000100c0235c
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x0000000100c02348
- (void)loadView;	// IMP=0x0000000100c01d50
- (id)initWithCategoryRefineDto:(id)arg1 searchQuery:(id)arg2;	// IMP=0x0000000100c01c84
- (void)dealloc;	// IMP=0x0000000100c01c10

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

