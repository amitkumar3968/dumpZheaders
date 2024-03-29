/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSString;

@interface MFOfflineCacheReplayContext : XXUnknownSuperclass {
	NSString* _selectedMailboxID;
	NSMutableDictionary* _translatedIDsByTemporaryID;
	NSMutableDictionary* _failureSnapshotsByTemporaryID;
}
@property(readonly, assign, nonatomic) NSMutableDictionary* failureSnapshotsByTemporaryID;	// @synthesize=_failureSnapshotsByTemporaryID
@property(readonly, assign, nonatomic) NSMutableDictionary* translatedIDsByTemporaryID;	// @synthesize=_translatedIDsByTemporaryID
@property(copy, nonatomic) NSString* selectedMailboxID;	// @synthesize=_selectedMailboxID
// declared property getter: -(id)failureSnapshotsByTemporaryID;
// declared property getter: -(id)translatedIDsByTemporaryID;
// declared property setter: -(void)setSelectedMailboxID:(id)anId;
// declared property getter: -(id)selectedMailboxID;
-(void)dealloc;
-(id)init;
@end

