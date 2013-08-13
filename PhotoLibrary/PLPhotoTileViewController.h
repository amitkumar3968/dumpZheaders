/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "PhotoLibrary-Structs.h"
#import "UIScrollViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "PLCommentsViewControllerDelegate.h"

@class PLPhotoTilePlaceholderView, UIImageView, NSObject, PLExpandableImageView, PLVideoView, PLImageScrollView, PLManagedAsset, UIImage, UIGestureRecognizer, PLCommentsViewController;
@protocol OS_dispatch_source, PLPhotoTileViewControllerDelegate;

@interface PLPhotoTileViewController : XXUnknownSuperclass <UIScrollViewDelegate, UIGestureRecognizerDelegate, PLCommentsViewControllerDelegate> {
	UIImage* _image;
	UIImage* _pendingImage;
	UIImage* _unscaledImage;
	PLManagedAsset* _modelPhoto;
	PLImageScrollView* _scrollView;
	PLExpandableImageView* _imageView;
	PLVideoView* _videoView;
	UIImageView* _gradientView;
	UIImageView* _hdrBadgeImageView;
	PLPhotoTilePlaceholderView* _placeholderView;
	PLCommentsViewController* _commentsViewController;
	UIGestureRecognizer* _singleTapGestureRecognizer;
	UIGestureRecognizer* _doubleTapGestureRecognizer;
	id<PLPhotoTileViewControllerDelegate> _tileDelegate;
	int _imageOrientation;
	CGSize _imageSize;
	CGRect _tileFrame;
	BOOL _zoomToFillInsteadOfToFit;
	BOOL _useLessThanMinZoomForZoomedOutTest;
	BOOL _allowZoomToFill;
	id _orientationDelegate;
	float _cropRectZoomScale;
	CGRect _cropOverlayRect;
	CGRect _cropRect;
	float _doubleTapZoomScale;
	float _minZoomScale;
	float _zoomToFillScale;
	int _mode;
	int _lastDisplayedOrientation;
	BOOL _clientIsTemporarilyWallpaper;
	BOOL _userDidAdjustWallpaper;
	float _wallpaperPortraitZoomScale;
	float _wallpaperLandscapeZoomScale;
	float _zoomScaleBeforeZooming;
	CGRect _cropRectBeforeDragging;
	BOOL _force1XCroppedImage;
	BOOL _forceNativeScreenScale;
	BOOL _centerContentVertically;
	id _didEndZoomingBlock;
	NSObject<OS_dispatch_source>* _dispatchTimer;
	double _dispatchStartTime;
	double _dispatchTimeElapsed;
	BOOL _hasNotedZoom;
	unsigned _imageIsThumbnail : 1;
	unsigned _isTVOut : 1;
	unsigned _zooming : 1;
	unsigned _autoZooming : 1;
	unsigned _zoomGesturesEnabled : 1;
	unsigned _userDidZoom : 1;
	unsigned _ignoreZoomChange : 1;
	unsigned _tileParentIsPageController : 1;
	unsigned _lockedUnderCropOverlay : 1;
	unsigned _viewDidAppear : 1;
	unsigned _viewWillAppear : 1;
	unsigned _didRequestFullSizeImage : 1;
	unsigned _useZoomScaleForCropRect : 1;
	unsigned _photoShouldBeHDRBadged : 1;
	unsigned _hdrBadgeShouldBeVisible : 1;
	unsigned _didSetHDRForModelPhoto : 1;
	unsigned _commentsTableVisible : 1;
}
@property(readonly, assign, nonatomic) BOOL commentsTableIsVisible;
@property(readonly, assign, nonatomic) PLCommentsViewController* commentsViewController;	// @synthesize=_commentsViewController
@property(assign, nonatomic) BOOL force1XCroppedImage;	// @synthesize=_force1XCroppedImage
@property(assign, nonatomic) BOOL forceNativeScreenScale;	// @synthesize=_forceNativeScreenScale
@property(assign, nonatomic) BOOL centerContentVertically;	// @synthesize=_centerContentVertically
@property(retain, nonatomic) UIImage* unscaledImage;	// @synthesize=_unscaledImage
@property(assign, nonatomic) CGRect tileFrame;
@property(retain, nonatomic) UIImage* thumbnailImage;
@property(readonly, assign, nonatomic) PLManagedAsset* photo;
@property(assign) BOOL gesturesEnabled;	// converted property
@property(assign, getter=isTVOut) BOOL tVOut;	// converted property
@property(assign) id tileDelegate;	// converted property
@property(retain) PLVideoView* videoView;	// converted property
@property(readonly, retain) UIImage* image;	// converted property
@property(readonly, retain) PLImageScrollView* scrollView;	// converted property
@property(readonly, retain) PLExpandableImageView* imageView;	// converted property
@property(readonly, assign) int imageOrientation;	// converted property
@property(readonly, assign) float minZoomScale;	// converted property
@property(readonly, assign) float zoomToFillScale;	// converted property
@property(readonly, assign) BOOL userDidAdjustWallpaper;	// converted property
+(id)newPhotoTileViewControllerWithFrame:(CGRect)frame modelPhoto:(id)photo mode:(int)mode;
+(id)newPhotoTileViewControllerWithFrame:(CGRect)frame image:(id)image allowZoomToFill:(BOOL)fill mode:(int)mode;
+(id)newPhotoTileViewControllerWithFrame:(CGRect)frame imageRef:(CGImageRef)ref imageOrientation:(int)orientation allowZoomToFill:(BOOL)fill mode:(int)mode;
+(CGSize)tvOutTileSize;
+(CGSize)tileSize;
+(BOOL)shouldShowPlaceholderForAssetKind:(int)assetKind;
// declared property setter: -(void)setForce1XCroppedImage:(BOOL)image;
// declared property getter: -(BOOL)force1XCroppedImage;
// declared property setter: -(void)setForceNativeScreenScale:(BOOL)scale;
// declared property getter: -(BOOL)forceNativeScreenScale;
// declared property setter: -(void)setUnscaledImage:(id)image;
// declared property getter: -(id)unscaledImage;
// declared property getter: -(id)commentsViewController;
// declared property setter: -(void)setCenterContentVertically:(BOOL)vertically;
// declared property getter: -(BOOL)centerContentVertically;
-(void)setLockedUnderCropOverlay:(BOOL)overlay;
-(void)_adjustZoomForEnteringMode:(BOOL)enteringMode;
-(void)updateAfterCollapse;
// converted property getter: -(int)imageOrientation;
-(void)setAllowsZoomToFill:(BOOL)fill;
-(void)updateZoomScales;
-(void)_setDefaultZoomScale;
-(void)setOrientationDelegate:(id)delegate;
-(BOOL)isZoomedOut;
-(float)currentToDefaultZoomRatio;
-(float)defaultZoomScale;
-(float)zoomToFitScale;
// converted property getter: -(float)zoomToFillScale;
// converted property getter: -(float)minZoomScale;
-(float)_calculateZoomScale:(BOOL)scale inView:(id)view;
-(float)minRotatedScale;
-(void)_performDidEndZoomBlock;
-(void)_setDidEndZoomingBlock:(id)_set;
-(void)zoomToScale:(float)scale completionBlock:(id)block;
-(id)dictionaryWithCroppedImageForRect:(CGRect)rect withOptions:(int)options;
-(id)newImageWithCropRect:(CGRect)cropRect croppedImageData:(id*)data fullScreenImageData:(id*)data3 fullScreenImage:(CGImageRef*)image imageCropRect:(CGRect*)rect intersectCropWithFullRect:(BOOL)fullRect;
-(void)_handleDoubleTap:(id)tap;
-(void)_requestFullSizeImage;
-(void)_handleSingleTap:(id)tap;
-(void)ensureFullSizeImageLoaded;
-(void)applicationDidBecomeActive:(id)application;
-(void)applicationWillResignActive:(id)application;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)contentViewFrameChanged;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
-(id)viewForZoomingInScrollView:(id)scrollView;
-(void)scrollViewDidEndDecelerating:(id)scrollView;
-(void)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate;
-(void)scrollViewWillBeginDragging:(id)scrollView;
-(void)scrollViewDidZoom:(id)scrollView;
-(void)scrollViewDidEndZooming:(id)scrollView withView:(id)view atScale:(float)scale;
-(void)scrollViewWillBeginZooming:(id)scrollView withView:(id)view;
-(CGSize)scrollView:(id)view contentSizeForZoomScale:(float)zoomScale withProposedSize:(CGSize)proposedSize;
-(void)noteParentViewControllerDidDisappear;
-(void)commentsControllerWillBeginScrolling:(id)commentsController;
-(void)commentsControllerDidDisplayUnreadComment:(id)commentsController;
-(void)commentsControllerDidExitEditMode:(id)commentsController;
-(void)commentsControllerWillEnterEditMode:(id)commentsController;
-(void)commentsControllerInactiveAreaWasTapped:(id)tapped;
-(void)setCommentsTableVisibility:(BOOL)visibility duration:(float)duration;
// declared property getter: -(BOOL)commentsTableIsVisible;
-(void)initializeCommentsTable;
-(void)updateCommentsForVisibleOverlays:(BOOL)visibleOverlays;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewWillUnload;
-(void)loadView;
-(BOOL)didRequestFullSizeImage;
-(BOOL)hasFullSizeImage;
-(void)setFullSizeImage:(id)image;
-(void)refreshTileWithFullScreenImage:(id)fullScreenImage;
-(void)_setImage:(id)image isThumbnail:(BOOL)thumbnail;
-(void)_updateAggdKeys;
-(void)_updateModelPhotoWithImage:(id)image;
-(void)_updateGradientImageForOrientation:(int)orientation;
-(void)_updateContentInset;
-(void)_adjustScrollViewContentOffsetForInsets;
-(void)_centerImageInScrollView;
-(void)_updatePlaceholderViewAnimated:(BOOL)animated;
-(void)_installSubview:(id)subview;
-(void)_configureViews;
-(void)setHDRBadgeVisible:(BOOL)visible;
-(void)_showHDRBadgeIfAppropriate;
-(void)_setupHDRBadge;
-(BOOL)photoShouldHaveHDRBadge;
-(void)_repositionHDRBadge;
// converted property setter: -(void)setGesturesEnabled:(BOOL)enabled;
// converted property getter: -(BOOL)gesturesEnabled;
-(BOOL)allowsEditing;
-(void)setClientIsWallpaper:(BOOL)wallpaper;
-(BOOL)_clientIsWallpaper;
// converted property getter: -(BOOL)userDidAdjustWallpaper;
// converted property setter: -(void)setTVOut:(BOOL)anOut;
// converted property getter: -(BOOL)isTVOut;
// converted property setter: -(void)setTileDelegate:(id)delegate;
// converted property getter: -(id)tileDelegate;
// converted property setter: -(void)setVideoView:(id)view;
// converted property getter: -(id)videoView;
// converted property getter: -(id)scrollView;
-(id)newCGImageBackedUIImage;
// converted property getter: -(id)image;
// converted property getter: -(id)imageView;
-(id)expandableImageView;
-(void)forceZoomingGesturesEnabled;
-(void)setZoomingGesturesEnabled:(BOOL)enabled;
-(void)setCropOverlayRect:(CGRect)rect forCropRect:(CGRect)cropRect;
-(void)setZoomScale:(float)scale;
-(id)description;
// declared property setter: -(void)setTileFrame:(CGRect)frame;
// declared property getter: -(CGRect)tileFrame;
// declared property setter: -(void)setThumbnailImage:(id)image;
// declared property getter: -(id)thumbnailImage;
// declared property getter: -(id)photo;
-(void)_setPhoto:(id)photo;
-(BOOL)tileIsOnScreen;
-(void)dealloc;
-(void)_teardownDispatchTimer;
-(id)initWithPhoto:(id)photo thumbnailImage:(id)image size:(CGSize)size;
-(id)initForPageController;
-(id)initWithPhoto:(id)photo image:(id)image frame:(CGRect)frame isThumbnail:(BOOL)thumbnail imageOrientation:(int)orientation allowZoomToFill:(BOOL)fill mode:(int)mode;
-(id)init;
-(int)_imageOrientation;
-(id)_newOriginalImageForPickerFromCachedData;
@end

