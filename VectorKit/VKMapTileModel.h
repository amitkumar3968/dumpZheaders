/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import "VKModelObject.h"
#import "VectorKit-Structs.h"
#import "VKMapLayer.h"

@class NSSet, NSMutableSet, VKStylesheet, VKMapModel;

__attribute__((visibility("hidden")))
@interface VKMapTileModel : VKModelObject <VKMapLayer> {
@private
	NSMutableSet* _tilesWillEnterScene;
	NSMutableSet* _tilesInScene;
	NSMutableSet* _tilesInScenePlusExitingTiles;
	NSMutableSet* _tilesWillExitScene;
	NSMutableSet* _tilesExitingScene;
	NSMutableSet* _previousTilesInScene;
	VKMapModel* _mapModel;
}
@property(readonly, assign, nonatomic) NSSet* tilesInScene;	// @synthesize=_tilesInScene
@property(readonly, assign, nonatomic) VKStylesheet* stylesheet;
@property(assign, nonatomic) VKMapModel* mapModel;	// @synthesize=_mapModel
+(BOOL)reloadOnActiveTileGroupChange;
+(BOOL)reloadOnStylesheetChange;
// declared property setter: -(void)setMapModel:(id)model;
// declared property getter: -(id)mapModel;
// declared property getter: -(id)tilesInScene;
-(void)updateTilesInScene:(id)scene withContext:(id)context categorize:(BOOL)categorize;
-(void)activeTileGroupChanged:(id)changed;
-(void)stylesheetDidChange;
-(void)removePersistingExitingTiles:(id)tiles;
-(void)willStopDrawingTiles:(id)tiles;
-(void)willStartDrawingTiles:(id)tiles;
-(void)didMoveToSupermodel;
-(void)reset;
-(void)dealloc;
-(id)init;
-(void)createCollections;
-(void)createCollectionsIfNecessary;
-(void)clearCollections;
-(BOOL)maximumZoomLevelBoundsCamera;
-(BOOL)minimumZoomLevelBoundsCamera;
// declared property getter: -(id)stylesheet;
-(unsigned)mapLayerPosition;
@end
