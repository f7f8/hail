//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface TBSDKSendFileObject : NSObject
{
    NSData *_data;	// 8 = 0x8
    NSString *_fileName;	// 16 = 0x10
    NSString *_key;	// 24 = 0x18
}

@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;	// IMP=0x0000000101381c04
- (id)initWithData:(id)arg1 fileName:(id)arg2 forKey:(id)arg3;	// IMP=0x0000000101381ac0

@end

