/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class BKSApplicationProcessInfo;

@interface BKSWorkspaceApplicationInfo : XXUnknownSuperclass {
@private
	BKSApplicationProcessInfo* _info;
	BOOL _recordingAudio;
	BOOL _externalAccessory;
}
@property(assign, nonatomic) BOOL usingExternalAccessory;	// @synthesize=_externalAccessory
@property(assign, nonatomic) BOOL recordingAudio;	// @synthesize=_recordingAudio
@property(retain, nonatomic) BKSApplicationProcessInfo* info;	// @synthesize=_info
// declared property setter: -(void)setUsingExternalAccessory:(BOOL)accessory;
// declared property getter: -(BOOL)usingExternalAccessory;
// declared property setter: -(void)setRecordingAudio:(BOOL)audio;
// declared property getter: -(BOOL)recordingAudio;
// declared property setter: -(void)setInfo:(id)info;
// declared property getter: -(id)info;
-(id)description;
-(void)dealloc;
@end
