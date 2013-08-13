/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableSet;

@interface CalDAVScheduleResponseItem : XXUnknownSuperclass {
	NSMutableSet* _responses;
	NSMutableSet* _successfulICS;
	NSMutableSet* _failedResponseItems;
}
@property(retain) NSMutableSet* failedResponseItems;	// @synthesize=_failedResponseItems
@property(retain) NSMutableSet* successfulICS;	// @synthesize=_successfulICS
@property(retain) NSMutableSet* responses;	// @synthesize=_responses
// declared property setter: -(void)setFailedResponseItems:(id)items;
// declared property getter: -(id)failedResponseItems;
// declared property setter: -(void)setSuccessfulICS:(id)ics;
// declared property getter: -(id)successfulICS;
// declared property setter: -(void)setResponses:(id)responses;
// declared property getter: -(id)responses;
-(id)description;
-(void)addNewTopLevelItem:(id)item;
-(id)copyParseRules;
-(id)initWithNameSpace:(id)nameSpace andName:(id)name;
-(void)dealloc;
@end

