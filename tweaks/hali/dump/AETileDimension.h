//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AETileDimension : NSObject
{
    double _dimension;	// 8 = 0x8
}

+ (double)dimensionValueForUnitString:(id)arg1;	// IMP=0x00000001009d0a5c
+ (double)sharedScreenScale;	// IMP=0x00000001009d09cc
@property(nonatomic) double dimension; // @synthesize dimension=_dimension;
- (double)valueFromUnitString:(id)arg1;	// IMP=0x00000001009d0c08
- (id)initWithString:(id)arg1;	// IMP=0x00000001009d0af8

@end

