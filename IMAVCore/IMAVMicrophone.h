/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface IMAVMicrophone : XXUnknownSuperclass {
	id _internalDevice;
}
@property(readonly, assign, nonatomic) NSString* uniqueID;
@property(readonly, assign, nonatomic) NSString* name;
-(id)description;
// declared property getter: -(id)uniqueID;
-(id)_AVAudioDevice;
// declared property getter: -(id)name;
-(void)dealloc;
-(id)init;
-(id)_initWithAVAudioDevice:(id)avaudioDevice;
@end
