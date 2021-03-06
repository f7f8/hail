//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class LogisticPackage, UIImageView, UILabel;

@interface AELogisticsBubbleView : UIView
{
    UIImageView *_backImageView;	// 8 = 0x8
    UILabel *_bubbleLabel;	// 16 = 0x10
    UIImageView *_arrowView;	// 24 = 0x18
    LogisticPackage *_package;	// 32 = 0x20
    UIImageView *_alertView;	// 40 = 0x28
}

@property(retain, nonatomic) UIImageView *alertView; // @synthesize alertView=_alertView;
@property(retain, nonatomic) LogisticPackage *package; // @synthesize package=_package;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) UILabel *bubbleLabel; // @synthesize bubbleLabel=_bubbleLabel;
@property(retain, nonatomic) UIImageView *backImageView; // @synthesize backImageView=_backImageView;
- (void).cxx_destruct;	// IMP=0x0000000100123190
- (void)bindData:(id)arg1;	// IMP=0x00000001001224cc
- (void)setupConstraints;	// IMP=0x0000000100121920
- (void)addGesture;	// IMP=0x0000000100121150
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010012103c

@end

