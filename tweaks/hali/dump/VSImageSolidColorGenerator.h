//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VSImageFilter.h"

@interface VSImageSolidColorGenerator : VSImageFilter
{
    int colorUniform;	// 176 = 0xb0
    int useExistingAlphaUniform;	// 180 = 0xb4
    _Bool _useExistingAlpha;	// 184 = 0xb8
    struct VSVector4 _color;	// 188 = 0xbc
}

@property(nonatomic) _Bool useExistingAlpha; // @synthesize useExistingAlpha=_useExistingAlpha;
@property(nonatomic) struct VSVector4 color; // @synthesize color=_color;
- (void)setColorRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;	// IMP=0x0000000101ad0990
- (void)addTarget:(id)arg1 atTextureLocation:(long long)arg2;	// IMP=0x0000000101ad0898
- (void)forceProcessingAtSize:(struct CGSize)arg1;	// IMP=0x0000000101ad07f8
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2;	// IMP=0x0000000101ad062c
- (id)init;	// IMP=0x0000000101ad0530

@end

