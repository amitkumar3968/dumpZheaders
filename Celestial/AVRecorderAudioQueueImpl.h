/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "Celestial-Structs.h"
#import "AVRecorderImpl.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary;

@interface AVRecorderAudioQueueImpl : XXUnknownSuperclass <AVRecorderImpl> {
	BOOL _isActive;
	BOOL _isRecording;
	BOOL _isWriting;
	NSMutableDictionary* _attributes;
	unsigned long _fileType;
	unsigned long _audioCodec;
	long long _maxPCMFramesToRecord;
	BOOL _haveRecordedMaxPCMFrames;
	AudioStreamBasicDescription _recordingFormat;
	OpaqueAudioFileID* _audioFile;
	OpaqueAudioQueue* _audioQueue;
	unsigned long _numDeviceChannels;
	AudioQueueLevelMeterState* _audioLevels;
	AudioQueueLevelMeterState* _audioLevelsDB;
	unsigned long _totalBytesRecorded;
	unsigned long _totalPacketsRecorded;
	unsigned long _totalFramesRecorded;
	AudioQueueBuffer* _buffers[3];
	BOOL _bufferUsed[3];
}
@property(assign) float micVolume;	// converted property
@property(retain) id filePath;	// converted property
@property(readonly, assign) BOOL isActive;	// converted property
@property(readonly, assign) BOOL isRecording;	// converted property
-(void)haveABuffer:(AudioQueueBuffer*)buffer withTimeStamp:(const AudioTimeStamp*)timeStamp andNumPackets:(unsigned long)packets andPacketDescs:(const AudioStreamPacketDescription*)descs;
-(void)copyEncoderCookieToFile;
-(BOOL)audioCurrentAverageDecibelLevels:(float*)levels andPeakDecibelLevels:(float*)levels2;
-(BOOL)audioCurrentAverageVolumeLevels:(float*)levels andPeakVolumeLevels:(float*)levels2;
-(BOOL)audioCurrentAverageVolumeLevels:(float*)levels andPeakVolumeLevels:(float*)levels2 useDB:(BOOL)db;
-(unsigned)audioNumDeviceChannels;
-(double)recordedDuration;
-(long long)recordedFileSizeInBytes;
// converted property setter: -(void)setMicVolume:(float)volume;
// converted property getter: -(float)micVolume;
// converted property getter: -(BOOL)isRecording;
-(void)stop;
-(BOOL)start;
-(BOOL)autoFocusAtPoint:(CGPoint)point;
-(BOOL)takePhoto;
// converted property getter: -(BOOL)isActive;
-(void)deactivate;
-(BOOL)activate:(id*)activate;
-(id)attributeForKey:(id)key;
-(void)setAttribute:(id)attribute forKey:(id)key;
// converted property getter: -(id)filePath;
// converted property setter: -(void)setFilePath:(id)path;
-(void)dealloc;
-(id)initWithAttributes:(id)attributes;
-(id)init;
@end

