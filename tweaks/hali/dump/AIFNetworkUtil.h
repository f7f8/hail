//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AIFNetworkUtil : NSObject
{
}

+ (id)outPutDNSServers;	// IMP=0x000000010106138c
+ (id)deviceIPAdress;	// IMP=0x0000000101061088
+ (id)getNetworkTypeString:(long long)arg1;	// IMP=0x0000000101060ffc
+ (id)formatIPV4Address:(struct in_addr)arg1;	// IMP=0x0000000101060f78
+ (id)formatIPV6Address:(struct in6_addr)arg1;	// IMP=0x0000000101060ef4
+ (id)getIPV6DNSWithHostName:(id)arg1;	// IMP=0x0000000101060dc4
+ (id)getIPV4DNSWithHostName:(id)arg1;	// IMP=0x0000000101060c44
+ (id)getDNSsByDomain:(id)arg1;	// IMP=0x0000000101060ae0
+ (long long)computeDurationSince:(long long)arg1;	// IMP=0x0000000101060a98
+ (long long)getMicroSeconds;	// IMP=0x0000000101060a70
+ (_Bool)isUseProxy:(id)arg1;	// IMP=0x0000000101060974
+ (id)stringForNetworkError:(id)arg1;	// IMP=0x00000001010608c4
+ (id)checkURL:(id)arg1;	// IMP=0x0000000101060784

@end

