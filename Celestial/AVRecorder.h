/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "Celestial-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface AVRecorder : XXUnknownSuperclass {
@private
	AVRecorderPrivate* _priv;
}
@property(assign) float micVolume;	// converted property
@property(retain) id filePath;	// converted property
-(void)makeError:(id*)error withDescription:(id)description code:(long)code;
-(BOOL)audioCurrentAverageDecibelLevels:(float*)levels andPeakDecibelLevels:(float*)levels2;
-(BOOL)audioCurrentAverageVolumeLevels:(float*)levels andPeakVolumeLevels:(float*)levels2;
-(unsigned)audioNumDeviceChannels;
-(double)recordedDuration;
-(long long)recordedFileSizeInBytes;
// converted property setter: -(void)setMicVolume:(float)volume;
// converted property getter: -(float)micVolume;
-(void)deactivate;
-(BOOL)autoFocusAtPoint:(CGPoint)point;
-(BOOL)takePhoto;
-(BOOL)isActive;
-(BOOL)isRecording;
-(void)stop;
-(BOOL)start;
-(BOOL)activate:(id*)activate;
-(void)implNotification:(id)notification;
-(id)attributeForKey:(id)key;
-(void)setAttribute:(id)attribute forKey:(id)key;
// converted property getter: -(id)filePath;
// converted property setter: -(void)setFilePath:(id)path;
-(void)dealloc;
-(id)init;
@end
