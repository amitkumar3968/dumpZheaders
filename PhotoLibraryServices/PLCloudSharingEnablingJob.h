/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import "PLCloudSharingJob.h"


@interface PLCloudSharingEnablingJob : PLCloudSharingJob {
@private
	BOOL _enableSharing;
}
@property(assign, nonatomic) BOOL enableSharing;	// @synthesize=_enableSharing
+(void)deleteAllLocalSharedAlbumsInLibrary:(id)library;
+(void)enableCloudSharing:(BOOL)sharing;
// declared property setter: -(void)setEnableSharing:(BOOL)sharing;
// declared property getter: -(BOOL)enableSharing;
-(void)runDaemonSide;
-(BOOL)shouldArchiveXPCToDisk;
-(void)run;
-(int)daemonOperation;
-(id)description;
-(id)initFromXPCObject:(id)xpcobject;
-(void)encodeToXPCObject:(id)xpcobject;
@end

