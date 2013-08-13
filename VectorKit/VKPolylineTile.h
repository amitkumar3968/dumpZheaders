/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import "VectorKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, GEOVectorTile, NSArray, VKPolylineOverlay;

__attribute__((visibility("hidden")))
@interface VKPolylineTile : XXUnknownSuperclass {
@private
	VKPolylineOverlay* _dataSource;
	GEOVectorTile* _roadData;
	int _frameNumber;
	XXStruct_HKaJvA _tileRect;
	NSMutableArray* _paths;
	VKTileKey _key;
	double _trafficTimeStamp;
}
@property(assign, nonatomic) double trafficTimeStamp;	// @synthesize=_trafficTimeStamp
@property(readonly, assign, nonatomic) VKTileKey key;	// @synthesize=_key
@property(readonly, assign, nonatomic) XXStruct_HKaJvA tileRect;	// @synthesize=_tileRect
@property(readonly, assign, nonatomic) NSArray* paths;
@property(assign, nonatomic) int frameNumber;	// @synthesize=_frameNumber
@property(readonly, assign, nonatomic) GEOVectorTile* roadData;	// @synthesize=_roadData
// declared property setter: -(void)setTrafficTimeStamp:(double)stamp;
// declared property getter: -(double)trafficTimeStamp;
// declared property getter: -(VKTileKey)key;
// declared property getter: -(XXStruct_HKaJvA)tileRect;
// declared property setter: -(void)setFrameNumber:(int)number;
// declared property getter: -(int)frameNumber;
// declared property getter: -(id)roadData;
-(void)drawDebug:(id)debug vectorTile:(id)tile debugFlags:(int)flags;
// declared property getter: -(id)paths;
-(void)invalidatePaths;
-(void)dealloc;
-(id)initWithDataSource:(id)dataSource key:(VKTileKey)key;
-(id)initWithDataSource:(id)dataSource roadData:(id)data overlayTile:(id)tile;
@end

