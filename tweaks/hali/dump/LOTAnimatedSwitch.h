//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LOTAnimatedControl.h"

@interface LOTAnimatedSwitch : LOTAnimatedControl
{
    double _onStartProgress;	// 8 = 0x8
    double _onEndProgress;	// 16 = 0x10
    double _offStartProgress;	// 24 = 0x18
    double _offEndProgress;	// 32 = 0x20
    struct CGPoint _touchTrackingStart;	// 40 = 0x28
    _Bool _on;	// 56 = 0x38
    _Bool _suppressToggle;	// 57 = 0x39
    _Bool _toggleToState;	// 58 = 0x3a
    _Bool _interactiveGesture;	// 59 = 0x3b
}

+ (id)switchNamed:(id)arg1 inBundle:(id)arg2;	// IMP=0x0000000101ceb4d4
+ (id)switchNamed:(id)arg1;	// IMP=0x0000000101ceb43c
@property(nonatomic) _Bool interactiveGesture; // @synthesize interactiveGesture=_interactiveGesture;
@property(nonatomic, getter=isOn) _Bool on; // @synthesize on=_on;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000101cec01c
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000101cebcd8
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000101cebc20
- (void)_toggleAndSendActions;	// IMP=0x0000000101cebbb0
- (void)_toggle;	// IMP=0x0000000101cebb90
- (id)accessibilityValue;	// IMP=0x0000000101cebae0
- (void)setOn:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000101ceb7a0
- (void)setProgressRangeForOffState:(double)arg1 toProgress:(double)arg2;	// IMP=0x0000000101ceb75c
- (void)setProgressRangeForOnState:(double)arg1 toProgress:(double)arg2;	// IMP=0x0000000101ceb728
- (void)setAnimationComp:(id)arg1;	// IMP=0x0000000101ceb6c8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000101ceb5a8

@end

