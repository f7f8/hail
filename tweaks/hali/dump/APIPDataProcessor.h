//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class APIPSecurity;

@interface APIPDataProcessor : NSObject
{
    APIPSecurity *_security;	// 8 = 0x8
}

+ (id)defaultProcessor;	// IMP=0x00000001010fa7fc
@property(retain, nonatomic) APIPSecurity *security; // @synthesize security=_security;
- (void).cxx_destruct;	// IMP=0x00000001010faa94
- (id)unpackData:(id)arg1 withOptions:(int)arg2;	// IMP=0x00000001010fa924
- (id)packData:(id)arg1 withOptions:(int)arg2;	// IMP=0x00000001010fa870

@end

