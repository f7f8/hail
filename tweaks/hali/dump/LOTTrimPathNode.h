//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LOTAnimatorNode.h"

@class LOTNumberInterpolator;

@interface LOTTrimPathNode : LOTAnimatorNode
{
    LOTNumberInterpolator *_startInterpolator;	// 8 = 0x8
    LOTNumberInterpolator *_endInterpolator;	// 16 = 0x10
    LOTNumberInterpolator *_offsetInterpolator;	// 24 = 0x18
    double _startT;	// 32 = 0x20
    double _endT;	// 40 = 0x28
    double _offsetT;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000101d08330
- (id)outputPath;	// IMP=0x0000000101d082dc
- (id)localPath;	// IMP=0x0000000101d08288
- (void)rebuildOutputs;	// IMP=0x0000000101d08284
- (void)performLocalUpdate;	// IMP=0x0000000101d08154
- (_Bool)updateWithFrame:(id)arg1 withModifierBlock:(CDUnknownBlockType)arg2 forceLocalUpdate:(_Bool)arg3;	// IMP=0x0000000101d07e70
- (_Bool)needsUpdateForFrame:(id)arg1;	// IMP=0x0000000101d07dd0
- (id)valueInterpolators;	// IMP=0x0000000101d07d18
- (id)initWithInputNode:(id)arg1 trimPath:(id)arg2;	// IMP=0x0000000101d07abc

@end

