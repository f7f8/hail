//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PMMessageMonitor : NSObject
{
    long long _mode;	// 8 = 0x8
}

+ (void)monitor:(long long)arg1 item:(id)arg2;	// IMP=0x000000010140ac18
+ (void)dataError:(id)arg1 dataTag:(id)arg2 source:(long long)arg3 code:(long long)arg4;	// IMP=0x000000010140aad4
+ (void)msgComplete:(id)arg1 code:(long long)arg2;	// IMP=0x000000010140a6d4
+ (long long)getFetchMode:(id)arg1 bizTag:(id)arg2;	// IMP=0x000000010140a614
+ (id)sharedInstance;	// IMP=0x000000010140a578
@property(nonatomic) long long mode; // @synthesize mode=_mode;

@end

