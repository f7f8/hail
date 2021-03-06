//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSMutableArray, UIImageView;

@interface AEUGCFloatingLabelsView : UIView
{
    UIImageView *_backgroundImageView;	// 8 = 0x8
    NSArray *_floatingLabelsInfo;	// 16 = 0x10
    CDUnknownBlockType _touchBlock;	// 24 = 0x18
    long long _style;	// 32 = 0x20
    NSMutableArray *_floatingLabels;	// 40 = 0x28
    NSMutableArray *_floatingPoints;	// 48 = 0x30
}

@property(retain, nonatomic) NSMutableArray *floatingPoints; // @synthesize floatingPoints=_floatingPoints;
@property(retain, nonatomic) NSMutableArray *floatingLabels; // @synthesize floatingLabels=_floatingLabels;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(copy, nonatomic) CDUnknownBlockType touchBlock; // @synthesize touchBlock=_touchBlock;
@property(retain, nonatomic) NSArray *floatingLabelsInfo; // @synthesize floatingLabelsInfo=_floatingLabelsInfo;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
- (void).cxx_destruct;	// IMP=0x0000000100773450
- (id)getReuseableFloatingPoints:(long long)arg1;	// IMP=0x0000000100772b50
- (id)getReuseableFloatingLabel:(long long)arg1;	// IMP=0x0000000100772a1c
- (void)layoutSubviews;	// IMP=0x0000000100772574
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001007724a0

@end

