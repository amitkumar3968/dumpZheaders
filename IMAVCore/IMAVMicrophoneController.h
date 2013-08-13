/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSArray, NSObject, IMAVMicrophone;
@protocol OS_dispatch_queue;

@interface IMAVMicrophoneController : XXUnknownSuperclass {
	id _internal;
	NSMutableArray* _microphones;
	NSObject<OS_dispatch_queue>* _queue;
}
@property(retain, nonatomic) IMAVMicrophone* currentMicrophone;
@property(readonly, assign, nonatomic) NSArray* microphones;
+(id)sharedInstance;
// declared property getter: -(id)currentMicrophone;
// declared property setter: -(void)setCurrentMicrophone:(id)microphone;
-(void)_loadSavedMicrophone;
-(void)_rebuildMicrophoneList;
-(void)dealloc;
// declared property getter: -(id)microphones;
-(id)init;
@end

