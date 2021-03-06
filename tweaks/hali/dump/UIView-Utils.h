//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface UIView (Utils)
+ (void)pushViews:(id)arg1 toRight:(float)arg2;	// IMP=0x000000010104995c
+ (void)reverseViews:(id)arg1 FromLeftToRightByWidth:(float)arg2;	// IMP=0x00000001010497d8
+ (void)reverseViewsFromLeftToRight:(id)arg1;	// IMP=0x0000000101049640
- (id)toImage;	// IMP=0x0000000101049ffc
@property(nonatomic) double bottom;
@property(nonatomic) double top;
@property(nonatomic) double right;
@property(nonatomic) double left;
@property(nonatomic) double height;
@property(nonatomic) double width;
- (void)setMaxXPosition:(float)arg1;	// IMP=0x00000001010495ac
- (void)setRightAligment:(float)arg1 ForLabelArrayWithSizeCalculate:(id)arg2;	// IMP=0x000000010104941c
- (void)hGetViewsWithClass:(Class)arg1 andArray:(id)arg2;	// IMP=0x00000001010492ac
- (id)getViewsWithClassName:(id)arg1;	// IMP=0x0000000101049278
- (id)getViewsWithClass:(Class)arg1;	// IMP=0x0000000101049214
- (id)getViewWithClassName:(id)arg1;	// IMP=0x00000001010491e0
- (id)getViewWithClass:(Class)arg1;	// IMP=0x0000000101049064
- (void)removeAllSubviewsFromSuperview;	// IMP=0x0000000101048f48
- (void)ergodicSubviewsWithBlock:(CDUnknownBlockType)arg1 DeepLoop:(_Bool)arg2;	// IMP=0x0000000101048ddc
- (id)initForAutoLayout;	// IMP=0x0000000101048d88
@end

