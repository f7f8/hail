//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AEHomeService, NSDate, NSDictionary, NSError, NSString;

@protocol HomeServiceDelegate <NSObject>

@optional
@property(nonatomic) int totalProductCount;
- (void)QPService:(AEHomeService *)arg1 updateStatus:(_Bool)arg2;
- (void)homeWaterLoaded:(NSDictionary *)arg1 withDate:(NSDate *)arg2 pageIndex:(long long)arg3 tabId:(NSString *)arg4 isSuccess:(_Bool)arg5 error:(NSError *)arg6;
- (void)homeWaterLoaded:(NSDictionary *)arg1 withDate:(NSDate *)arg2 isSuccess:(_Bool)arg3 error:(NSError *)arg4;
- (void)promotionsLoaded:(NSDictionary *)arg1 isSuccess:(_Bool)arg2;
@end

