//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUIViewController.h"

@class NSString;

@interface AEStoreSearchViewController : AEUIViewController
{
    NSString *_companyId;	// 8 = 0x8
    NSString *_adminSeq;	// 16 = 0x10
    NSString *_storeNO;	// 24 = 0x18
    id <AESearchBarSharedServiceProtocol> _searchBarController;	// 32 = 0x20
}

@property(retain, nonatomic) id <AESearchBarSharedServiceProtocol> searchBarController; // @synthesize searchBarController=_searchBarController;
@property(retain, nonatomic) NSString *storeNO; // @synthesize storeNO=_storeNO;
@property(retain, nonatomic) NSString *adminSeq; // @synthesize adminSeq=_adminSeq;
@property(retain, nonatomic) NSString *companyId; // @synthesize companyId=_companyId;
- (void).cxx_destruct;	// IMP=0x0000000100d0be54
- (id)extraParamsForAction;	// IMP=0x0000000100d0bbc0
- (void)viewDidLoad;	// IMP=0x0000000100d0b918
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100d0b8a4
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100d0b830
- (id)initWithParam:(id)arg1;	// IMP=0x0000000100d0b6c4

@end

