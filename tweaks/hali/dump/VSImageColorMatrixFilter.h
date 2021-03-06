//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VSImageFilter.h"

@interface VSImageColorMatrixFilter : VSImageFilter
{
    int colorMatrixUniform;	// 176 = 0xb0
    int intensityUniform;	// 180 = 0xb4
    double _intensity;	// 184 = 0xb8
    struct VSMatrix4x4 _colorMatrix;	// 192 = 0xc0
}

@property(nonatomic) struct VSMatrix4x4 colorMatrix; // @synthesize colorMatrix=_colorMatrix;
@property(nonatomic) double intensity; // @synthesize intensity=_intensity;
- (id)init;	// IMP=0x0000000101ab6658

@end

