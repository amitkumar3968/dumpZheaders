/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "PDSlideBase.h"

@class OADThemeOverrides, OADColorMap;

__attribute__((visibility("hidden")))
@interface PDSlideChild : PDSlideBase {
@private
	BOOL mShowMasterPlaceholderAnimations;
	BOOL mShowMasterShapes;
	OADThemeOverrides* mThemeOverrides;
	OADColorMap* mColorMapOverride;
}
@property(retain) id colorMapOverride;	// converted property
@property(assign) BOOL showMasterShapes;	// converted property
@property(assign) BOOL showMasterPlaceholderAnimations;	// converted property
-(id)drawingTheme;
-(void)doneWithContent;
-(id)styleMatrix;
-(id)colorMap;
-(id)fontScheme;
-(id)colorScheme;
// converted property setter: -(void)setColorMapOverride:(id)override;
// converted property getter: -(id)colorMapOverride;
-(id)themeOverrides;
// converted property setter: -(void)setShowMasterShapes:(BOOL)shapes;
// converted property getter: -(BOOL)showMasterShapes;
// converted property setter: -(void)setShowMasterPlaceholderAnimations:(BOOL)animations;
// converted property getter: -(BOOL)showMasterPlaceholderAnimations;
-(void)dealloc;
-(id)init;
@end

