//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AESlidingSelectionBackgroundViewModel, AESlidingSelectionHeaderViewModel, AESlidingSelectionModel, AESlidingSelectionViewModel, NSArray;

@protocol AESlidingSelectionViewModel <NSObject>
+ (AESlidingSelectionViewModel *)viewModelWithModel:(AESlidingSelectionModel *)arg1;
@property(retain, nonatomic) AESlidingSelectionBackgroundViewModel *backgroundViewModel;
@property(retain, nonatomic) AESlidingSelectionHeaderViewModel *headerViewModel;
@property(retain, nonatomic) NSArray *tableViewCellViewModels;
@end

