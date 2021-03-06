//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IJKSDLAudioUnitController : NSObject
{
    struct OpaqueAudioComponentInstance *_auUnit;	// 8 = 0x8
    _Bool _isPaused;	// 16 = 0x10
    struct SDL_AudioSpec _spec;	// 24 = 0x18
}

@property(readonly, nonatomic) struct SDL_AudioSpec spec; // @synthesize spec=_spec;
- (void)close;	// IMP=0x0000000101810078
- (void)stop;	// IMP=0x0000000101810038
- (void)flush;	// IMP=0x0000000101810018
- (void)pause;	// IMP=0x000000010180ffc4
- (void)play;	// IMP=0x000000010180fea8
- (void)dealloc;	// IMP=0x000000010180fe58
- (id)initWithAudioSpec:(const struct SDL_AudioSpec *)arg1;	// IMP=0x000000010180fae0

@end

