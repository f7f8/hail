//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AEFloorProductDetailDescImageItemModel : NSObject
{
    NSString *_action;	// 8 = 0x8
    NSString *_url;	// 16 = 0x10
    double _width;	// 24 = 0x18
    double _height;	// 32 = 0x20
}

@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double width; // @synthesize width=_width;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *action; // @synthesize action=_action;
- (void).cxx_destruct;	// IMP=0x00000001004f9640
@property(readonly, nonatomic) double ratio;
- (id)initWithURL:(id)arg1 action:(id)arg2 width:(double)arg3 height:(double)arg4;	// IMP=0x00000001004f949c

@end

