/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class CoreDAVItemWithNoChildren;

@interface CalDAVCalendarServerNotificationTypeItem : XXUnknownSuperclass {
	CoreDAVItemWithNoChildren* _inviteNotification;
	CoreDAVItemWithNoChildren* _inviteReply;
	CoreDAVItemWithNoChildren* _resourceChanged;
}
@property(readonly, assign) BOOL isResourceChanged;
@property(readonly, assign) BOOL isInviteNotification;
@property(readonly, assign) BOOL isInviteReply;
@property(retain) CoreDAVItemWithNoChildren* resourceChanged;	// @synthesize=_resourceChanged
@property(retain) CoreDAVItemWithNoChildren* inviteReply;	// @synthesize=_inviteReply
@property(retain) CoreDAVItemWithNoChildren* inviteNotification;	// @synthesize=_inviteNotification
// declared property setter: -(void)setResourceChanged:(id)changed;
// declared property getter: -(id)resourceChanged;
// declared property setter: -(void)setInviteReply:(id)reply;
// declared property getter: -(id)inviteReply;
// declared property setter: -(void)setInviteNotification:(id)notification;
// declared property getter: -(id)inviteNotification;
-(BOOL)notificationNameIn:(id)anIn;
-(BOOL)notificationNameMatches:(id)matches;
// declared property getter: -(BOOL)isResourceChanged;
// declared property getter: -(BOOL)isInviteReply;
// declared property getter: -(BOOL)isInviteNotification;
-(id)description;
-(id)copyParseRules;
-(void)dealloc;
@end
