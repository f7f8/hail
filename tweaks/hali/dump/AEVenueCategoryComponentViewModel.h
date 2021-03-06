//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEBaseTileComponent.h"

@class AEImageTileComponent, AETextTileComponent, NSString, UIColor;

@interface AEVenueCategoryComponentViewModel : AEBaseTileComponent
{
    AEImageTileComponent *_photo;	// 8 = 0x8
    AETextTileComponent *_fieldArea;	// 16 = 0x10
    NSString *_action;	// 24 = 0x18
    double _hRatio;	// 32 = 0x20
    UIColor *_textBackgroundColor;	// 40 = 0x28
    NSString *_textBackgroundImage;	// 48 = 0x30
    double _textBackgroundAlpha;	// 56 = 0x38
}

@property(nonatomic) double textBackgroundAlpha; // @synthesize textBackgroundAlpha=_textBackgroundAlpha;
@property(copy, nonatomic) NSString *textBackgroundImage; // @synthesize textBackgroundImage=_textBackgroundImage;
@property(retain, nonatomic) UIColor *textBackgroundColor; // @synthesize textBackgroundColor=_textBackgroundColor;
@property(nonatomic) double hRatio; // @synthesize hRatio=_hRatio;
@property(copy, nonatomic) NSString *action; // @synthesize action=_action;
@property(retain, nonatomic) AETextTileComponent *fieldArea; // @synthesize fieldArea=_fieldArea;
@property(retain, nonatomic) AEImageTileComponent *photo; // @synthesize photo=_photo;
- (void).cxx_destruct;	// IMP=0x000000010042ba8c
- (double)heightForReferenceWidth:(double)arg1;	// IMP=0x000000010042b8c4
- (id)init;	// IMP=0x000000010042b814

@end

