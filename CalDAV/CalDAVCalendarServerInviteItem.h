/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableSet;

@interface CalDAVCalendarServerInviteItem : XXUnknownSuperclass {
	NSMutableSet* _users;
}
@property(retain) NSMutableSet* users;	// @synthesize=_users
// declared property setter: -(void)setUsers:(id)users;
// declared property getter: -(id)users;
-(void)addUser:(id)user;
-(id)copyParseRules;
-(id)description;
-(void)dealloc;
-(id)initWithNameSpace:(id)nameSpace andName:(id)name;
-(id)init;
@end

