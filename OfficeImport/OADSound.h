/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OCDDelayedMedia.h"

@class NSString, NSData;

__attribute__((visibility("hidden")))
@interface OADSound : OCDDelayedMedia {
@private
	NSData* mSoundData;
	NSString* mName;
	long mSizeInBytes;
}
@property(assign) long sizeInBytes;	// converted property
@property(retain) id name;	// converted property
@property(retain) id soundData;	// converted property
-(bool)isLoaded;
// converted property setter: -(void)setSizeInBytes:(long)bytes;
// converted property getter: -(long)sizeInBytes;
// converted property setter: -(void)setName:(id)name;
// converted property getter: -(id)name;
// converted property setter: -(void)setSoundData:(id)data;
// converted property getter: -(id)soundData;
-(void)dealloc;
-(id)init;
@end

