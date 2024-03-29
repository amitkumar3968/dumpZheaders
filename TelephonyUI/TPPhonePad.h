/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import "TelephonyUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface TPPhonePad : XXUnknownSuperclass {
	int _downKey;
	id _delegate;
	BOOL _playsSounds;
	BOOL _supportsHardPause;
	float _topHeight;
	float _midHeight;
	float _bottomHeight;
	float _leftWidth;
	float _midWidth;
	float _rightWidth;
	CFSetRef _inflightSounds;
	CFDictionaryRef _keyToButtonMap;
	unsigned _incompleteSounds;
	unsigned _delegateSoundCallbacks : 1;
	unsigned _soundsActivated : 1;
}
@property(assign) BOOL supportsHardPause;	// @synthesize=_supportsHardPause
+(void)_delayedDeactivate;
+(BOOL)launchFieldTestIfNeeded:(id)needed;
+(BOOL)shouldStringAutoDial:(id)dial givenLastChar:(BOOL)aChar;
// declared property setter: -(void)setSupportsHardPause:(BOOL)pause;
// declared property getter: -(BOOL)supportsHardPause;
-(void)_stopAllSoundsForcingCallbacks:(BOOL)callbacks;
-(void)_stopSoundForKey:(int)key;
-(void)_playSoundForKey:(int)key;
-(void)_notifySoundCompletionIfNecessary:(unsigned long)necessary;
-(CGRect)_rectForKey:(int)key;
-(int)_keyForPoint:(CGPoint)point;
-(void)_handleKeyPressAndHold:(id)hold;
-(void)_handleKey:(id)key forUIEvent:(id)uievent;
-(BOOL)cancelTouchTracking;
-(void)setHighlighted:(BOOL)highlighted;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(BOOL)pointMostlyInside:(CGPoint)inside withEvent:(id)event;
-(void)drawRect:(CGRect)rect;
-(id)_imageByCroppingImage:(id)image toRect:(CGRect)rect;
-(CGRect)_updateRect:(CGRect)rect withScale:(float)scale;
-(float)_yFudge;
-(id)_keypadImage;
-(id)_pressedImage;
-(CGPoint)_keypadOrigin;
-(void)setNeedsDisplayForKey:(int)key;
-(id)_buttonForKeyAtIndex:(int)index;
-(void)setButton:(id)button forKeyAtIndex:(int)index;
-(void)setPlaysSounds:(BOOL)sounds;
-(void)setDelegate:(id)delegate;
-(void)movedToWindow:(id)window;
-(void)movedFromWindow:(id)window;
-(void)_appResumed;
-(void)_appSuspended;
-(void)removeFromSuperview;
-(void)_activateSounds:(BOOL)sounds;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
-(id)scriptingInfoWithChildren;
@end

