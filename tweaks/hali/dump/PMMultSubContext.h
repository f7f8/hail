//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PMBaseSubMsg;

@interface PMMultSubContext : NSObject
{
    PMBaseSubMsg *_msg;	// 8 = 0x8
    CDUnknownBlockType _callback;	// 16 = 0x10
    CDUnknownBlockType _procBlock;	// 24 = 0x18
    CDUnknownBlockType _bizCallback;	// 32 = 0x20
}

@property(copy, nonatomic) CDUnknownBlockType bizCallback; // @synthesize bizCallback=_bizCallback;
@property(copy, nonatomic) CDUnknownBlockType procBlock; // @synthesize procBlock=_procBlock;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) PMBaseSubMsg *msg; // @synthesize msg=_msg;
- (void).cxx_destruct;	// IMP=0x00000001013f8d08

@end

