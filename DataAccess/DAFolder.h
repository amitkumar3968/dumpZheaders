/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface DAFolder : XXUnknownSuperclass {
	NSString* _folderName;
	NSString* _folderID;
	NSString* _parentFolderID;
	int _dataclass;
	BOOL _isDefault;
	BOOL _hasRemoteChanges;
}
@property(assign) BOOL hasRemoteChanges;	// @synthesize=_hasRemoteChanges
@property(assign) BOOL isDefault;	// @synthesize=_isDefault
@property(assign) int dataclass;	// @synthesize=_dataclass
@property(copy) NSString* parentFolderID;	// @synthesize=_parentFolderID
@property(copy) NSString* folderID;	// @synthesize=_folderID
@property(copy) NSString* folderName;	// @synthesize=_folderName
// declared property setter: -(void)setHasRemoteChanges:(BOOL)changes;
// declared property getter: -(BOOL)hasRemoteChanges;
// declared property setter: -(void)setIsDefault:(BOOL)aDefault;
// declared property getter: -(BOOL)isDefault;
// declared property setter: -(void)setDataclass:(int)dataclass;
// declared property getter: -(int)dataclass;
// declared property setter: -(void)setParentFolderID:(id)anId;
// declared property getter: -(id)parentFolderID;
// declared property setter: -(void)setFolderID:(id)anId;
// declared property getter: -(id)folderID;
// declared property setter: -(void)setFolderName:(id)name;
// declared property getter: -(id)folderName;
-(BOOL)isEqual:(id)equal;
-(unsigned)hash;
-(id)description;
-(void)dealloc;
-(id)parentMailboxID;
-(id)mailboxID;
@end
