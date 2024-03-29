/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface CNFServiceHandler : XXUnknownSuperclass {
}
+(BOOL)disconnect;
+(BOOL)isConnected;
+(BOOL)connect;
+(BOOL)connect:(BOOL)connect;
+(void)_daemonConnectedNotification:(id)notification;
+(void)_accountRegistrationStatusChanged:(id)changed;
+(BOOL)faceTimeIsAvailable;
+(void)setupServiceHandlerForControllerType:(int)controllerType;
+(void)updateConferenceCapabilitiesForControllerType:(int)controllerType;
+(void)setCapabilities:(unsigned long long)capabilities;
+(unsigned long long)capabilities;
+(int)activationState;
+(void)activateFaceTime;
+(BOOL)faceTimeIsSupported;
+(id)faceTimeSourceAccount;
+(BOOL)_isValidProcess;
@end

