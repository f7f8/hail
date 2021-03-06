//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AEDisputeDetailAddressDTO, NSArray, NSString;

@interface AEDisputeHistoryProcess : NSObject
{
    NSString *_actionType;	// 8 = 0x8
    NSString *_gmtCreateText;	// 16 = 0x10
    NSString *_submitMemberSeq;	// 24 = 0x18
    NSString *_submitMemberType;	// 32 = 0x20
    NSString *_templateType;	// 40 = 0x28
    NSString *_title;	// 48 = 0x30
    NSArray *_dataEntryList;	// 56 = 0x38
    NSArray *_proofList;	// 64 = 0x40
    NSString *_proofLabel;	// 72 = 0x48
    NSString *_oldValue;	// 80 = 0x50
    NSString *_valueNew;	// 88 = 0x58
    AEDisputeDetailAddressDTO *_address;	// 96 = 0x60
    NSString *_addressLabel;	// 104 = 0x68
}

+ (id)replacedKeyFromPropertyName;	// IMP=0x0000000100091398
@property(retain, nonatomic) NSString *addressLabel; // @synthesize addressLabel=_addressLabel;
@property(retain, nonatomic) AEDisputeDetailAddressDTO *address; // @synthesize address=_address;
@property(retain, nonatomic) NSString *valueNew; // @synthesize valueNew=_valueNew;
@property(retain, nonatomic) NSString *oldValue; // @synthesize oldValue=_oldValue;
@property(retain, nonatomic) NSString *proofLabel; // @synthesize proofLabel=_proofLabel;
@property(retain, nonatomic) NSArray *proofList; // @synthesize proofList=_proofList;
@property(retain, nonatomic) NSArray *dataEntryList; // @synthesize dataEntryList=_dataEntryList;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *templateType; // @synthesize templateType=_templateType;
@property(retain, nonatomic) NSString *submitMemberType; // @synthesize submitMemberType=_submitMemberType;
@property(retain, nonatomic) NSString *submitMemberSeq; // @synthesize submitMemberSeq=_submitMemberSeq;
@property(retain, nonatomic) NSString *gmtCreateText; // @synthesize gmtCreateText=_gmtCreateText;
@property(retain, nonatomic) NSString *actionType; // @synthesize actionType=_actionType;
- (void).cxx_destruct;	// IMP=0x00000001000917b4

@end

