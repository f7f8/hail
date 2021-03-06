//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface VSImageACVFile : NSObject
{
    short version;	// 8 = 0x8
    short totalCurves;	// 10 = 0xa
    NSArray *rgbCompositeCurvePoints;	// 16 = 0x10
    NSArray *redCurvePoints;	// 24 = 0x18
    NSArray *greenCurvePoints;	// 32 = 0x20
    NSArray *blueCurvePoints;	// 40 = 0x28
}

@property(retain, nonatomic) NSArray *blueCurvePoints; // @synthesize blueCurvePoints;
@property(retain, nonatomic) NSArray *greenCurvePoints; // @synthesize greenCurvePoints;
@property(retain, nonatomic) NSArray *redCurvePoints; // @synthesize redCurvePoints;
@property(retain, nonatomic) NSArray *rgbCompositeCurvePoints; // @synthesize rgbCompositeCurvePoints;
- (void).cxx_destruct;	// IMP=0x0000000101afa45c
- (id)initWithACVFileData:(id)arg1;	// IMP=0x0000000101afa02c

@end

