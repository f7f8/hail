//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSArray, NSNumber, UIControl, UILabel, UISegmentedControl, UISlider, UISwitch;

@interface AFEasyControlCell : UITableViewCell
{
    UIControl *_control;	// 8 = 0x8
    unsigned long long _type;	// 16 = 0x10
    NSNumber *_value;	// 24 = 0x18
    CDUnknownBlockType handler;	// 32 = 0x20
    NSArray *_additionalItems;	// 40 = 0x28
    unsigned long long _controlType;	// 48 = 0x30
}

@property(nonatomic) unsigned long long controlType; // @synthesize controlType=_controlType;
@property(copy, nonatomic) NSArray *additionalItems; // @synthesize additionalItems=_additionalItems;
@property(retain, nonatomic) NSNumber *value; // @synthesize value=_value;
@property(readonly, nonatomic) UIControl *control; // @synthesize control=_control;
- (void).cxx_destruct;	// IMP=0x0000000100898988
@property(readonly, nonatomic) UILabel *subtitle;
@property(readonly, nonatomic) UISwitch *switchControl;
@property(readonly, nonatomic) UISlider *slider;
@property(readonly, nonatomic) UISegmentedControl *segmentedControl;
- (struct CGSize)controlSize;	// IMP=0x0000000100898720
- (void)layoutSubviews;	// IMP=0x00000001008984b0
- (void)setHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100898404
- (void)setSubtitleText:(id)arg1;	// IMP=0x00000001008983ac
- (void)handleTouch:(id)arg1;	// IMP=0x0000000100897f44
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000100897cd0

@end

