//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AIFAPIConfig, NSString;

@interface AIFAPICommonBizBuilder : NSObject
{
    NSString *_urlString;	// 8 = 0x8
    AIFAPIConfig *_apiConfig;	// 16 = 0x10
}

+ (id)getInstanceByAPIConfig:(id)arg1 url:(id)arg2;	// IMP=0x0000000101014968
@property(retain, nonatomic) AIFAPIConfig *apiConfig; // @synthesize apiConfig=_apiConfig;
@property(copy, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
- (void).cxx_destruct;	// IMP=0x0000000101016490
- (id)buildCommonParams:(id)arg1;	// IMP=0x0000000101015f20
- (id)getCacheHeaders;	// IMP=0x0000000101015dd8
- (id)getHeadersPerformanceInfo;	// IMP=0x0000000101015948
- (id)getHeadersDeviceInfo;	// IMP=0x0000000101015670
- (id)getHeadersVV;	// IMP=0x0000000101014eac
- (id)getHeadersHost;	// IMP=0x0000000101014e30
- (id)getHeadersUserAgent;	// IMP=0x0000000101014bf0
- (id)buildCommonHeaders;	// IMP=0x0000000101014a08

@end

