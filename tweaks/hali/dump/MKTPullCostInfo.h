//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MKTPullCostInfo : NSObject
{
    long long _bizCode;	// 8 = 0x8
    NSString *_topic;	// 16 = 0x10
    long long _code;	// 24 = 0x18
    long long _mode;	// 32 = 0x20
    long long _time;	// 40 = 0x28
    double _pullTime;	// 48 = 0x30
}

@property(nonatomic) double pullTime; // @synthesize pullTime=_pullTime;
@property(nonatomic) long long time; // @synthesize time=_time;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(nonatomic) long long code; // @synthesize code=_code;
@property(retain, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(nonatomic) long long bizCode; // @synthesize bizCode=_bizCode;
- (void).cxx_destruct;	// IMP=0x00000001013439e0

@end

