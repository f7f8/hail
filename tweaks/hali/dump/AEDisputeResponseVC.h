//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEDisputeEditBaseVC.h"

@class AEEditPhotoSelector, AEEditTextView;

@interface AEDisputeResponseVC : AEDisputeEditBaseVC
{
    AEEditTextView *_detailView;	// 8 = 0x8
    AEEditPhotoSelector *_photoSelector;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000a093c
- (void)submitWithimageUrls:(id)arg1;	// IMP=0x00000001000a05d8
- (void)onSubmit;	// IMP=0x00000001000a01dc
- (id)getComponents;	// IMP=0x000000010009fff4
- (id)pageTrackName;	// IMP=0x000000010009ffc8
- (id)initWithIssueId:(id)arg1;	// IMP=0x000000010009ff94
- (id)initWithParam:(id)arg1;	// IMP=0x000000010009ff2c

@end

