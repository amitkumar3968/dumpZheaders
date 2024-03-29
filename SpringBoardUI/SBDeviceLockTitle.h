/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface SBDeviceLockTitle : XXUnknownSuperclass {
	int _style;
	int _interfaceOrientation;
}
@property(retain, nonatomic) NSString* subtitle;
@property(retain, nonatomic) NSString* title;
@property(assign, nonatomic, getter=isHighlighted) BOOL highlighted;
@property(assign, nonatomic) int interfaceOrientation;	// @synthesize=_interfaceOrientation
+(id)newWithStyle:(int)style interfaceOrientation:(int)orientation;
// declared property setter: -(void)setInterfaceOrientation:(int)orientation;
// declared property getter: -(int)interfaceOrientation;
-(void)blinkSubtitle;
// declared property setter: -(void)setSubtitle:(id)subtitle;
// declared property getter: -(id)subtitle;
// declared property setter: -(void)setTitle:(id)title;
// declared property getter: -(id)title;
// declared property setter: -(void)setHighlighted:(BOOL)highlighted;
// declared property getter: -(BOOL)isHighlighted;
-(id)_initWithStyle:(int)style interfaceOrientation:(int)orientation;
@end

