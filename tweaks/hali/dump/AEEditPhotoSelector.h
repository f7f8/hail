//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEEditComponentBaseView.h"

@class AEPhotoBarView, UILabel;

@interface AEEditPhotoSelector : AEEditComponentBaseView
{
    UILabel *_explainLbl;	// 8 = 0x8
    AEPhotoBarView *_photoBarView;	// 16 = 0x10
}

@property(retain) AEPhotoBarView *photoBarView; // @synthesize photoBarView=_photoBarView;
- (void).cxx_destruct;	// IMP=0x00000001000c31c4
- (long long)imageCount;	// IMP=0x00000001000c3150
- (void)buildContentView;	// IMP=0x00000001000c2a74
- (id)initWithUrls:(id)arg1 isRequired:(_Bool)arg2;	// IMP=0x00000001000c29b0

@end

