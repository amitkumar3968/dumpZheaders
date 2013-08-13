/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "PhotoLibrary-Structs.h"
#import "PLPlayingExternallyBackgroundView.h"

@class NSString;

@interface PLAirPlayBackgroundView : PLPlayingExternallyBackgroundView {
	NSString* _deviceName;
}
@property(retain, nonatomic) NSString* deviceName;	// @synthesize=_deviceName
// declared property setter: -(void)setDeviceName:(id)name;
// declared property getter: -(id)deviceName;
-(void)setIsMovie:(BOOL)movie;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame deviceName:(id)name;
@end
