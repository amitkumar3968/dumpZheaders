/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "GeoServices-Structs.h"

@class GEOTileKeyList;

__attribute__((visibility("hidden")))
@interface _GEORegionalResourcesLoadListener : XXUnknownSuperclass {
@private
	id _progress;
	id _finished;
	id _error;
	GEOTileKeyList* _originalList;
	GEOTileKeyList* _satisfiedList;
	CFRunLoopRef _runLoop;
}
@property(readonly, assign, nonatomic) CFRunLoopRef runLoop;	// @synthesize=_runLoop
@property(retain, nonatomic) GEOTileKeyList* satisfiedList;	// @synthesize=_satisfiedList
@property(retain, nonatomic) GEOTileKeyList* originalList;	// @synthesize=_originalList
@property(copy, nonatomic) id error;	// @synthesize=_error
@property(copy, nonatomic) id finished;	// @synthesize=_finished
@property(copy, nonatomic) id progress;	// @synthesize=_progress
// declared property getter: -(CFRunLoopRef)runLoop;
// declared property setter: -(void)setSatisfiedList:(id)list;
// declared property getter: -(id)satisfiedList;
// declared property setter: -(void)setOriginalList:(id)list;
// declared property getter: -(id)originalList;
// declared property setter: -(void)setError:(id)error;
// declared property getter: -(id)error;
// declared property setter: -(void)setFinished:(id)finished;
// declared property getter: -(id)finished;
// declared property setter: -(void)setProgress:(id)progress;
// declared property getter: -(id)progress;
-(void)addSatisfiedKey:(const GEOTileKey*)key;
-(void)dealloc;
-(id)initWithRunLoop:(CFRunLoopRef)runLoop;
@end

