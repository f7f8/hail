//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MKTMsgCostInfo : NSObject
{
    long long _bizCode;	// 8 = 0x8
    NSString *_topic;	// 16 = 0x10
    long long _msType;	// 24 = 0x18
    long long _type;	// 32 = 0x20
    long long _suType;	// 40 = 0x28
    long long _DUP;	// 48 = 0x30
    double _flowTime;	// 56 = 0x38
    double _packTime;	// 64 = 0x40
    double _netTime;	// 72 = 0x48
}

@property(nonatomic) double netTime; // @synthesize netTime=_netTime;
@property(nonatomic) double packTime; // @synthesize packTime=_packTime;
@property(nonatomic) double flowTime; // @synthesize flowTime=_flowTime;
@property(nonatomic) long long DUP; // @synthesize DUP=_DUP;
@property(nonatomic) long long suType; // @synthesize suType=_suType;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long msType; // @synthesize msType=_msType;
@property(retain, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(nonatomic) long long bizCode; // @synthesize bizCode=_bizCode;
- (void).cxx_destruct;	// IMP=0x00000001013438e4

@end

