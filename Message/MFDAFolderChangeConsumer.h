/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "DAFolderChangeConsumer.h"

@class MFConditionLock, MFDAFolderChangeResult;

@interface MFDAFolderChangeConsumer : XXUnknownSuperclass <DAFolderChangeConsumer> {
	MFConditionLock* _conditionLock;
	MFDAFolderChangeResult* _result;
}
-(id)waitForResult;
-(void)folderChange:(id)change finishedWithStatus:(int)status error:(id)error;
-(void)dealloc;
-(id)init;
@end
