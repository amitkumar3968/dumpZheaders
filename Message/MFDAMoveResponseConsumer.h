/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import "DAMessageMoveRequestConsumer.h"
#import "MFDAMailAccountConsumer.h"

@class MFError, NSMutableDictionary, NSSet, NSMutableSet;

@interface MFDAMoveResponseConsumer : MFDAMailAccountConsumer <DAMessageMoveRequestConsumer> {
	NSSet* _messagesIDs;
	NSMutableDictionary* _newRemoteIDsByMessageID;
	NSMutableSet* _failures;
	MFError* _error;
}
@property(retain, nonatomic) MFError* error;	// @synthesize=_error
// declared property setter: -(void)setError:(id)error;
// declared property getter: -(id)error;
-(void)resultsForMessageMove:(id)messageMove;
-(void)taskFailed:(id)failed statusCode:(int)code error:(id)error;
-(void)dealloc;
-(id)initWithMessageIDs:(id)messageIDs newRemoteIDsByMessageID:(id)anId failures:(id)failures;
@end

