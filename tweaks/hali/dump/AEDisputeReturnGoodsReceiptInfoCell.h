//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "UITextFieldDelegate.h"
#import "UITextViewDelegate.h"

@class AETextField, AETextView, NSString, UIButton, UIControl, UITableView;

@interface AEDisputeReturnGoodsReceiptInfoCell : UITableViewCell <UITextFieldDelegate, UITextViewDelegate>
{
    _Bool _isBattery;	// 8 = 0x8
    _Bool _isBatteryActivity;	// 9 = 0x9
    AETextField *_carrier;	// 16 = 0x10
    AETextField *_number;	// 24 = 0x18
    AETextView *_remarks;	// 32 = 0x20
    CDUnknownBlockType _block;	// 40 = 0x28
    UIButton *_withOutBattery;	// 48 = 0x30
    UIButton *_withBattery;	// 56 = 0x38
    UITableView *_tableView;	// 64 = 0x40
    UIControl *_overLay;	// 72 = 0x48
}

@property(retain, nonatomic) UIControl *overLay; // @synthesize overLay=_overLay;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool isBatteryActivity; // @synthesize isBatteryActivity=_isBatteryActivity;
@property(retain, nonatomic) UIButton *withBattery; // @synthesize withBattery=_withBattery;
@property(retain, nonatomic) UIButton *withOutBattery; // @synthesize withOutBattery=_withOutBattery;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(nonatomic) _Bool isBattery; // @synthesize isBattery=_isBattery;
@property(retain, nonatomic) AETextView *remarks; // @synthesize remarks=_remarks;
@property(retain, nonatomic) AETextField *number; // @synthesize number=_number;
@property(retain, nonatomic) AETextField *carrier; // @synthesize carrier=_carrier;
- (void).cxx_destruct;	// IMP=0x00000001000b1b04
- (void)showAlertWithTitle:(id)arg1 message:(id)arg2;	// IMP=0x00000001000b1020
- (void)touchoverLay:(id)arg1;	// IMP=0x00000001000b0f20
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;	// IMP=0x00000001000b0eb4
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x00000001000b0ce8
- (_Bool)textFieldShouldBeginEditing:(id)arg1;	// IMP=0x00000001000b0a60
- (void)handlerTextFieldWithTableView:(id)arg1;	// IMP=0x00000001000b0a54
- (void)doSubmit:(id)arg1;	// IMP=0x00000001000b0724
- (void)doBattery:(id)arg1;	// IMP=0x00000001000b0604
- (void)doWithOutBattery:(id)arg1;	// IMP=0x00000001000b04e4
- (void)handlerFillReceptionInfoWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000b04d8
- (void)privateLayoutSubmit;	// IMP=0x00000001000afdb4
- (void)privateLayoutBattery;	// IMP=0x00000001000ae378
- (void)privateLayoutRemarks;	// IMP=0x00000001000ad93c
- (void)privateLayoutNumber;	// IMP=0x00000001000acf00
- (void)privateLayoutCarrier;	// IMP=0x00000001000abb08
- (void)privateLayoutSubViews;	// IMP=0x00000001000abaa4
- (void)addSubviews;	// IMP=0x00000001000ab8cc
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000001000ab860

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

