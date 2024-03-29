/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "PhotoLibrary-Structs.h"

@class UIViewController, NSMutableSet, NSSet, NSMutableDictionary, NSObject, NSString;
@protocol PLAssetContainer, PLPhotosPickerSessionDelegate;

@interface PLPhotosPickerSession : XXUnknownSuperclass {
@private
	NSObject* _destinationAlbum;
	UIViewController* _rootViewController;
	NSString* _currentPrompt;
	id<PLPhotosPickerSessionDelegate> _delegate;
	NSMutableDictionary* _selectedAssetsByAlbumID;
	NSMutableSet* _allSelectedAssets;
	int _albumFilter;
	int _bannerButtonType;
	id _bannerButtonAction;
	id _sessionDidEndHandler;
}
@property(retain, nonatomic) NSMutableDictionary* selectedAssetsByAlbumID;	// @synthesize=_selectedAssetsByAlbumID
@property(assign, nonatomic) int albumFilter;	// @synthesize=_albumFilter
@property(readonly, assign, nonatomic) BOOL hasAlbumFilter;
@property(readonly, assign, nonatomic) NSSet* allSelectedAssets;	// @synthesize=_allSelectedAssets
@property(copy, nonatomic) id bannerButtonAction;	// @synthesize=_bannerButtonAction
@property(assign, nonatomic) int bannerButtonType;	// @synthesize=_bannerButtonType
@property(copy, nonatomic) NSString* currentPrompt;	// @synthesize=_currentPrompt
@property(retain, nonatomic) NSObject<PLAssetContainer>* destinationAlbum;	// @synthesize=_destinationAlbum
@property(assign, nonatomic) id<PLPhotosPickerSessionDelegate> delegate;	// @synthesize=_delegate
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property getter: -(id)delegate;
// declared property setter: -(void)setAlbumFilter:(int)filter;
// declared property getter: -(int)albumFilter;
// declared property setter: -(void)setBannerButtonAction:(id)action;
// declared property getter: -(id)bannerButtonAction;
// declared property setter: -(void)setBannerButtonType:(int)type;
// declared property getter: -(int)bannerButtonType;
// declared property getter: -(id)allSelectedAssets;
// declared property getter: -(id)selectedAssetsByAlbumID;
// declared property setter: -(void)setDestinationAlbum:(NSObject*)album;
// declared property getter: -(NSObject*)destinationAlbum;
// declared property setter: -(void)setCurrentPrompt:(id)prompt;
// declared property getter: -(id)currentPrompt;
-(void)_updatePromptText;
-(void)_dismissSessionSuccessfully:(BOOL)successfully animated:(BOOL)animated;
-(void)handleDoneButton:(id)button;
-(void)cancelSessionAnimated:(BOOL)animated;
-(void)beginSessionWithModalViewController:(id)modalViewController overViewController:(id)controller didShowHandler:(id)handler completionHandler:(id)handler4;
-(void)setSelectedAssets:(id)assets forAlbumWithID:(id)anId added:(id)added removed:(id)removed;
// declared property setter: -(void)setSelectedAssetsByAlbumID:(id)anId;
// declared property getter: -(BOOL)hasAlbumFilter;
-(void)dealloc;
-(id)init;
@end

