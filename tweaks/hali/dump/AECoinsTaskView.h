//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AETileAdapterView.h"

@class UIImageView, UILabel;

@interface AECoinsTaskView : AETileAdapterView
{
    UIImageView *_taskIcon;	// 8 = 0x8
    UILabel *_taskName;	// 16 = 0x10
}

@property(retain, nonatomic) UILabel *taskName; // @synthesize taskName=_taskName;
@property(retain, nonatomic) UIImageView *taskIcon; // @synthesize taskIcon=_taskIcon;
- (void).cxx_destruct;	// IMP=0x00000001002ed3d8
- (_Bool)renderWithTile:(id)arg1;	// IMP=0x00000001002ed164
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001002ec8d0

@end

