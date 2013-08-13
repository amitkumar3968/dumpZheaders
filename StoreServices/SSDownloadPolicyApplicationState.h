/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "StoreServices-Structs.h"
#import "SSXPCCoding.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class NSSet, NSString;

@interface SSDownloadPolicyApplicationState : XXUnknownSuperclass <NSCoding, SSXPCCoding, NSCopying> {
@private
	NSString* _applicationIdentifier;
	NSSet* _applicationStates;
}
@property(copy, nonatomic) NSSet* applicationStates;	// @synthesize=_applicationStates
@property(copy, nonatomic) NSString* applicationIdentifier;	// @synthesize=_applicationIdentifier
// declared property setter: -(void)setApplicationStates:(id)states;
// declared property getter: -(id)applicationStates;
// declared property setter: -(void)setApplicationIdentifier:(id)identifier;
// declared property getter: -(id)applicationIdentifier;
-(id)initWithXPCEncoding:(id)xpcencoding;
-(id)copyXPCEncoding;
-(id)copyWithZone:(NSZone*)zone;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(BOOL)isEqual:(id)equal;
-(unsigned)hash;
-(void)setNotRunningApplicationStates;
-(void)addApplicationState:(int)state;
-(void)dealloc;
-(id)initWithApplicationIdentifier:(id)applicationIdentifier;
@end
