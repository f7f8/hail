//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TBSwizzleHelper : NSObject
{
}

+ (_Bool)isMainBundleClass:(Class)arg1;	// IMP=0x000000010163977c
+ (void)addOverwrite:(Class)arg1 newSelector:(SEL)arg2 superSelector:(SEL)arg3;	// IMP=0x0000000101639710
+ (struct objc_method *)superMethod:(Class)arg1 selector:(SEL)arg2;	// IMP=0x00000001016396ac
+ (_Bool)isNSObjectInstanceMethodOverwrite:(Class)arg1 selector:(SEL)arg2;	// IMP=0x000000010163965c
+ (_Bool)isClassMethodOverwrite:(Class)arg1 selector:(SEL)arg2;	// IMP=0x000000010163960c
+ (_Bool)isSelectorReturnType:(SEL)arg1;	// IMP=0x000000010163959c
+ (char *)returnTypeWithClass:(Class)arg1 isClass:(_Bool)arg2 selector:(SEL)arg3;	// IMP=0x0000000101639564
+ (void)swizzleClass:(Class)arg1 isClass:(_Bool)arg2 origSel:(SEL)arg3 newImp:(CDUnknownFunctionPointerType)arg4 origImp:(CDUnknownFunctionPointerType *)arg5;	// IMP=0x0000000101639510
+ (void)swizzleClass:(Class)arg1 isClass:(_Bool)arg2 origSel:(SEL)arg3 newImp:(CDUnknownFunctionPointerType)arg4;	// IMP=0x0000000101639500
+ (void)swizzleClass:(Class)arg1 isClass:(_Bool)arg2 origSel:(SEL)arg3 newSel:(SEL)arg4;	// IMP=0x0000000101639408

@end

