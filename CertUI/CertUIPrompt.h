/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CertUI.framework/CertUI
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "CertUI-Structs.h"

@class NSString;

@interface CertUIPrompt : XXUnknownSuperclass {
	SecTrust* _trust;
	NSString* _host;
	NSString* _service;
	NSString* _connectionDisplayName;
	id _responseBlock;
}
@property(copy, nonatomic) NSString* connectionDisplayName;	// @synthesize=_connectionDisplayName
@property(retain, nonatomic) NSString* service;	// @synthesize=_service
@property(retain, nonatomic) NSString* host;	// @synthesize=_host
@property(assign) SecTrust* trust;	// converted property
+(id)promptQueue;
+(id)stringForResponse:(int)response;
// declared property setter: -(void)setConnectionDisplayName:(id)name;
// declared property setter: -(void)setService:(id)service;
// declared property getter: -(id)service;
// declared property setter: -(void)setHost:(id)host;
// declared property getter: -(id)host;
-(int)showAndWaitForResponse;
-(void)_informConsumerOfResponse:(int)response;
-(void)showPromptWithResponseBlock:(id)responseBlock;
-(int)_sendRemoteMessage;
-(int)_responseFromReplyDict:(id)replyDict;
-(id)_messagingCenter;
-(id)_newUserInfoForDisplayName:(id)displayName hostname:(id)hostname trust:(SecTrust*)trust;
-(id)_digestFromTrust:(SecTrust*)trust;
-(id)_expirationFromTrust:(SecTrust*)trust;
-(id)_purposeFromTrustProperties:(id)trustProperties;
-(id)_propertyNamed:(id)named ofType:(id)type inProperties:(id)properties;
-(id)_subtitleFromTrust:(SecTrust*)trust;
-(id)_titleFromTrust:(SecTrust*)trust;
-(id)_sendablePropertiesFromTrust:(SecTrust*)trust;
-(id)_copyPropertiesFromTrust:(SecTrust*)trust;
-(id)_sendablePropertiesFromProperties:(id)properties;
-(id)_sendablePropertyFromProperty:(id)property;
// declared property getter: -(id)connectionDisplayName;
// converted property getter: -(SecTrust*)trust;
// converted property setter: -(void)setTrust:(SecTrust*)trust;
-(id)description;
-(void)dealloc;
@end

