//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AITDetailComment : NSObject
{
    _Bool _isDelete;	// 8 = 0x8
    NSString *_commentId;	// 16 = 0x10
    NSString *_commenterMemberSeq;	// 24 = 0x18
    NSString *_content;	// 32 = 0x20
    NSString *_translateContent;	// 40 = 0x28
    NSString *_postId;	// 48 = 0x30
    NSString *_replyCommentId;	// 56 = 0x38
    long long _replyTime;	// 64 = 0x40
    NSString *_replyTimeFromNow;	// 72 = 0x48
    NSString *_userAvatar;	// 80 = 0x50
    NSString *_userName;	// 88 = 0x58
    NSString *_replyName;	// 96 = 0x60
    NSString *_replyProfileUrl;	// 104 = 0x68
}

@property(copy, nonatomic) NSString *replyProfileUrl; // @synthesize replyProfileUrl=_replyProfileUrl;
@property(copy, nonatomic) NSString *replyName; // @synthesize replyName=_replyName;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(copy, nonatomic) NSString *userAvatar; // @synthesize userAvatar=_userAvatar;
@property(copy, nonatomic) NSString *replyTimeFromNow; // @synthesize replyTimeFromNow=_replyTimeFromNow;
@property(nonatomic) long long replyTime; // @synthesize replyTime=_replyTime;
@property(copy, nonatomic) NSString *replyCommentId; // @synthesize replyCommentId=_replyCommentId;
@property(copy, nonatomic) NSString *postId; // @synthesize postId=_postId;
@property(nonatomic) _Bool isDelete; // @synthesize isDelete=_isDelete;
@property(copy, nonatomic) NSString *translateContent; // @synthesize translateContent=_translateContent;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *commenterMemberSeq; // @synthesize commenterMemberSeq=_commenterMemberSeq;
@property(copy, nonatomic) NSString *commentId; // @synthesize commentId=_commentId;
- (void).cxx_destruct;	// IMP=0x0000000100714738

@end

