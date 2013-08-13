/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

#import "IMExtendedOperation.h"

@class NSData, NSString, IMHandle;

__attribute__((visibility("hidden")))
@interface AVChatUpdateOp : IMExtendedOperation {
	IMHandle* _imHandle;
	NSString* _conferenceID;
	NSData* _updateData;
}
-(void)didFinish;
-(void)dealloc;
-(id)initWithIMHandle:(id)imhandle data:(id)data avChat:(id)chat;
@end
