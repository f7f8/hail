//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AETileAdapterFloor.h"

@class AECountDownView, UIImageView, UILabel, UIView;

@interface AEFloorCoinsTitle : AETileAdapterFloor
{
    UILabel *_title;	// 8 = 0x8
    UIImageView *_rulesIcon;	// 16 = 0x10
    UILabel *_prompt;	// 24 = 0x18
    AECountDownView *_countDown;	// 32 = 0x20
    UIView *_titleContainer;	// 40 = 0x28
    UIView *_promptContainer;	// 48 = 0x30
}

+ (Class)modelClass;	// IMP=0x000000010032d5d0
+ (id)additionalIdentifiers;	// IMP=0x000000010032d568
+ (id)identifier;	// IMP=0x000000010032d53c
@property(retain, nonatomic) UIView *promptContainer; // @synthesize promptContainer=_promptContainer;
@property(retain, nonatomic) UIView *titleContainer; // @synthesize titleContainer=_titleContainer;
@property(retain, nonatomic) AECountDownView *countDown; // @synthesize countDown=_countDown;
@property(retain, nonatomic) UILabel *prompt; // @synthesize prompt=_prompt;
@property(retain, nonatomic) UIImageView *rulesIcon; // @synthesize rulesIcon=_rulesIcon;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
- (void).cxx_destruct;	// IMP=0x000000010032f464
- (_Bool)renderWithTile:(id)arg1;	// IMP=0x000000010032ea20
- (void)configConstraints;	// IMP=0x000000010032dca0
- (void)configComponents;	// IMP=0x000000010032d690
- (id)initFloor;	// IMP=0x000000010032d5e4

@end

