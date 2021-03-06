//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUIViewController.h"

#import "AFCommandTest.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class AE3CWarrantyService, AEWarrantyInfoDTO, NSString, UIButton, UITableView;

@interface AEAfterServiceViewController : AEUIViewController <AFCommandTest, UITableViewDataSource, UITableViewDelegate>
{
    _Bool _hasSelect3CService;	// 8 = 0x8
    NSString *_selectedWarrantyServiceId;	// 16 = 0x10
    long long _selectedRowIndex;	// 24 = 0x18
    UIButton *_applyBtn;	// 32 = 0x20
    AE3CWarrantyService *_3CWarrantyService;	// 40 = 0x28
    _Bool _isWarrantyFor3CForced;	// 48 = 0x30
    id <AEAfterServiceVCDelegate> _delegate;	// 56 = 0x38
    AEWarrantyInfoDTO *_warrantyInfoDTO;	// 64 = 0x40
    UITableView *_tableView;	// 72 = 0x48
    NSString *_productID;	// 80 = 0x50
    NSString *_skuAttr;	// 88 = 0x58
    long long _quantity;	// 96 = 0x60
    CDUnknownBlockType _callback;	// 104 = 0x68
}

+ (id)paramsToTest;	// IMP=0x000000010047e3ec
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(nonatomic) long long quantity; // @synthesize quantity=_quantity;
@property(retain, nonatomic) NSString *skuAttr; // @synthesize skuAttr=_skuAttr;
@property(retain, nonatomic) NSString *productID; // @synthesize productID=_productID;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) AEWarrantyInfoDTO *warrantyInfoDTO; // @synthesize warrantyInfoDTO=_warrantyInfoDTO;
@property(nonatomic) __weak id <AEAfterServiceVCDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x000000010047e324
- (void)apply3CService;	// IMP=0x000000010047dd30
- (void)doCallback;	// IMP=0x000000010047da80
- (void)request3CWarrantyInfo;	// IMP=0x000000010047d810
- (id)warrantyDescriptionCell;	// IMP=0x000000010047d724
- (id)warrantyCell:(id)arg1;	// IMP=0x000000010047d510
- (id)needNoWarrnayCell:(id)arg1;	// IMP=0x000000010047d238
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000010047cf68
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000010047ce50
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;	// IMP=0x000000010047cddc
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x000000010047cd04
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000010047cc78
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000010047cc1c
- (void)setupFooterView;	// IMP=0x000000010047cbac
- (void)setupApplyView;	// IMP=0x000000010047b8b4
- (void)setupHeaderView;	// IMP=0x000000010047b490
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010047b378
- (void)viewDidLoad;	// IMP=0x000000010047af58
- (id)pageTrackName;	// IMP=0x000000010047af2c
- (_Bool)needTrackPage;	// IMP=0x000000010047af24
- (void)dealloc;	// IMP=0x000000010047aeb0
- (id)initWithParam:(id)arg1;	// IMP=0x000000010047acb8
- (id)initWithProductId:(id)arg1 skuAttr:(id)arg2 quantity:(long long)arg3 hasSelect3CWarranty:(_Bool)arg4 is3CWarrantyForced:(_Bool)arg5 selected3CWarrantyService:(id)arg6;	// IMP=0x000000010047ab3c
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000010047ab18
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010047aaf4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

