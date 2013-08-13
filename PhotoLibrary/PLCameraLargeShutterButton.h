/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "PhotoLibrary-Structs.h"
#import "PLCameraButton.h"

@class NSAttributedString, UIImage;

@interface PLCameraLargeShutterButton : PLCameraButton {
	UIImage* _photoBackground;
	UIImage* _photoBackgroundPressed;
	UIImage* _videoBackground;
	UIImage* _videoBackgroundPressed;
	UIImage* _panoOffBackground;
	UIImage* _panoOffBackgroundPressed;
	UIImage* _panoOnBackground;
	UIImage* _panoOnBackgroundPressed;
@private
	NSAttributedString* _panoDoneString;
}
+(UIEdgeInsets)hitRectExtension;
+(UIEdgeInsets)backgroundResizableEdgeInsets;
+(CGRect)defaultFrame;
+(id)videoOnIconName;
+(id)videoOffIconName;
+(id)photoIconLandscapeName;
+(id)photoIconPortraitName;
+(id)backgroundPanoOnPressedImageName;
+(id)backgroundPanoOnImageName;
+(id)backgroundPanoOnBlankPressedImageName;
+(id)backgroundPanoOnBlankImageName;
+(id)backgroundPanoOffPressedImageName;
+(id)backgroundPanoOffImageName;
+(id)backgroundVideoPressedImageName;
+(id)backgroundVideoImageName;
+(id)backgroundPressedImageName;
+(id)backgroundImageName;
+(id)defaultIconName;
-(CGRect)titleRectForContentRect:(CGRect)contentRect;
-(void)setIsCapturing:(BOOL)capturing;
-(void)setButtonMode:(int)mode;
-(void)_loadPanoResources;
-(void)_loadVideoResources;
-(void)_setIcon:(id)icon;
-(void)dealloc;
-(id)initWithDefaultSize;
@end
