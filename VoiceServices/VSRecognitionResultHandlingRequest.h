/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class VSRecognitionAction, NSArray;
@protocol VSRecognitionResultHandler;

@interface VSRecognitionResultHandlingRequest : XXUnknownSuperclass {
	id<VSRecognitionResultHandler> _handler;
	NSArray* _results;
	VSRecognitionAction* _action;
}
@property(retain) id nextAction;	// converted property
@property(readonly, retain) NSArray* results;	// converted property
// converted property getter: -(id)nextAction;
// converted property setter: -(void)setNextAction:(id)action;
-(id)handler;
// converted property getter: -(id)results;
-(void)dealloc;
-(id)initWithHandler:(id)handler results:(id)results;
@end

