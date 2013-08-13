/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import "ChatKit-Structs.h"
#import "CKTextBalloonView.h"

@class UIView, NSAttributedString;
@protocol CKTextBalloonContentView;

@interface CKSubjectAndTextBalloonView : CKTextBalloonView {
@private
	int _subjectAlignment;
	NSAttributedString* _attributedSubject;
	UIView<CKTextBalloonContentView>* _subjectView;
	UIView* _dividerLineView;
	CGSize _subjectSize;
}
@property(assign, nonatomic) CGSize subjectSize;	// @synthesize=_subjectSize
@property(retain, nonatomic) UIView* dividerLineView;	// @synthesize=_dividerLineView
@property(assign, nonatomic) int subjectAlignment;	// @synthesize=_subjectAlignment
@property(retain, nonatomic) UIView<CKTextBalloonContentView>* subjectView;	// @synthesize=_subjectView
@property(copy, nonatomic) NSAttributedString* attributedSubject;	// @synthesize=_attributedSubject
// declared property setter: -(void)setSubjectSize:(CGSize)size;
// declared property getter: -(CGSize)subjectSize;
// declared property setter: -(void)setDividerLineView:(id)view;
// declared property getter: -(id)dividerLineView;
// declared property setter: -(void)setSubjectView:(id)view;
// declared property getter: -(id)subjectView;
// declared property getter: -(id)attributedSubject;
// declared property setter: -(void)setSubjectAlignment:(int)alignment;
// declared property getter: -(int)subjectAlignment;
-(void)updateSubjectViewToClass:(Class)aClass;
-(void)updateSubjectAndTextViews;
// declared property setter: -(void)setAttributedSubject:(id)subject;
-(void)updateTextShadow;
-(void)updateFontSize;
-(void)copyToPasteboard;
-(void)prepareForReuse;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)frame;
-(id)initWithFrame:(CGRect)frame;
-(id)description;
-(void)dealloc;
@end
