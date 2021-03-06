//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TFENetMonitorServiceProtocol.h"

@interface TFENetMonitorService : NSObject <TFENetMonitorServiceProtocol>
{
    id <TFENetMonitorServiceProtocol> _serviceInternal;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x000000010109daa8
@property(retain) id <TFENetMonitorServiceProtocol> serviceInternal; // @synthesize serviceInternal=_serviceInternal;
- (void).cxx_destruct;	// IMP=0x000000010109dd0c
@property unsigned long long lastNetworkType;
- (void)addNetworkListener:(CDUnknownBlockType)arg1;	// IMP=0x000000010109dca8
- (id)currentWifiSSID;	// IMP=0x000000010109dc90
- (unsigned long long)currentNetwork;	// IMP=0x000000010109dc78
- (_Bool)isReachable;	// IMP=0x000000010109dc60
- (_Bool)isUseProxy;	// IMP=0x000000010109dc48
- (id)init;	// IMP=0x000000010109db50

@end

