/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSSet;

@interface CalDAVPrincipalSearchPropertySet : XXUnknownSuperclass {
	NSSet* _properties;
}
@property(readonly, assign) BOOL supportsPropertySearch;
@property(readonly, assign) NSSet* stringProperties;	// @synthesize=_properties
+(id)searchSetWithProperties:(id)properties;
// declared property getter: -(id)stringProperties;
-(BOOL)isEqualToPropertySet:(id)propertySet;
// declared property getter: -(BOOL)supportsPropertySearch;
-(BOOL)supportsWellKnownType:(int)type;
-(BOOL)supportsPropertyTypeWithNameSpace:(id)nameSpace andName:(id)name;
-(id)initWithStringProperties:(id)stringProperties;
-(id)initWithSearchProperties:(id)searchProperties;
-(void)dealloc;
@end

