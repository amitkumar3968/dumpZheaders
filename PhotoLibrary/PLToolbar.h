/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "PhotoLibrary-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIToolbar;

@interface PLToolbar : XXUnknownSuperclass {
@private
	unsigned _backgroundHidden : 1;
	unsigned _backgroundAlwaysVisible : 1;
	UIToolbar* _persistentToolbar;
}
@property(assign, nonatomic, getter=isBackgroundAlwaysVisible) BOOL backgroundAlwaysVisible;
@property(assign, nonatomic, getter=isBackgroundHidden) BOOL backgroundHidden;
// declared property setter: -(void)setBackgroundAlwaysVisible:(BOOL)visible;
// declared property getter: -(BOOL)isBackgroundAlwaysVisible;
// declared property setter: -(void)setBackgroundHidden:(BOOL)hidden;
// declared property getter: -(BOOL)isBackgroundHidden;
-(void)drawRect:(CGRect)rect;
-(void)dealloc;
@end

