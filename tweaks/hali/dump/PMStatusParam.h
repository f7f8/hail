//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, PMStatusPullInfo;

@interface PMStatusParam : NSObject
{
    long long _bizCode;	// 8 = 0x8
    NSString *_topic;	// 16 = 0x10
    NSString *_bizTag;	// 24 = 0x18
    NSString *_bizKey;	// 32 = 0x20
    PMStatusPullInfo *_pullInfo;	// 40 = 0x28
}

@property(retain, nonatomic) PMStatusPullInfo *pullInfo; // @synthesize pullInfo=_pullInfo;
@property(retain, nonatomic) NSString *bizKey; // @synthesize bizKey=_bizKey;
@property(retain, nonatomic) NSString *bizTag; // @synthesize bizTag=_bizTag;
@property(retain, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(nonatomic) long long bizCode; // @synthesize bizCode=_bizCode;
- (void).cxx_destruct;	// IMP=0x00000001014036b8

@end

