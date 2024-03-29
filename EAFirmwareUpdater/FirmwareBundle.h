/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/EAFirmwareUpdater.framework/EAFirmwareUpdater
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSData;

@interface FirmwareBundle : XXUnknownSuperclass {
	NSData* hash;
	NSData* firmwareImage;
	NSData* signature;
	NSData* certificate;
	unsigned productIDCode;
	unsigned firmwareImageBaseAddress;
	unsigned firmwareImageSize;
}
@property(readonly, assign) unsigned firmwareImageSize;	// @synthesize
@property(readonly, assign) unsigned firmwareImageBaseAddress;	// @synthesize
@property(readonly, assign) unsigned productIDCode;	// @synthesize
@property(readonly, assign) NSData* certificate;	// @synthesize
@property(readonly, assign) NSData* signature;	// @synthesize
@property(readonly, assign) NSData* firmwareImage;	// @synthesize
@property(readonly, assign) NSData* hash;	// @synthesize
+(id)parseResourceFileIntoData:(id)data;
// declared property getter: -(unsigned)firmwareImageSize;
// declared property getter: -(unsigned)firmwareImageBaseAddress;
// declared property getter: -(unsigned)productIDCode;
// declared property getter: -(id)signature;
// declared property getter: -(id)certificate;
// declared property getter: -(id)hash;
// declared property getter: -(id)firmwareImage;
-(void)dealloc;
-(id)parseFirmwareImageFileIntoData:(id)data;
-(id)initWithBundleName:(id)bundleName;
-(id)initWithBundlePath:(id)bundlePath;
-(id)initWithBundle:(id)bundle;
@end

