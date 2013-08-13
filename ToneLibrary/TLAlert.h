/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSObject, NSDictionary;
@protocol OS_dispatch_queue;

@interface TLAlert : XXUnknownSuperclass {
@private
	int _type;
	unsigned long _soundID;
	NSDictionary* _vibrationPattern;
	NSObject<OS_dispatch_queue>* _targetQueue;
	id _completionHandler;
}
@property(copy, nonatomic) NSDictionary* vibrationPattern;	// @synthesize=_vibrationPattern
@property(assign, nonatomic) unsigned long soundID;	// @synthesize=_soundID
@property(assign, nonatomic) int type;	// @synthesize=_type
@property(retain, nonatomic) NSObject<OS_dispatch_queue>* targetQueue;	// @synthesize=_targetQueue
@property(copy, nonatomic) id completionHandler;	// @synthesize=_completionHandler
@property(readonly, assign, nonatomic, getter=isPlaying) BOOL playing;
+(void)playToneAndVibrationForType:(int)type toneIdentifier:(id)identifier vibrationIdentifier:(id)identifier3;
+(void)playToneAndVibrationForType:(int)type accountIdentifier:(id)identifier;
+(void)playToneAndVibrationForType:(int)type;
// declared property setter: -(void)setCompletionHandler:(id)handler;
// declared property getter: -(id)completionHandler;
// declared property setter: -(void)setTargetQueue:(id)queue;
// declared property getter: -(id)targetQueue;
// declared property setter: -(void)setVibrationPattern:(id)pattern;
// declared property getter: -(id)vibrationPattern;
// declared property setter: -(void)setSoundID:(unsigned long)anId;
// declared property getter: -(unsigned long)soundID;
// declared property setter: -(void)setType:(int)type;
// declared property getter: -(int)type;
-(void)stop;
-(BOOL)playWithCompletionHandler:(id)completionHandler targetQueue:(id)queue;
// declared property getter: -(BOOL)isPlaying;
-(unsigned long)soundBehavior;
-(void)dealloc;
-(id)initWithType:(int)type toneIdentifier:(id)identifier vibrationIdentifier:(id)identifier3;
-(id)initWithType:(int)type accountIdentifier:(id)identifier;
-(id)initWithType:(int)type;
@end
