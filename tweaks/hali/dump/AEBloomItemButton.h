//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class NSString, UIImageView;

@interface AEBloomItemButton : UIButton
{
    unsigned long long _index;	// 8 = 0x8
    id <AEBloomItemButtonDelegate> _delegate;	// 16 = 0x10
    NSString *_text;	// 24 = 0x18
    UIImageView *_backgroundImageView;	// 32 = 0x20
}

@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) __weak id <AEBloomItemButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
- (void).cxx_destruct;	// IMP=0x00000001007e7ab0
- (id)initWithImage:(id)arg1 highlightedImage:(id)arg2 backgroundImage:(id)arg3 backgroundHighlightedImage:(id)arg4;	// IMP=0x00000001007e773c
- (id)initWithImage:(id)arg1 highlightedImage:(id)arg2 text:(id)arg3;	// IMP=0x00000001007e7670

@end

