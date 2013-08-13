/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/EAFirmwareUpdater.framework/EAFirmwareUpdater
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableData, FirmwareBundle;
@protocol iAUPServerDelegate;

@interface iAUPServer : XXUnknownSuperclass {
	int _parserState;
	BOOL _escapeInProgress;
	unsigned _telegramLength;
	unsigned char _telegramChecksum;
	NSMutableData* _telegramDataIn;
	unsigned short objectBlockTransferSizes[4];
	unsigned _firmwareImageBaseTransferAddress;
	FirmwareBundle* firmwareBundle;
	id<iAUPServerDelegate> _delegate;
}
@property(retain, nonatomic) FirmwareBundle* firmwareBundle;	// @synthesize
+(id)sharedServer;
// declared property getter: -(id)firmwareBundle;
-(void)setDelegate:(id)delegate;
-(void)sendCommand:(unsigned char)command payload:(char*)payload payload_length:(unsigned short)length;
-(unsigned char)appendByteWithEscaping:(unsigned char)escaping toObject:(id*)object;
-(void)processInTelegram;
-(void)processInByte:(unsigned char)byte;
-(void)logCommand:(unsigned char)command payload:(char*)payload length:(unsigned)length;
-(void)appendToLog:(id)log;
-(void)resetParser;
-(unsigned)supportedTargetProductIDCode;
// declared property setter: -(void)setFirmwareBundle:(id)bundle;
-(void)dealloc;
-(id)init;
@end

