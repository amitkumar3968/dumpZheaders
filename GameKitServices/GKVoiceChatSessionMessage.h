/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

#import "GKOOBMessage.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface GKVoiceChatSessionMessage : GKOOBMessage {
@private
	NSData* _data;
	unsigned _conferenceID;
	unsigned _subtype;
}
@property(readonly, retain) NSData* data;	// converted property
@property(readonly, assign) unsigned conferenceID;	// converted property
@property(readonly, assign) unsigned subtype;	// converted property
// converted property getter: -(unsigned)conferenceID;
-(BOOL)_checkSize:(unsigned long)size;
-(BOOL)_checkType:(unsigned short)type;
// converted property getter: -(unsigned)subtype;
-(id)payload;
// converted property getter: -(id)data;
-(void)dealloc;
-(id)initWithPayload:(id)payload conferenceID:(unsigned)anId subtype:(unsigned)subtype;
-(id)initWithBytes:(const void*)bytes length:(unsigned long)length;
-(id)init;
@end

