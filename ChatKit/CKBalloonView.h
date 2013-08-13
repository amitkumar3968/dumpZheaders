/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "ChatKit-Structs.h"
#import "UIGestureRecognizerDelegate.h"

@class CKMessagePart, UITapGestureRecognizer, UILongPressGestureRecognizer;
@protocol CKBalloonViewDelegate, CKBalloonViewActionDelegate;

@interface CKBalloonView : XXUnknownSuperclass <UIGestureRecognizerDelegate> {
	UITapGestureRecognizer* _singleTapGestureRecognizer;
	UITapGestureRecognizer* _oneFingerDoubleTapRecognizer;
	UILongPressGestureRecognizer* _longPressRecognizer;
	unsigned _isIgnoringSingleTap : 1;
	unsigned _calloutRegistered : 1;
@private
	id<CKBalloonViewDelegate> _delegate;
	id<CKBalloonViewActionDelegate> _actionDelegate;
	int _orientation;
	CKMessagePart* _messagePart;
	BOOL _tapEnabled;
	BOOL _restoring;
}
@property(assign, nonatomic, getter=isRestoring) BOOL restoring;	// @synthesize=_restoring
@property(assign, nonatomic, getter=isTapEnabled) BOOL tapEnabled;	// @synthesize=_tapEnabled
@property(retain, nonatomic) CKMessagePart* messagePart;	// @synthesize=_messagePart
@property(assign, nonatomic) int orientation;	// @synthesize=_orientation
@property(assign, nonatomic) id<CKBalloonViewActionDelegate> actionDelegate;	// @synthesize=_actionDelegate
@property(assign, nonatomic) id<CKBalloonViewDelegate> delegate;	// @synthesize=_delegate
+(UIEdgeInsets)contentInsetsForBalloonOrientation:(int)balloonOrientation;
+(float)entryFieldBalloonAdditionalHeight;
+(CGPoint)entryFieldBalloonOffset;
+(BOOL)fixedWidth;
+(BOOL)needsSingleTapGestureRecognizer;
// declared property setter: -(void)setRestoring:(BOOL)restoring;
// declared property getter: -(BOOL)isRestoring;
// declared property setter: -(void)setTapEnabled:(BOOL)enabled;
// declared property getter: -(BOOL)isTapEnabled;
// declared property setter: -(void)setMessagePart:(id)part;
// declared property getter: -(id)messagePart;
// declared property setter: -(void)setOrientation:(int)orientation;
// declared property getter: -(int)orientation;
// declared property setter: -(void)setActionDelegate:(id)delegate;
// declared property getter: -(id)actionDelegate;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property getter: -(id)delegate;
-(void)_setupGestureRecognizers;
-(void)singleTap:(id)tap;
-(void)longPressGesture:(id)gesture;
-(void)oneFingerDoubleTap:(id)tap;
-(void)_showCopyCallout;
-(void)sendAsTextMessage:(id)message;
-(void)_hideCopyCallout;
-(void)_toggleCopyCallout;
-(void)calloutWillHide:(id)callout;
-(void)_temporarilyIgnoreSingleTapGesture;
-(void)_stopIgnoringSingleTapGesture;
-(void)setupSingleTapRecognizerOnView:(id)view;
-(void)flashHighlight;
-(void)copyToPasteboard;
-(void)restoreBalloonStateAfterRotation;
-(void)hideCopyCallout;
-(void)prepareForReuse;
-(CGRect)contentBounds;
-(UIEdgeInsets)contentInsets;
-(void)setEnableSingleTap:(BOOL)tap;
-(id)initWithFrame:(CGRect)frame;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(void)_windowResignedKey;
-(void)_windowBecameKey;
-(BOOL)_becomeFirstResponderWhenPossible;
-(BOOL)canBecomeFirstResponder;
-(void)copy:(id)copy;
-(id)description;
-(void)dealloc;
@end
