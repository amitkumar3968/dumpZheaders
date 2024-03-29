/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
 */

#import "UIAccessibility-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface XXUnknownSuperclass (UIAccessibilityLoader)
+(id)accessibilityBundleWithLastPathComponent:(id)lastPathComponent;
-(void)_accessibilityInitializeContainerLogic;
-(id)accessibilityBundlePath;
@end

@interface XXUnknownSuperclass (UIAccessibilityInitialization)
-(BOOL)_accessibilitySystemAppServerIsReady;
-(BOOL)_accessibilityIsSystemAppServer;
@end

@interface XXUnknownSuperclass (Private)
@property(assign, nonatomic) CGRect bounds;	// @dynamic
@property(assign, nonatomic) id accessibilityDelegate;	// @dynamic
-(int)_accessibilityBestCharacterModeForHandwriting;
-(BOOL)_accessibilityShouldEchoHandwritingCharacter;
-(BOOL)_accessibilityCanHandleDirectHandwritingInput;
-(void)_accessibilityInsertText:(id)text atPosition:(int)position;
-(BOOL)_accessibilityCanDeleteCharacterWithHandwriting;
-(void)_accessibilityDeleteCharacterAtCursor;
// declared property getter: -(CGRect)bounds;
// declared property setter: -(void)setBounds:(CGRect)bounds;
-(void)delegateSpecificsForAttribute:(int)attribute delegate:(id*)delegate selector:(SEL*)selector;
-(void)setDelegate:(id)delegate forAttribute:(int)attribute withSelector:(SEL)selector;
-(void)setTableCellYOffset:(float)offset;
-(id)dataForKey:(id)key;
-(void)setData:(id)data forKey:(id)key;
// declared property setter: -(void)setAccessibilityDelegate:(id)delegate;
// declared property getter: -(id)accessibilityDelegate;
@end

@interface XXUnknownSuperclass (UIAccessibility)
-(id)accessibilityTableViewCellText;
@end

@interface XXUnknownSuperclass (AXRectHelper)
-(CGRect)_axConvertRect:(CGRect)rect toWindow:(id)window;
@end

@interface XXUnknownSuperclass (UIAccessibilityAutomation)
-(void)_setAccessibilityLocalizedStringLookupInfo:(id)info;
-(id)_accessibilityLocalizedStringLookupInfo;
@end

