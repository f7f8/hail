//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "AEUGCComponentProxy.h"

@class AEUGCProductItemCardView, NSString;

@interface AEUGCProductItemCardCell : UICollectionViewCell <AEUGCComponentProxy>
{
    AEUGCProductItemCardView *_cardView;	// 8 = 0x8
}

@property(retain, nonatomic) AEUGCProductItemCardView *cardView; // @synthesize cardView=_cardView;
- (void).cxx_destruct;	// IMP=0x00000001007ab148
- (void)bindModel:(id)arg1;	// IMP=0x00000001007aaa68
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001007aa824

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

