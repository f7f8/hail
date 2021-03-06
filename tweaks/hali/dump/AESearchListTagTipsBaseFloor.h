//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AETileAdapterFloor.h"

#import "AELabelSelectionViewDelegate.h"

@class AELabelSelectionView, NSString;

@interface AESearchListTagTipsBaseFloor : AETileAdapterFloor <AELabelSelectionViewDelegate>
{
    AELabelSelectionView *_labelSelectionView;	// 8 = 0x8
}

+ (id)getSearchTagFromLabelSelectionItemViewModel:(id)arg1;	// IMP=0x0000000100c64bc4
+ (Class)modelClass;	// IMP=0x0000000100c64960
+ (id)identifier;	// IMP=0x0000000100c64934
@property(retain, nonatomic) AELabelSelectionView *labelSelectionView; // @synthesize labelSelectionView=_labelSelectionView;
- (void).cxx_destruct;	// IMP=0x0000000100c64ef4
- (_Bool)renderWithTile:(id)arg1;	// IMP=0x0000000100c64d78
- (id)exposureStringWithKeyword:(id)arg1;	// IMP=0x0000000100c64cb8
- (void)configConstraints;	// IMP=0x0000000100c64cb4
- (void)labelSelectionDidSelectedView:(id)arg1 labelSelectionItemViewModel:(id)arg2;	// IMP=0x0000000100c64a6c
- (void)configComponents;	// IMP=0x0000000100c649dc
- (id)initFloor;	// IMP=0x0000000100c64974

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

