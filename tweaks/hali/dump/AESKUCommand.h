//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFCommandService.h"

#import "AFCommandTest.h"

@class NSString;

@interface AESKUCommand : AFCommandService <AFCommandTest>
{
}

+ (id)paramsDescription;	// IMP=0x0000000100607750
+ (id)paramsToTest;	// IMP=0x0000000100607a4c
- (void)runWithParams:(id)arg1;	// IMP=0x0000000100607758

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

