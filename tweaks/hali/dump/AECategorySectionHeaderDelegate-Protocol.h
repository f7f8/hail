//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AECategorySectionHeader;

@protocol AECategorySectionHeaderDelegate <NSObject>

@optional
- (void)sectionHeaderView:(AECategorySectionHeader *)arg1 sectionGoList:(long long)arg2;
- (void)sectionHeaderView:(AECategorySectionHeader *)arg1 sectionClosed:(long long)arg2;
- (void)sectionHeaderView:(AECategorySectionHeader *)arg1 sectionOpened:(long long)arg2;
@end

