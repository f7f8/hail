//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface AEModelTableView : UITableView <UITableViewDelegate, UITableViewDataSource>
{
    NSMutableArray *_sectionModels;	// 8 = 0x8
    id <AEModelTableViewScrollDelegate> _scrollDelegate1;	// 16 = 0x10
    NSMutableDictionary *_estimatedHeightCache;	// 24 = 0x18
}

@property(retain, nonatomic) NSMutableDictionary *estimatedHeightCache; // @synthesize estimatedHeightCache=_estimatedHeightCache;
@property(nonatomic) __weak id <AEModelTableViewScrollDelegate> scrollDelegate1; // @synthesize scrollDelegate1=_scrollDelegate1;
@property(retain, nonatomic) NSMutableArray *sectionModels; // @synthesize sectionModels=_sectionModels;
- (void).cxx_destruct;	// IMP=0x00000001005230a0
- (id)cheapDummpCell;	// IMP=0x0000000100522f60
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0000000100522eb4
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000100522e64
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;	// IMP=0x0000000100522cec
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;	// IMP=0x0000000100522cdc
- (double)tableView:(id)arg1 estimatedHeightForFooterInSection:(long long)arg2;	// IMP=0x0000000100522cd4
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x0000000100522b5c
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x0000000100522b4c
- (double)tableView:(id)arg1 estimatedHeightForHeaderInSection:(long long)arg2;	// IMP=0x0000000100522b44
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x0000000100522aa4
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x0000000100522904
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100522724
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100522714
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100522638
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000001005225ec
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000001005224fc
- (id)cellModelForIndexPath:(id)arg1;	// IMP=0x0000000100522350
- (id)indexPathForCellModel:(id)arg1;	// IMP=0x0000000100522050
- (struct CGRect)rectOfCellModel:(id)arg1;	// IMP=0x0000000100521fb8
- (void)registerCellHeaderFooterModelClass:(Class)arg1 forHeaderFooterClass:(Class)arg2;	// IMP=0x0000000100521f30
- (void)registerCellModelClass:(Class)arg1 forCellClass:(Class)arg2;	// IMP=0x0000000100521ea8
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;	// IMP=0x0000000100521dc0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

