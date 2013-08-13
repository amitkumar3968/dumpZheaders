/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "Preferences-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSURL;

@interface PrefsUILinkLabel : XXUnknownSuperclass {
	NSURL* _url;
	BOOL _touchingURL;
	id _target;
	SEL _action;
@private
	NSURL* _URL;
}
@property(assign, nonatomic) SEL action;	// @synthesize=_action
@property(assign, nonatomic) id target;	// @synthesize=_target
@property(retain, nonatomic) NSURL* URL;	// @synthesize=_URL
// declared property getter: -(SEL)action;
// declared property getter: -(id)target;
// declared property getter: -(id)URL;
-(id)color:(id)color byMultiplyingSubComponentsBy:(float)by;
-(void)tappedLink:(id)link;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesMoved:(id)moved withEvent:(id)event;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)openURL:(id)url;
// declared property setter: -(void)setURL:(id)url;
// declared property setter: -(void)setTarget:(id)target;
// declared property setter: -(void)setAction:(SEL)action;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end
