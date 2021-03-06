//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VKApiObject.h"

@class NSNumber, NSString;

@interface VKAudio : VKApiObject
{
    _Bool _fromCache;	// 8 = 0x8
    _Bool _ignoreCache;	// 9 = 0x9
    NSNumber *_id;	// 16 = 0x10
    NSNumber *_owner_id;	// 24 = 0x18
    NSString *_artist;	// 32 = 0x20
    NSString *_title;	// 40 = 0x28
    NSNumber *_duration;	// 48 = 0x30
    NSString *_url;	// 56 = 0x38
    NSNumber *_lyrics_id;	// 64 = 0x40
    NSNumber *_album_id;	// 72 = 0x48
    NSNumber *_genre_id;	// 80 = 0x50
}

@property(nonatomic) _Bool ignoreCache; // @synthesize ignoreCache=_ignoreCache;
@property(nonatomic) _Bool fromCache; // @synthesize fromCache=_fromCache;
@property(retain, nonatomic) NSNumber *genre_id; // @synthesize genre_id=_genre_id;
@property(retain, nonatomic) NSNumber *album_id; // @synthesize album_id=_album_id;
@property(retain, nonatomic) NSNumber *lyrics_id; // @synthesize lyrics_id=_lyrics_id;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSNumber *duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *artist; // @synthesize artist=_artist;
@property(retain, nonatomic) NSNumber *owner_id; // @synthesize owner_id=_owner_id;
@property(retain, nonatomic) NSNumber *id; // @synthesize id=_id;
- (void).cxx_destruct;	// IMP=0x0000000100956d28

@end

