//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LOTLayerContainer.h"

@class CALayer, NSArray, NSDictionary, NSNumber;

@interface LOTCompositionContainer : LOTLayerContainer
{
    NSNumber *_frameOffset;	// 24 = 0x18
    CALayer *DEBUG_Center;	// 32 = 0x20
    NSArray *_childLayers;	// 40 = 0x28
    NSDictionary *_childMap;	// 48 = 0x30
}

@property(readonly, nonatomic) NSDictionary *childMap; // @synthesize childMap=_childMap;
@property(readonly, nonatomic) NSArray *childLayers; // @synthesize childLayers=_childLayers;
- (void).cxx_destruct;	// IMP=0x0000000101cf520c
- (void)logHierarchyKeypathsWithParent:(id)arg1;	// IMP=0x0000000101cf5018
- (void)setViewportBounds:(struct CGRect)arg1;	// IMP=0x0000000101cf4eb0
- (struct CGRect)convertRect:(struct CGRect)arg1 fromLayer:(id)arg2 toLayerNamed:(id)arg3;	// IMP=0x0000000101cf4ddc
- (void)addSublayer:(id)arg1 toLayerNamed:(id)arg2 applyTransform:(_Bool)arg3;	// IMP=0x0000000101cf4cc4
- (_Bool)setValue:(id)arg1 forKeypath:(id)arg2 atFrame:(id)arg3;	// IMP=0x0000000101cf49e0
- (void)displayWithFrame:(id)arg1 forceUpdate:(_Bool)arg2;	// IMP=0x0000000101cf4814
- (void)intializeWithChildGroup:(id)arg1 withAssetGroup:(id)arg2;	// IMP=0x0000000101cf434c
- (id)initWithModel:(id)arg1 inLayerGroup:(id)arg2 withLayerGroup:(id)arg3 withAssestGroup:(id)arg4;	// IMP=0x0000000101cf4128

@end

