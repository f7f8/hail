//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextFieldDelegate.h"
#import "UITextViewDelegate.h"

@class NSString, UILabel, UITextField, UITextView;

@interface AEUGCPostProductContentEditView : UIView <UITextFieldDelegate, UITextViewDelegate>
{
    UILabel *_titleLabel;	// 8 = 0x8
    UILabel *_titleErrorLabel;	// 16 = 0x10
    UILabel *_titleCountLabel;	// 24 = 0x18
    UILabel *_descriptionLabel;	// 32 = 0x20
    UILabel *_descriptionErrorLabel;	// 40 = 0x28
    UILabel *_descriptionCountLabel;	// 48 = 0x30
    UIView *_topLine;	// 56 = 0x38
    UIView *_line1;	// 64 = 0x40
    UIView *_line2;	// 72 = 0x48
    UIView *_bottomLine;	// 80 = 0x50
    unsigned long long _titleMaxLength;	// 88 = 0x58
    unsigned long long _descriptionMaxLength;	// 96 = 0x60
    id <AEUGCPostProductContentEditViewModelProtocol> _model;	// 104 = 0x68
    id <AEUGCPostProductContentEditViewDelegate> _delegate;	// 112 = 0x70
    UITextField *_titleTextField;	// 120 = 0x78
    UITextView *_descriptionTextView;	// 128 = 0x80
    double _preferredMaxLayoutWidth;	// 136 = 0x88
}

+ (id)chineseSet;	// IMP=0x0000000100e0fce0
+ (id)filterText:(id)arg1;	// IMP=0x0000000100e0fb04
+ (_Bool)shouldForbiddenChineseTextInput:(id)arg1;	// IMP=0x0000000100e0f948
@property(nonatomic) double preferredMaxLayoutWidth; // @synthesize preferredMaxLayoutWidth=_preferredMaxLayoutWidth;
@property(readonly, nonatomic) UITextView *descriptionTextView; // @synthesize descriptionTextView=_descriptionTextView;
@property(readonly, nonatomic) UITextField *titleTextField; // @synthesize titleTextField=_titleTextField;
@property(nonatomic) __weak id <AEUGCPostProductContentEditViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x0000000100e10c2c
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;	// IMP=0x0000000100e10b54
- (void)textViewDidEndEditing:(id)arg1;	// IMP=0x0000000100e1092c
- (void)textViewDidBeginEditing:(id)arg1;	// IMP=0x0000000100e107e4
- (void)textViewDidChange:(id)arg1;	// IMP=0x0000000100e10478
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x0000000100e10454
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;	// IMP=0x0000000100e103f0
- (void)textFieldDidEndEditing:(id)arg1;	// IMP=0x0000000100e101c8
- (void)textFieldDidBeginEditing:(id)arg1;	// IMP=0x0000000100e10080
- (void)textFieldChange:(id)arg1;	// IMP=0x0000000100e0fe14
- (void)bindModel:(id)arg1;	// IMP=0x0000000100e0fd80
- (id)addLineWithColorHex:(unsigned long long)arg1;	// IMP=0x0000000100e0f8a4
- (id)addLabel;	// IMP=0x0000000100e0f7b0
- (void)textViewInputExamine;	// IMP=0x0000000100e0f538
- (void)textFieldInputExamine;	// IMP=0x0000000100e0f2c0
- (void)configAutoLayout;	// IMP=0x0000000100e0d344
- (_Bool)resignFirstResponder;	// IMP=0x0000000100e0d2d4
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000100e0d20c
- (void)layoutSubviews;	// IMP=0x0000000100e0d1d8
- (id)init;	// IMP=0x0000000100e0c5b8
- (void)dealloc;	// IMP=0x0000000100e0c53c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

