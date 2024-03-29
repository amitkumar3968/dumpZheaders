/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMDAppleServices.framework/IMDAppleServices
 */

#import <IMDaemonCore/IMDAccountController.h>

@class NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface IMDAppleIDNotification : IMDAccountController {
	NSString* _appleID;
	NSString* _deviceName;
	NSMutableSet* _aliases;
	NSMutableSet* _sessions;
	NSMutableSet* _serviceTypes;
}
@property(retain, nonatomic) NSMutableSet* serviceTypes;	// @synthesize=_serviceTypes
@property(retain, nonatomic) NSMutableSet* sessions;	// @synthesize=_sessions
@property(retain, nonatomic) NSMutableSet* aliases;	// @synthesize=_aliases
@property(retain, nonatomic) NSString* deviceName;	// @synthesize=_deviceName
@property(retain, nonatomic) NSString* appleID;	// @synthesize=_appleID
// declared property setter: -(void)setServiceTypes:(id)types;
// declared property getter: -(id)serviceTypes;
// declared property setter: -(void)setSessions:(id)sessions;
// declared property getter: -(id)sessions;
// declared property setter: -(void)setDeviceName:(id)name;
// declared property getter: -(id)deviceName;
// declared property setter: -(void)setAliases:(id)aliases;
// declared property getter: -(id)aliases;
// declared property setter: -(void)setAppleID:(id)anId;
// declared property getter: -(id)appleID;
-(void)addSession:(id)session;
-(void)addServiceType:(int)type;
-(void)addAlias:(id)alias;
-(void)dealloc;
-(id)init;
@end

