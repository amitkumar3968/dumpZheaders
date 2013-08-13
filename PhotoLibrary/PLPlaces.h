/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "PLAlbumContainer.h"
#import "PhotoLibrary-Structs.h"

@class PLPlace, NSMutableArray, NSString, MKMapView;

@interface PLPlaces : XXUnknownSuperclass <PLAlbumContainer> {
	NSMutableArray* _photosWithLocationInformation;
	NSMutableArray* _places;
	NSMutableArray* _unaffectedAnnotations;
	NSMutableArray* _deletedAnnotations;
	NSMutableArray* _annotationsToRemoveWhenAddAnimationStarts;
	NSMutableArray* _annotationsToRemoveWhenAddAnimationEnds;
	NSMutableArray* _addedAnnotations;
	NSMutableArray* _newlyVisibleAnnotations;
	NSMutableArray* _animationOnlyAnnotations;
	MKMapView* _mapView;
	PLPlace* _nullPlace;
}
@property(readonly, assign, nonatomic) NSString* _typeDescription;
@property(readonly, assign, nonatomic) NSString* _prettyDescription;
@property(readonly, assign, nonatomic) unsigned unreadAlbumsCount;
@property(readonly, assign, nonatomic) int filter;
@property(readonly, assign, nonatomic) id albumsSortingComparator;
@property(readonly, retain) NSMutableArray* places;	// converted property
@property(readonly, retain) NSMutableArray* unaffectedAnnotations;	// converted property
@property(readonly, retain) NSMutableArray* deletedAnnotations;	// converted property
@property(readonly, retain) NSMutableArray* annotationsToRemoveWhenAddAnimationStarts;	// converted property
@property(readonly, retain) NSMutableArray* annotationsToRemoveWhenAddAnimationEnds;	// converted property
@property(readonly, retain) NSMutableArray* addedAnnotations;	// converted property
@property(readonly, retain) NSMutableArray* animationOnlyAnnotations;	// converted property
-(void)removeObserver:(id)observer forKeyPath:(id)keyPath context:(void*)context;
-(void)addObserver:(id)observer forKeyPath:(id)keyPath options:(unsigned)options context:(void*)context;
// declared property getter: -(id)_typeDescription;
// declared property getter: -(id)_prettyDescription;
-(id)photoLibrary;
// declared property getter: -(int)filter;
-(void)updateAlbumsOrderIfNeeded;
-(void)setNeedsReordering;
-(BOOL)needsReordering;
// declared property getter: -(id)albumsSortingComparator;
-(BOOL)albumHasFixedOrder:(NSObject*)order;
-(BOOL)canEditAlbums;
-(int)albumListType;
-(id)managedObjectContext;
// declared property getter: -(unsigned)unreadAlbumsCount;
-(BOOL)hasAtLeastOneAlbum;
-(id)albums;
-(id)identifier;
-(XXStruct_SRdqoD)_defaultRegionForNoPlacesData;
-(void)_loadPlacesData;
-(XXStruct_SRdqoD)_placeRegionForPhoto:(id)photo;
-(id)_placeForPhoto:(id)photo inPlaces:(id)places;
-(id)_findVisiblePhotosInRegion:(XXStruct_SRdqoD)region notInRegion:(XXStruct_SRdqoD)region2;
-(id)_findVisiblePhotosInRegion:(XXStruct_SRdqoD)region;
-(void)_logPhotos:(id)photos;
-(void)fullReset;
// converted property getter: -(id)animationOnlyAnnotations;
-(id)newlyVIsibleAnnotations;
// converted property getter: -(id)addedAnnotations;
// converted property getter: -(id)annotationsToRemoveWhenAddAnimationStarts;
// converted property getter: -(id)annotationsToRemoveWhenAddAnimationEnds;
// converted property getter: -(id)deletedAnnotations;
// converted property getter: -(id)unaffectedAnnotations;
// converted property getter: -(id)places;
-(void)_createMapAnnotationsFromChanges:(id)changes toChanges:(id)changes2 intoPlaces:(id)places;
-(void)_createPlacesWithNewPhotos:(id)newPhotos newPlaces:(id)places intoFromChanges:(id)changes toChanges:(id)changes4;
-(void)_updateCurrentPlaces:(id)places newPlaces:(id)places2 intoFromChanges:(id)changes toChanges:(id)changes4 fromOriginalRegion:(XXStruct_SRdqoD)originalRegion forNewRegion:(XXStruct_SRdqoD)newRegion;
-(void)_assetsWereAdded:(id)added deleted:(id)deleted updated:(id)updated;
-(void)_splitCurrentPlaces:(id)places newPlaces:(id)places2 intoFromChanges:(id)changes toChanges:(id)changes4 forNewRegion:(XXStruct_SRdqoD)newRegion;
-(void)_resetAnnotationBuckets;
-(void)updatePlacesFromRegion:(XXStruct_SRdqoD)region toRegion:(XXStruct_SRdqoD)region2 viaZoom:(BOOL)zoom;
-(void)updatePlacesWithAddedAssets:(id)addedAssets deletedAssets:(id)assets updatedAssets:(id)assets3;
-(void)_partitionPhotos:(id)photos intoPlaces:(id)places inRegion:(XXStruct_SRdqoD)region;
-(void)setupPlacesForRegion:(XXStruct_SRdqoD)region;
-(XXStruct_SRdqoD)visibleMapRectangleForZoomedOutPins;
-(void)setMapView:(id)view;
-(void)dealloc;
-(id)initWithMapView:(id)mapView;
-(id)_newAnimationAnnotationWithLongitude:(double)longitude latitude:(double)latitude;
-(id)_newPlaceForRegion:(XXStruct_SRdqoD)region;
@end

