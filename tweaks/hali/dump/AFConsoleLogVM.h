//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AFConsoleLogVM : NSObject
{
    NSString *_input;	// 8 = 0x8
    unsigned long long _index;	// 16 = 0x10
}

+ (id)buildLog:(id)arg1 index:(unsigned long long)arg2 sessionId:(unsigned long long)arg3;	// IMP=0x000000010100bb4c
@property(readonly, nonatomic) unsigned long long index; // @synthesize index=_index;
@property(readonly, nonatomic) NSString *input; // @synthesize input=_input;
- (void).cxx_destruct;	// IMP=0x000000010100bbec
- (id)initLog:(id)arg1 index:(unsigned long long)arg2 sessionId:(unsigned long long)arg3;	// IMP=0x000000010100bab0

@end

