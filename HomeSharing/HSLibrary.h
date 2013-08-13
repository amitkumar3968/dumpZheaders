/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class HSConnection, NSString, SSAccount;
@protocol NSObject;

@interface HSLibrary : XXUnknownSuperclass {
@private
	SSAccount* _account;
	HSConnection* _connection;
	id<NSObject> _context;
	NSString* _name;
	BOOL _requiresPassword;
	NSString* _uniqueIdentifier;
	unsigned _version;
}
@property(retain, nonatomic) id<NSObject> context;	// @synthesize=_context
@property(readonly, assign, nonatomic) HSConnection* connection;	// @synthesize=_connection
@property(readonly, assign, nonatomic) BOOL requiresPassword;	// @synthesize=_requiresPassword
@property(readonly, assign, nonatomic) unsigned version;	// @synthesize=_version
@property(readonly, assign, nonatomic) NSString* uniqueIdentifier;	// @synthesize=_uniqueIdentifier
@property(readonly, assign, nonatomic) NSString* name;	// @synthesize=_name
// declared property getter: -(unsigned)version;
// declared property getter: -(id)uniqueIdentifier;
// declared property getter: -(BOOL)requiresPassword;
// declared property getter: -(id)name;
// declared property setter: -(void)setContext:(id)context;
// declared property getter: -(id)context;
// declared property getter: -(id)connection;
-(void)dealloc;
-(id)initWithConnectionConfiguration:(id)connectionConfiguration;
-(id)initWithName:(id)name uniqueIdentifier:(id)identifier version:(unsigned)version baseURL:(id)url;
@end

