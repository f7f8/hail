//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AEUGCFZRecommendUserDTO, NSDictionary;

@interface AEUGCFZRecommendUserItemViewModel : NSObject
{
    AEUGCFZRecommendUserDTO *_dto;	// 8 = 0x8
    NSDictionary *_trackInfo;	// 16 = 0x10
}

@property(retain, nonatomic) NSDictionary *trackInfo; // @synthesize trackInfo=_trackInfo;
@property(retain, nonatomic) AEUGCFZRecommendUserDTO *dto; // @synthesize dto=_dto;
- (void).cxx_destruct;	// IMP=0x00000001006a1a00
- (id)initWithRecommendUserDTO:(id)arg1;	// IMP=0x00000001006a18e4

@end

