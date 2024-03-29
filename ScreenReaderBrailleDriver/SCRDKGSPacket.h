/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderBrailleDriver.framework/ScreenReaderBrailleDriver
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSData;

__attribute__((visibility("hidden")))
@interface SCRDKGSPacket : XXUnknownSuperclass {
@private
	unsigned char _command;
	unsigned char _subCommand;
	NSData* _data;
}
@property(retain, nonatomic) NSData* data;	// @synthesize=_data
@property(assign, nonatomic) unsigned char subCommand;	// @synthesize=_subCommand
@property(assign, nonatomic) unsigned char command;	// @synthesize=_command
// declared property setter: -(void)setData:(id)data;
// declared property getter: -(id)data;
// declared property setter: -(void)setSubCommand:(unsigned char)command;
// declared property getter: -(unsigned char)subCommand;
// declared property setter: -(void)setCommand:(unsigned char)command;
// declared property getter: -(unsigned char)command;
-(void)dealloc;
@end

