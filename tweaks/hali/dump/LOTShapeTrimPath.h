//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LOTKeyframeGroup, NSString;

@interface LOTShapeTrimPath : NSObject
{
    NSString *_keyname;	// 8 = 0x8
    LOTKeyframeGroup *_start;	// 16 = 0x10
    LOTKeyframeGroup *_end;	// 24 = 0x18
    LOTKeyframeGroup *_offset;	// 32 = 0x20
}

@property(readonly, nonatomic) LOTKeyframeGroup *offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) LOTKeyframeGroup *end; // @synthesize end=_end;
@property(readonly, nonatomic) LOTKeyframeGroup *start; // @synthesize start=_start;
@property(readonly, nonatomic) NSString *keyname; // @synthesize keyname=_keyname;
- (void).cxx_destruct;	// IMP=0x0000000101d05b58
- (void)_mapFromJSON:(id)arg1;	// IMP=0x0000000101d0592c
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000101d058b4

@end

