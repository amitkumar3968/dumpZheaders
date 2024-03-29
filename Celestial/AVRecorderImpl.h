/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "Celestial-Structs.h"
#import "NSObject.h"


@protocol AVRecorderImpl <NSObject>
@property(assign) float micVolume;	// converted property
@property(retain) id filePath;	// converted property
-(double)recordedDuration;
-(long long)recordedFileSizeInBytes;
-(BOOL)audioCurrentAverageDecibelLevels:(float*)levels andPeakDecibelLevels:(float*)levels2;
-(BOOL)audioCurrentAverageVolumeLevels:(float*)levels andPeakVolumeLevels:(float*)levels2;
-(unsigned)audioNumDeviceChannels;
// converted property setter: -(void)setMicVolume:(float)volume;
// converted property getter: -(float)micVolume;
-(BOOL)autoFocusAtPoint:(CGPoint)point;
-(BOOL)takePhoto;
-(BOOL)isRecording;
-(void)stop;
-(BOOL)start;
-(BOOL)isActive;
-(void)deactivate;
-(BOOL)activate:(id*)activate;
-(id)attributeForKey:(id)key;
-(void)setAttribute:(id)attribute forKey:(id)key;
// converted property getter: -(id)filePath;
// converted property setter: -(void)setFilePath:(id)path;
-(id)init;
@end

