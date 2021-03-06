//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUIViewController.h"

#import "AFCommandViewController.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString;

@interface AESearchShipFromVC : AEUIViewController <UITableViewDelegate, UITableViewDataSource, AFCommandViewController>
{
    _Bool _isNeedTrackPage;	// 8 = 0x8
    NSArray *_dataSource;	// 16 = 0x10
    NSString *_selectedCountry;	// 24 = 0x18
}

@property(nonatomic) _Bool isNeedTrackPage; // @synthesize isNeedTrackPage=_isNeedTrackPage;
@property(retain, nonatomic) NSString *selectedCountry; // @synthesize selectedCountry=_selectedCountry;
@property(retain, nonatomic) NSArray *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;	// IMP=0x0000000100ca1910
- (_Bool)needTrackPage;	// IMP=0x0000000100ca1850
- (id)countryForIndexPath:(id)arg1;	// IMP=0x0000000100ca16f0
- (void)didReceiveMemoryWarning;	// IMP=0x0000000100ca16bc
- (id)pageTrackName;	// IMP=0x0000000100ca1690
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000100ca13c8
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000100ca1370
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000100ca1368
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100ca1040
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x0000000100ca102c
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100ca1020
- (void)setupUI;	// IMP=0x0000000100ca0acc
- (void)viewDidLoad;	// IMP=0x0000000100ca0a10
- (id)initWithParam:(id)arg1;	// IMP=0x0000000100ca08a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

