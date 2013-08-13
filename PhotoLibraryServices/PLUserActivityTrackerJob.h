/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import "PhotoLibraryServices-Structs.h"
#import "PLDaemonJob.h"

@class NSArray, NSString;

@interface PLUserActivityTrackerJob : PLDaemonJob {
@private
	long long _activity;
	NSArray* _uuids;
	NSString* _clientID;
}
@property(retain, nonatomic) NSString* clientID;	// @synthesize=_clientID
@property(retain, nonatomic) NSArray* uuids;	// @synthesize=_uuids
@property(assign, nonatomic) long long activity;	// @synthesize=_activity
+(id)persistentStoreCoordinator;
+(id)managedObjectModel;
+(id)managedObjectContext;
+(void)_noteActivity:(long long)activity uuid:(id)uuid;
+(void)_noteActivity:(long long)activity uuids:(id)uuids;
+(id)_queue;
+(void)trackAlbumUUIDWasDeleted:(id)deleted;
+(void)trackAssetUUIDsWereDeleted:(id)deleted;
+(void)trackAssetsWereSharedViaSharedPhotoStream:(id)stream;
+(void)trackAssetsWereSharedViaAssignToContact:(id)contact;
+(void)trackAssetsWereSharedViaCopyToPasteboard:(id)pasteboard;
+(void)trackAssetsWereSharedViaPrint:(id)print;
+(void)trackAssetsWereSharedViaMail:(id)mail;
+(void)trackAssetsWereSharedViaMessage:(id)message;
+(void)trackAssetsWereSharedViaTudou:(id)tudou;
+(void)trackAssetsWereSharedViaYouku:(id)youku;
+(void)trackAssetsWereSharedViaYouTube:(id)tube;
+(void)trackAssetsWereSharedViaWeibo:(id)weibo;
+(void)trackAssetsWereSharedViaTwitter:(id)twitter;
+(void)trackAssetsWereSharedViaFacebook:(id)facebook;
+(void)trackPhotoWasEditedWithStraighten:(id)straighten;
+(void)trackPhotoWasEditedWithCrop:(id)crop;
+(void)trackPhotoWasEditedWithRedEye:(id)redEye;
+(void)trackPhotoWasEditedWithAutoEnhance:(id)autoEnhance;
+(void)trackPhotoWasEditedWithRotation:(id)rotation;
+(void)trackAssetWasLoadedViaAPI:(id)api;
+(void)trackAssetWasPickedViaAPI:(id)api;
+(void)trackVideoWasTrimmed:(id)trimmed;
+(void)trackPhotoWasZoomed:(id)zoomed;
+(void)trackPhotoSetAsWallpaper:(id)wallpaper;
+(void)trackVideoWasPlayed:(id)played;
+(void)trackPhotoWasViewed:(id)viewed;
+(void)trackAlbumChosenForPictureFrame:(NSObject*)pictureFrame;
+(void)trackAlbumStartedSlideShow:(NSObject*)show;
// declared property setter: -(void)setClientID:(id)anId;
// declared property getter: -(id)clientID;
// declared property setter: -(void)setUuids:(id)uuids;
// declared property getter: -(id)uuids;
// declared property setter: -(void)setActivity:(long long)activity;
// declared property getter: -(long long)activity;
-(void)runDaemonSide;
-(void)run;
-(int)daemonOperation;
-(id)initFromXPCObject:(id)xpcobject;
-(void)encodeToXPCObject:(id)xpcobject;
-(void)dealloc;
@end

