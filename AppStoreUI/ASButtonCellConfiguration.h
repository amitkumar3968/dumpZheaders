/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppStoreUI.framework/AppStoreUI
 */

#import "AppStoreUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImage, UIBezierPath;

@interface ASButtonCellConfiguration : XXUnknownSuperclass {
	UIImage* _normalButtonImage;
	UIImage* _selectedButtonImage;
	UIBezierPath* _selectionClipPath;
}
+(float)rowHeightForContext:(id)context representedObject:(id)object;
-(CGRect)_frameForImage:(id)image;
-(void)reloadStrings;
-(void)reloadLayoutInformation;
-(void)reloadImages;
-(id)fontForLabelAtIndex:(unsigned)index;
-(void)drawWithModifiers:(unsigned)modifiers;
-(id)colorForLabelAtIndex:(unsigned)index withModifiers:(unsigned)modifiers;
-(void)dealloc;
-(id)init;
@end

