//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LOTKeyframeGroup, NSString;

@interface LOTShapeFill : NSObject
{
    _Bool _fillEnabled;	// 8 = 0x8
    _Bool _evenOddFillRule;	// 9 = 0x9
    NSString *_keyname;	// 16 = 0x10
    LOTKeyframeGroup *_color;	// 24 = 0x18
    LOTKeyframeGroup *_opacity;	// 32 = 0x20
}

@property(readonly, nonatomic) _Bool evenOddFillRule; // @synthesize evenOddFillRule=_evenOddFillRule;
@property(readonly, nonatomic) LOTKeyframeGroup *opacity; // @synthesize opacity=_opacity;
@property(readonly, nonatomic) LOTKeyframeGroup *color; // @synthesize color=_color;
@property(readonly, nonatomic) _Bool fillEnabled; // @synthesize fillEnabled=_fillEnabled;
@property(readonly, nonatomic) NSString *keyname; // @synthesize keyname=_keyname;
- (void).cxx_destruct;	// IMP=0x0000000101d02b68
- (void)_mapFromJSON:(id)arg1;	// IMP=0x0000000101d028dc
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000101d02864

@end

