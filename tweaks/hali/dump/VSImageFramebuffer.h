//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface VSImageFramebuffer : NSObject
{
    unsigned int framebuffer;	// 8 = 0x8
    struct __CVBuffer *pixelBufferRef;	// 16 = 0x10
    struct __CVBuffer *renderTexture;	// 24 = 0x18
    unsigned long long readLockCount;	// 32 = 0x20
    unsigned long long framebufferReferenceCount;	// 40 = 0x28
    _Bool referenceCountingDisabled;	// 48 = 0x30
    _Bool _yuvFormat;	// 49 = 0x31
    _Bool _onlyTexture;	// 50 = 0x32
    unsigned int _texture;	// 52 = 0x34
    NSDictionary *_plusInfo;	// 56 = 0x38
    struct CGSize _size;	// 64 = 0x40
    struct VSTextureOptions _textureOptions;	// 80 = 0x50
}

@property(retain, nonatomic) NSDictionary *plusInfo; // @synthesize plusInfo=_plusInfo;
@property(readonly) _Bool onlyTexture; // @synthesize onlyTexture=_onlyTexture;
@property(readonly) struct VSTextureOptions textureOptions; // @synthesize textureOptions=_textureOptions;
@property(readonly) struct CGSize size; // @synthesize size=_size;
- (void).cxx_destruct;	// IMP=0x0000000101ab929c
@property(readonly) unsigned int texture; // @synthesize texture=_texture;
- (struct __CVBuffer *)pixelBuffer;	// IMP=0x0000000101ab91c4
- (char *)byteBuffer;	// IMP=0x0000000101ab9174
- (unsigned long long)bytesPerRow;	// IMP=0x0000000101ab9118
- (void)unlockAfterReading;	// IMP=0x0000000101ab90b0
- (void)lockForReading;	// IMP=0x0000000101ab904c
- (void)restoreRenderTarget;	// IMP=0x0000000101ab9018
- (struct CGImage *)newCGImageFromFramebufferContents;	// IMP=0x0000000101ab8d98
- (void)enableReferenceCounting;	// IMP=0x0000000101ab8d14
- (void)disableReferenceCounting;	// IMP=0x0000000101ab8d00
- (void)clearAllLocks;	// IMP=0x0000000101ab8cf0
- (void)unlock;	// IMP=0x0000000101ab8c58
- (void)lock;	// IMP=0x0000000101ab8c30
- (void)activateFramebuffer;	// IMP=0x0000000101ab8be0
- (void)destroyFramebuffer;	// IMP=0x0000000101ab8a80
- (void)generateFramebuffer;	// IMP=0x0000000101ab86a8
- (void)generateTexture;	// IMP=0x0000000101ab8618
- (void)dealloc;	// IMP=0x0000000101ab85c8
- (id)initWithSize:(struct CGSize)arg1 overriddenTexture:(unsigned int)arg2;	// IMP=0x0000000101ab84e4
- (id)initWithSize:(struct CGSize)arg1 textureOptions:(struct VSTextureOptions)arg2 onlyTexture:(_Bool)arg3;	// IMP=0x0000000101ab8338
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1 textureOptions:(struct VSTextureOptions)arg2 onlyTexture:(_Bool)arg3;	// IMP=0x0000000101ab8120

@end

