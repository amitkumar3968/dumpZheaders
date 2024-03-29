/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary;

@interface IMChatHistoryController : XXUnknownSuperclass {
	NSMutableDictionary* _runningQueries;
}
@property(retain) NSMutableDictionary* _runningQueries;	// @synthesize
+(id)sharedInstance;
// declared property setter: -(void)set_runningQueries:(id)queries;
// declared property getter: -(id)_runningQueries;
-(void)databaseNoLongerFull;
-(void)databaseFull;
-(void)messageQuery:(id)query finishedWithResult:(id)result chatGUIDs:(id)guids;
-(void)loadMessageWithGUID:(id)guid completionBlock:(id)block;
-(void)dealloc;
-(id)init;
@end

