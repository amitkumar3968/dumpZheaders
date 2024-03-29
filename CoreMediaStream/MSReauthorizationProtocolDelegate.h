/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "MSStreamsProtocolDelegate.h"


@protocol MSReauthorizationProtocolDelegate <MSStreamsProtocolDelegate>
-(void)reauthorizationProtocol:(id)protocol didReceiveAuthenticationError:(id)error;
-(void)reauthorizationProtocol:(id)protocol reauthorizedAssets:(id)assets rejectedAssets:(id)assets3 error:(id)error;
@end

