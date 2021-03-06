//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AETileAdapterView.h"

@class NSString, UIImageView;

@interface AEComponentToggleImage : AETileAdapterView
{
    _Bool _toggled;	// 8 = 0x8
    UIImageView *_imageView;	// 16 = 0x10
    NSString *_defaultUrl;	// 24 = 0x18
    NSString *_toggledUrl;	// 32 = 0x20
}

@property(copy, nonatomic) NSString *toggledUrl; // @synthesize toggledUrl=_toggledUrl;
@property(copy, nonatomic) NSString *defaultUrl; // @synthesize defaultUrl=_defaultUrl;
@property(nonatomic) _Bool toggled; // @synthesize toggled=_toggled;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;	// IMP=0x00000001009d7380
- (void)handleImageWithToggled:(_Bool)arg1;	// IMP=0x00000001009d6f0c
- (_Bool)renderWithTile:(id)arg1;	// IMP=0x00000001009d6b38
- (void)toggle;	// IMP=0x00000001009d6b18
- (void)configConstraints;	// IMP=0x00000001009d6a00
- (void)configSubviews;	// IMP=0x00000001009d698c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001009d6924

@end

