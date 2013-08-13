/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import "AppSupport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSCountedSet, NSMutableSet, NSString;
@protocol CPPowerAssertionManagerDelegate;

@interface CPPowerAssertionManager : XXUnknownSuperclass {
@private
	NSString* _uuid;
	NSCountedSet* _contexts;
	NSMutableDictionary* _groupIdentifierToContexts;
	CFDictionaryRef _contextToGroupIdentifier;
	NSMutableSet* _heldAsideGroupIdentifiers;
	NSCountedSet* _heldAsideContexts;
	id<CPPowerAssertionManagerDelegate> _delegate;
}
@property(assign) id<CPPowerAssertionManagerDelegate> delegate;	// @synthesize=_delegate
@property(readonly, assign) NSString* uuid;	// @synthesize=_uuid
+(id)sharedInstance;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property getter: -(id)delegate;
-(void)_releaseAssertions;
-(void)_retainAssertions;
-(void)reretainPowerAssertionsForGroupIdentifier:(id)groupIdentifier;
-(void)temporarilyReleasePowerAssertionsForGroupIdentifier:(id)groupIdentifier;
-(id)description;
-(void)releasePowerAssertionWithContext:(id)context;
-(void)retainPowerAssertionWithContext:(id)context withGroupIdentifier:(id)groupIdentifier;
-(void)retainPowerAssertionWithContext:(id)context;
-(void)setUUIDPrefix:(id)prefix;
-(void)dealloc;
-(id)init;
-(unsigned)retainCountForContext:(id)context;
// declared property getter: -(id)uuid;
@end

