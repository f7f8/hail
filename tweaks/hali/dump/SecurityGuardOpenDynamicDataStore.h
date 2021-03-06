//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ISecurityGuardOpenDynamicDataStore.h"

@class NSString;

@interface SecurityGuardOpenDynamicDataStore : NSObject <ISecurityGuardOpenDynamicDataStore>
{
    NSString *_random1;	// 8 = 0x8
    NSString *_random2;	// 16 = 0x10
}

@property(retain, nonatomic) NSString *random2; // @synthesize random2=_random2;
@property(retain, nonatomic) NSString *random1; // @synthesize random1=_random1;
- (void).cxx_destruct;	// IMP=0x00000001014cbf50
- (Class)getMetaClass;	// IMP=0x00000001014cbf08
- (id)DDpExOperation:(int)arg1 forKey:(id)arg2 needProcessData:(id)arg3 flag:(int)arg4;	// IMP=0x00000001014cae94
- (id)randomStringWithLength:(long long)arg1;	// IMP=0x00000001014cac6c
- (id)getDynamicKeyWithOriginKey:(id)arg1 type:(id)arg2 isStable:(unsigned char)arg3;	// IMP=0x00000001014ca0d8
- (void)removeValueWithKey:(id)arg1 type:(id)arg2 isStable:(unsigned char)arg3;	// IMP=0x00000001014c9800
- (int)putValue:(id)arg1 withKey:(id)arg2 type:(id)arg3 isStable:(unsigned char)arg4;	// IMP=0x00000001014c8650
- (id)getValueWithKey:(id)arg1 type:(id)arg2 isStable:(unsigned char)arg3;	// IMP=0x00000001014c7404
- (void)removeDataDDpEx:(id)arg1 flag:(int)arg2;	// IMP=0x00000001014c7394
- (_Bool)putDataDDpEx:(id)arg1 forKey:(id)arg2 flag:(int)arg3;	// IMP=0x00000001014c72c4
- (id)getDataDDpEx:(id)arg1 flag:(int)arg2;	// IMP=0x00000001014c7264
- (void)removeStringDDpEx:(id)arg1 flag:(int)arg2;	// IMP=0x00000001014c71e4
- (_Bool)putStringDDpEx:(id)arg1 forKey:(id)arg2 flag:(int)arg3;	// IMP=0x00000001014c70bc
- (id)getStringDDpEx:(id)arg1 flag:(int)arg2;	// IMP=0x00000001014c705c
- (void)removeDataForKeyDDp:(id)arg1;	// IMP=0x00000001014c7004
- (int)putDataDDp:(id)arg1 forKey:(id)arg2;	// IMP=0x00000001014c6eec
- (id)getDataDDp:(id)arg1;	// IMP=0x00000001014c6e50
- (void)removeStringForKeyDDp:(id)arg1;	// IMP=0x00000001014c6e0c
- (int)putStringDDp:(id)arg1 forKey:(id)arg2;	// IMP=0x00000001014c6d5c
- (id)getStringDDp:(id)arg1;	// IMP=0x00000001014c6d08
- (void)removeBoolForKey:(id)arg1;	// IMP=0x00000001014c6cac
- (int)putBool:(_Bool)arg1 forKey:(id)arg2;	// IMP=0x00000001014c6bb4
- (_Bool)getBool:(id)arg1;	// IMP=0x00000001014c6b20
- (void)removeDoubleForKey:(id)arg1;	// IMP=0x00000001014c6ad0
- (int)putDouble:(double)arg1 forKey:(id)arg2;	// IMP=0x00000001014c6738
- (double)getDouble:(id)arg1;	// IMP=0x00000001014c64f4
- (void)removeFloatForKey:(id)arg1;	// IMP=0x00000001014c64a0
- (int)putFloat:(float)arg1 forKey:(id)arg2;	// IMP=0x00000001014c6344
- (float)getFloat:(id)arg1;	// IMP=0x00000001014c62a4
- (void)removeIntegerForKey:(id)arg1;	// IMP=0x00000001014c6260
- (int)putInteger:(long long)arg1 forKey:(id)arg2;	// IMP=0x00000001014c6164
- (long long)getInteger:(id)arg1;	// IMP=0x00000001014c60c4
- (void)removeDataForKey:(id)arg1;	// IMP=0x00000001014c607c
- (int)putData:(id)arg1 forKey:(id)arg2;	// IMP=0x00000001014c5f50
- (id)getData:(id)arg1;	// IMP=0x00000001014c5eac
- (void)removeStringForKey:(id)arg1;	// IMP=0x00000001014c5e68
- (int)putString:(id)arg1 forKey:(id)arg2;	// IMP=0x00000001014c5db4
- (id)getString:(id)arg1;	// IMP=0x00000001014c5d5c
- (id)init;	// IMP=0x00000001014c58c4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

