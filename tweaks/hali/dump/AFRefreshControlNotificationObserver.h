//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIRefreshControl;

@interface AFRefreshControlNotificationObserver : NSObject
{
    UIRefreshControl *_refreshControl;	// 8 = 0x8
}

@property(readonly, nonatomic) __weak UIRefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
- (void).cxx_destruct;	// IMP=0x00000001008bbb38
- (void)dealloc;	// IMP=0x00000001008bba40
- (void)af_endRefreshing;	// IMP=0x00000001008bb988
- (void)af_beginRefreshing;	// IMP=0x00000001008bb8d0
- (void)setRefreshingWithStateOfTask:(id)arg1;	// IMP=0x00000001008bb720
- (id)initWithActivityRefreshControl:(id)arg1;	// IMP=0x00000001008bb6a8

@end

