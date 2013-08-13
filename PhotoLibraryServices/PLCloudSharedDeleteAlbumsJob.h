/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import "PLCloudSharingJob.h"

@class NSArray;

@interface PLCloudSharedDeleteAlbumsJob : PLCloudSharingJob {
@private
	NSArray* _albumCloudGUIDsToDelete;
}
@property(retain, nonatomic) NSArray* albumCloudGUIDsToDelete;	// @synthesize=_albumCloudGUIDsToDelete
+(void)deleteLocalAlbumsForMSASAlbumGUIDs:(id)msasalbumGUIDs;
// declared property setter: -(void)setAlbumCloudGUIDsToDelete:(id)aDelete;
// declared property getter: -(id)albumCloudGUIDsToDelete;
-(void)runDaemonSide;
-(void)run;
-(int)daemonOperation;
-(void)dealloc;
-(id)description;
-(id)initFromXPCObject:(id)xpcobject;
-(void)encodeToXPCObject:(id)xpcobject;
@end
