//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSFileManager, NSMutableArray;

@interface MirrorFileUtil : NSObject
{
    NSMutableArray *filePathArray;	// 8 = 0x8
    NSFileManager *localFileManager;	// 16 = 0x10
}

+ (id)getFileMD5WithPath:(id)arg1;	// IMP=0x000000010134f5b0
+ (id)getDatFilePathUnderPath:(id)arg1;	// IMP=0x000000010134f464
+ (id)unZipDataWithzipData:(id)arg1;	// IMP=0x000000010134f210
- (void).cxx_destruct;	// IMP=0x000000010134f78c

@end

