/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSSet, NSMutableSet;

@interface CalDAVSupportedCalendarComponentSet : XXUnknownSuperclass {
	NSMutableSet* _comps;
}
@property(readonly, assign) NSSet* compNames;
@property(retain) NSMutableSet* comps;	// @synthesize=_comps
// declared property setter: -(void)setComps:(id)comps;
// declared property getter: -(id)comps;
// declared property getter: -(id)compNames;
-(id)childrenToWrite;
-(void)addComp:(id)comp;
-(id)description;
-(id)componentsAsString;
-(void)dealloc;
-(id)init;
-(id)copyParseRules;
@end
