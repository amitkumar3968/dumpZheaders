/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import "CKInteractionProxiedView.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "ChatKit-Structs.h"
#import "CKTextBalloonContentView.h"

@class NSAttributedString, UIFont, UIColor;
@protocol CKTextInteractionDelegate;

@interface CKInteractiveLabel : XXUnknownSuperclass <CKInteractionProxiedView, CKTextBalloonContentView> {
@private
	BOOL _containsHyperlink;
	BOOL _interactionViewAttached;
	id<CKTextInteractionDelegate> _interactionDelegate;
}
@property(assign, nonatomic) id<CKTextInteractionDelegate> interactionDelegate;	// @synthesize=_interactionDelegate
@property(assign, nonatomic) int textAlignment;
@property(assign, nonatomic) CGSize shadowOffset;
@property(retain, nonatomic) UIColor* shadowColor;
@property(retain, nonatomic) UIColor* textColor;
@property(retain, nonatomic) UIFont* font;
@property(copy, nonatomic) NSAttributedString* attributedText;
@property(assign, nonatomic, getter=isInteractionViewAttached) BOOL interactionViewAttached;	// @synthesize=_interactionViewAttached
@property(assign, nonatomic) BOOL containsHyperlink;	// @synthesize=_containsHyperlink
// declared property setter: -(void)setInteractionDelegate:(id)delegate;
// declared property getter: -(id)interactionDelegate;
// declared property setter: -(void)setInteractionViewAttached:(BOOL)attached;
// declared property getter: -(BOOL)isInteractionViewAttached;
// declared property setter: -(void)setContainsHyperlink:(BOOL)hyperlink;
// declared property getter: -(BOOL)containsHyperlink;
-(void)willDetachInteractionView:(id)view;
-(void)willAttachInteractionView:(id)view;
-(void)prepareForReuse;
-(id)_synthesizedAttributedText;
-(BOOL)_shouldDrawUnderlinesLikeWebKit;
-(BOOL)_allowAscentRounding;
// declared property setter: -(void)setAttributedText:(id)text;
-(BOOL)isUserInteractionEnabled;
-(void)layoutSubviews;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(void)drawRect:(CGRect)rect;
-(id)initWithFrame:(CGRect)frame;
-(id)description;
-(void)dealloc;
@end
