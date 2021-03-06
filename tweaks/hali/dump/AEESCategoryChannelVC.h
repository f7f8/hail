//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ActivityChannelViewController.h"

#import "AECategoryRefineDelegate.h"

@class AECategoryRefineTile, AECategoryRefineTileCell, AESpinnerTableView, NSDictionary, NSString;

@interface AEESCategoryChannelVC : ActivityChannelViewController <AECategoryRefineDelegate>
{
    AESpinnerTableView *_spinnerView;	// 8 = 0x8
    AECategoryRefineTileCell *_refineView;	// 16 = 0x10
    AECategoryRefineTile *_refineTile;	// 24 = 0x18
    NSString *_selectedCateId;	// 32 = 0x20
    NSString *_selectedSubCateId;	// 40 = 0x28
    NSDictionary *_refreshParams;	// 48 = 0x30
    struct CGPoint _previousOffset;	// 56 = 0x38
}

@property(nonatomic) struct CGPoint previousOffset; // @synthesize previousOffset=_previousOffset;
@property(retain, nonatomic) NSDictionary *refreshParams; // @synthesize refreshParams=_refreshParams;
@property(retain, nonatomic) NSString *selectedSubCateId; // @synthesize selectedSubCateId=_selectedSubCateId;
@property(retain, nonatomic) NSString *selectedCateId; // @synthesize selectedCateId=_selectedCateId;
@property(retain, nonatomic) AECategoryRefineTile *refineTile; // @synthesize refineTile=_refineTile;
- (void).cxx_destruct;	// IMP=0x0000000100302914
- (void)collectionViewDidScrollToOffset:(struct CGPoint)arg1;	// IMP=0x00000001003027c8
- (void)refreshCategoryChannel;	// IMP=0x0000000100302694
- (void)refineCategory:(id)arg1 categoryChangTo:(id)arg2;	// IMP=0x0000000100302524
- (void)updateSpinnerTableView;	// IMP=0x0000000100302178
- (id)willProcessFloorDTOs:(id)arg1 withDataContext:(id)arg2;	// IMP=0x0000000100301e18
- (void)viewDidLoad;	// IMP=0x00000001003012d0
- (id)initWithParam:(id)arg1;	// IMP=0x0000000100301130

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

