//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AETileAdapterView.h"

@class UIImageView, UILabel;

@interface AEComponentVenueMy1111CouponsItem : AETileAdapterView
{
    UIImageView *_icon;	// 8 = 0x8
    UILabel *_title;	// 16 = 0x10
    UILabel *_count;	// 24 = 0x18
}

@property(retain, nonatomic) UILabel *count; // @synthesize count=_count;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;	// IMP=0x00000001002fde7c
- (_Bool)renderWithTile:(id)arg1;	// IMP=0x00000001002fdb78
- (void)configConstraints;	// IMP=0x00000001002fd1f0
- (void)configSubviews;	// IMP=0x00000001002fce98
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001002fcdf4

@end

