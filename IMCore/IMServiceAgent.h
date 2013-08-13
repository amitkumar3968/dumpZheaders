/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSDictionary;

@interface IMServiceAgent : XXUnknownSuperclass {
	NSDictionary* _currentAVChatInfo;
}
@property(readonly, assign, nonatomic) unsigned requestAudioReflectorStop;
@property(readonly, assign, nonatomic) unsigned requestAudioReflectorStart;
@property(readonly, assign, nonatomic) NSDictionary* currentAVChatInfo;
@property(readonly, assign, nonatomic) unsigned long long vcCapabilities;
@property(retain, nonatomic) NSArray* myAwayMessages;
@property(retain, nonatomic) NSArray* myAvailableMessages;
+(id)notificationCenter;
+(void)forgetStatusImageAppearance;
+(id)imageNameForStatus:(unsigned)status;
+(id)imageURLForStatus:(unsigned)status;
+(id)sharedAgent;
+(int)serviceAgentCapabilities;
+(void)setServiceAgentCapabilities:(int)capabilities;
-(void)dealloc;
-(id)myPictureData;
-(void)launchIfNecessary;
// declared property getter: -(unsigned long long)vcCapabilities;
-(unsigned)requestVideoStillForPerson:(id)person;
// declared property getter: -(unsigned)requestAudioReflectorStop;
// declared property getter: -(unsigned)requestAudioReflectorStart;
// declared property getter: -(id)currentAVChatInfo;
// declared property setter: -(void)setMyAwayMessages:(id)messages;
// declared property setter: -(void)setMyAvailableMessages:(id)messages;
// declared property getter: -(id)myAwayMessages;
// declared property getter: -(id)myAvailableMessages;
-(void)setMyStatus:(unsigned)status message:(id)message;
-(id)notificationCenter;
-(id)serviceWithNameNonBlocking:(id)nameNonBlocking;
-(id)serviceWithName:(id)name;
@end
