//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface PushCenterSubscribeConfigObject : NSObject
{
    NSString *_status;	// 8 = 0x8
    NSMutableArray *_msgTypesArray;	// 16 = 0x10
}

@property(retain, nonatomic) NSMutableArray *msgTypesArray; // @synthesize msgTypesArray=_msgTypesArray;
@property(retain, nonatomic) NSString *status; // @synthesize status=_status;
- (void).cxx_destruct;	// IMP=0x0000000101420eac
- (id)initWithDict:(id)arg1;	// IMP=0x0000000101420960

@end

