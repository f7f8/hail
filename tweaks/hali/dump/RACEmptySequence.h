//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RACSequence.h"

@interface RACEmptySequence : RACSequence
{
}

+ (id)empty;	// IMP=0x0000000101436510
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001014366d8
- (unsigned long long)hash;	// IMP=0x00000001014366d4
- (id)description;	// IMP=0x000000010143663c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000101436638
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001014365ec
- (Class)classForCoder;	// IMP=0x00000001014365e0
- (id)bind:(CDUnknownBlockType)arg1 passingThroughValuesFromSequence:(id)arg2;	// IMP=0x00000001014365d4
- (id)tail;	// IMP=0x00000001014365cc
- (id)head;	// IMP=0x00000001014365c4

@end

