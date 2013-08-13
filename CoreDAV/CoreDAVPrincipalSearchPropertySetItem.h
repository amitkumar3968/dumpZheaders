/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class NSMutableSet;

@interface CoreDAVPrincipalSearchPropertySetItem : CoreDAVItem {
	NSMutableSet* _principalSearchProperties;
}
@property(retain) NSMutableSet* principalSearchProperties;	// @synthesize=_principalSearchProperties
+(id)copyParseRules;
// declared property setter: -(void)setPrincipalSearchProperties:(id)properties;
// declared property getter: -(id)principalSearchProperties;
-(void)addPrincipalSearchProperty:(id)property;
-(id)description;
-(void)dealloc;
-(id)init;
@end

