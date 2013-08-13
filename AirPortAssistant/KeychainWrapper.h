/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSLock;

__attribute__((visibility("hidden")))
@interface KeychainWrapper : XXUnknownSuperclass {
	NSString* _accountName;
	NSString* _serviceName;
	NSLock* _lock;
}
@property(retain) NSLock* lock;	// @synthesize=_lock
@property(copy) NSString* serviceName;	// @synthesize=_serviceName
@property(copy) NSString* accountName;	// @synthesize=_accountName
+(void)removeKeychainPasswordForMACAddress:(id)macaddress;
+(id)keychainPasswordForMACAddress:(id)macaddress;
+(id)keychainWrapperWithMACAddress:(id)macaddress;
// declared property setter: -(void)setLock:(id)lock;
// declared property getter: -(id)lock;
// declared property setter: -(void)setServiceName:(id)name;
// declared property getter: -(id)serviceName;
// declared property setter: -(void)setAccountName:(id)name;
// declared property getter: -(id)accountName;
-(void)removeGenericPassword;
-(long)addGenericPassword:(id)password withLabel:(id)label andDescription:(id)description;
-(id)genericPassword;
-(id)getGenericPassword;
-(id)getPasswordFromQuery:(id)query;
-(id)genericPasswordQuery;
-(void)dealloc;
-(id)initWithAccountName:(id)accountName serviceName:(id)name;
@end

