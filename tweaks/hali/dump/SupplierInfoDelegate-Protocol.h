//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, SupplierDTO, SupplierService;

@protocol SupplierInfoDelegate <NSObject>

@optional
- (void)supplierInfoLoaded:(SupplierService *)arg1 isSuccess:(_Bool)arg2 resultSupplier:(SupplierDTO *)arg3 error:(NSError *)arg4;
@end

