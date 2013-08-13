/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSError, NSLock, GEOTileUsageInfo, GEOTileKeyList;

__attribute__((visibility("hidden")))
@interface _GEOTileLoadListener : XXUnknownSuperclass {
@private
	id _progress;
	id _finished;
	id _error;
	GEOTileKeyList* _originalList;
	GEOTileKeyList* _networkLoadList;
	GEOTileKeyList* _satisfiedList;
	CFRunLoopRef _runloop;
	BOOL _finishWhenDecoded;
	int _tilesDecoding;
	NSError* _finishError;
	NSLock* _callbacksLock;
	BOOL _checkDiskAllowed;
	BOOL _preload;
	GEOTileUsageInfo* _usageInfo;
}
@property(assign, nonatomic, getter=isPreload) BOOL preload;	// @synthesize=_preload
@property(assign, nonatomic) BOOL checkDiskAllowed;	// @synthesize=_checkDiskAllowed
@property(retain, nonatomic) GEOTileKeyList* satisfiedList;	// @synthesize=_satisfiedList
@property(retain, nonatomic) GEOTileKeyList* networkLoadList;	// @synthesize=_networkLoadList
@property(retain, nonatomic) GEOTileKeyList* originalList;	// @synthesize=_originalList
@property(copy, nonatomic) id error;	// @synthesize=_error
@property(copy, nonatomic) id finished;	// @synthesize=_finished
@property(copy, nonatomic) id progress;	// @synthesize=_progress
@property(readonly, assign) CFRunLoopRef runloop;	// converted property
// declared property setter: -(void)setPreload:(BOOL)preload;
// declared property getter: -(BOOL)isPreload;
// declared property setter: -(void)setCheckDiskAllowed:(BOOL)allowed;
// declared property getter: -(BOOL)checkDiskAllowed;
// declared property setter: -(void)setSatisfiedList:(id)list;
// declared property getter: -(id)satisfiedList;
// declared property setter: -(void)setNetworkLoadList:(id)list;
// declared property getter: -(id)networkLoadList;
// declared property setter: -(void)setOriginalList:(id)list;
// declared property getter: -(id)originalList;
// declared property setter: -(void)setError:(id)error;
// declared property getter: -(id)error;
// declared property setter: -(void)setFinished:(id)finished;
// declared property getter: -(id)finished;
// declared property setter: -(void)setProgress:(id)progress;
// declared property getter: -(id)progress;
-(void)unlockCallbacks;
-(void)lockCallbacks;
-(void)finishDecodingAndSendError:(id)error;
-(void)finishWhenDecoded;
-(void)endDecode;
-(void)_tryFinish;
-(void)beginDecode;
// converted property getter: -(CFRunLoopRef)runloop;
-(void)addSatisfiedKey:(const GEOTileKey*)key fromDisk:(BOOL)disk dataLength:(unsigned)length;
-(void)dealloc;
-(id)init;
@end
