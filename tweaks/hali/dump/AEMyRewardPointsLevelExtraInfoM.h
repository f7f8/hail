//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AEMyRewardPointsLevelExtraInfoM : NSObject
{
    NSString *_nextInternalLevel;	// 8 = 0x8
    NSString *_nextLevelDiff;	// 16 = 0x10
    NSString *_nextExternalLevelName;	// 24 = 0x18
    NSString *_currentLevelPercent;	// 32 = 0x20
}

@property(copy, nonatomic) NSString *currentLevelPercent; // @synthesize currentLevelPercent=_currentLevelPercent;
@property(copy, nonatomic) NSString *nextExternalLevelName; // @synthesize nextExternalLevelName=_nextExternalLevelName;
@property(copy, nonatomic) NSString *nextLevelDiff; // @synthesize nextLevelDiff=_nextLevelDiff;
@property(copy, nonatomic) NSString *nextInternalLevel; // @synthesize nextInternalLevel=_nextInternalLevel;
- (void).cxx_destruct;	// IMP=0x00000001001bde3c

@end

