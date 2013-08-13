/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

#import "NSObject.h"


@protocol AVCaptureFileOutputPauseResumeDelegate <NSObject>
@optional
-(void)captureOutput:(id)output didResumeRecordingToOutputFileAtURL:(id)url fromConnections:(id)connections;
-(void)captureOutput:(id)output didPauseRecordingToOutputFileAtURL:(id)url fromConnections:(id)connections;
@end

