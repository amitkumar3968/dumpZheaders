/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "NSMutableCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "StoreServices-Structs.h"
#import "SSXPCCoding.h"
#import "NSCopying.h"

@class NSArray, NSString;

@interface SSSoftwareUpdatesContext : XXUnknownSuperclass <SSXPCCoding, NSCopying, NSMutableCopying> {
@private
	NSString* _clientIdentifierHeader;
	BOOL _forced;
	NSArray* _softwareTypes;
}
@property(readonly, assign, nonatomic) NSString* clientIdentifierHeader;	// @synthesize=_clientIdentifierHeader
@property(readonly, assign, nonatomic) NSArray* softwareTypes;	// @synthesize=_softwareTypes
@property(readonly, assign, nonatomic, getter=isForced) BOOL forced;	// @synthesize=_forced
// declared property getter: -(BOOL)isForced;
// declared property getter: -(id)clientIdentifierHeader;
-(id)mutableCopyWithZone:(NSZone*)zone;
-(id)copyWithZone:(NSZone*)zone;
-(id)initWithXPCEncoding:(id)xpcencoding;
-(id)copyXPCEncoding;
// declared property getter: -(id)softwareTypes;
-(void)dealloc;
@end

