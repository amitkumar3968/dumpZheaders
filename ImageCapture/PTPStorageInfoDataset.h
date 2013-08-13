/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableData, NSString;

@interface PTPStorageInfoDataset : XXUnknownSuperclass {
	unsigned short _storageType;
	unsigned short _filesystemType;
	unsigned short _accessCapability;
	unsigned long long _maxCapacity;
	unsigned long long _freeSpaceInBytes;
	unsigned long _freeSpaceInImages;
	NSString* _storageDescription;
	NSString* _volumeLabel;
	NSMutableData* _content;
	BOOL _dirty;
	BOOL _readOnlyObject;
}
@property(retain) NSString* volumeLabel;	// converted property
@property(retain) NSString* storageDescription;	// converted property
@property(assign) unsigned long freeSpaceInImages;	// converted property
@property(assign) unsigned long long freeSpaceInBytes;	// converted property
@property(assign) unsigned long long maxCapacity;	// converted property
@property(assign) unsigned short accessCapability;	// converted property
@property(assign) unsigned short filesystemType;	// converted property
@property(assign) unsigned short storageType;	// converted property
@property(retain) NSMutableData* content;	// converted property
// converted property setter: -(void)setVolumeLabel:(id)label;
// converted property getter: -(id)volumeLabel;
// converted property setter: -(void)setStorageDescription:(id)description;
// converted property getter: -(id)storageDescription;
// converted property setter: -(void)setFreeSpaceInImages:(unsigned long)images;
// converted property getter: -(unsigned long)freeSpaceInImages;
// converted property setter: -(void)setFreeSpaceInBytes:(unsigned long long)bytes;
// converted property getter: -(unsigned long long)freeSpaceInBytes;
// converted property setter: -(void)setMaxCapacity:(unsigned long long)capacity;
// converted property getter: -(unsigned long long)maxCapacity;
// converted property setter: -(void)setAccessCapability:(unsigned short)capability;
// converted property getter: -(unsigned short)accessCapability;
// converted property setter: -(void)setFilesystemType:(unsigned short)type;
// converted property getter: -(unsigned short)filesystemType;
// converted property setter: -(void)setStorageType:(unsigned short)type;
// converted property getter: -(unsigned short)storageType;
-(id)description;
// converted property getter: -(id)content;
-(void)updateContent;
-(void)dealloc;
-(id)initWithMutableData:(id)mutableData;
-(id)initWithData:(id)data;
// converted property setter: -(void)setContent:(id)content;
-(id)init;
@end
