//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VKApiObjectArray.h"

@class VKUser;

@interface VKAudios : VKApiObjectArray
{
    VKUser *_user;	// 8 = 0x8
}

@property(retain, nonatomic) VKUser *user; // @synthesize user=_user;
- (void).cxx_destruct;	// IMP=0x0000000100957110
- (id)parseItems:(id)arg1 asClass:(Class)arg2;	// IMP=0x0000000100956e08
- (Class)objectClass;	// IMP=0x0000000100956df4

@end

