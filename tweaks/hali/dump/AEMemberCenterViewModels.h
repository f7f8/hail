//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AEMemberCenterModel;

@interface AEMemberCenterViewModels : NSObject
{
    AEMemberCenterModel *_currentModel;	// 8 = 0x8
}

@property(retain, nonatomic) AEMemberCenterModel *currentModel; // @synthesize currentModel=_currentModel;
- (void).cxx_destruct;	// IMP=0x000000010014835c
- (id)p_centerUserVM:(id)arg1;	// IMP=0x0000000100147c40
- (id)p_centerSectionCellVM;	// IMP=0x0000000100147bf0
- (id)p_privilegesCellVM:(id)arg1;	// IMP=0x0000000100147aa4
- (id)p_totalScores:(id)arg1;	// IMP=0x00000001001478e4
- (double)p_getMinScore:(id)arg1;	// IMP=0x0000000100147868
- (double)p_getMaxScore:(id)arg1;	// IMP=0x00000001001477ec
- (id)p_privileges:(id)arg1;	// IMP=0x00000001001475dc
- (id)p_bannerInfo:(id)arg1;	// IMP=0x00000001001472b8
- (id)p_zeorScoreUser:(id)arg1;	// IMP=0x0000000100146de4
- (id)p_normalUser:(id)arg1;	// IMP=0x00000001001469a0
- (id)p_tableViewDataSourceWithModel:(id)arg1;	// IMP=0x00000001001468d0
- (id)convertRecommandProductItemVM:(id)arg1;	// IMP=0x0000000100146148
- (id)p_recommandDataSourceWithModel:(id)arg1;	// IMP=0x0000000100145600
- (void)requestMemberRecommandProducts:(id)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x00000001001452d0
- (void)requestMemberCenter:(CDUnknownBlockType)arg1;	// IMP=0x0000000100144e50

@end

