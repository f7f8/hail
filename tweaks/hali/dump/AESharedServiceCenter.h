//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface AESharedServiceCenter : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableDictionary *_serviceMap;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x000000010102de6c
@property(retain, nonatomic) NSMutableDictionary *serviceMap; // @synthesize serviceMap=_serviceMap;
- (void).cxx_destruct;	// IMP=0x000000010102e518
- (Class)lookup:(id)arg1;	// IMP=0x000000010102e2e0
- (void)registerImpl:(Class)arg1 forProtocols:(id)arg2;	// IMP=0x000000010102e240
- (void)registerImpl:(Class)arg1 forProtocol:(id)arg2;	// IMP=0x000000010102dfec
- (id)init;	// IMP=0x000000010102df20

@end

