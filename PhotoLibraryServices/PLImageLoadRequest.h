/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSMutableSet, NSMutableArray, PLImageSource, NSManagedObjectID, PLLoadRequestKey;

@interface PLImageLoadRequest : XXUnknownSuperclass {
	NSManagedObjectID* _assetID;
	PLImageSource* _source;
	NSMutableSet* _queues;
	int _priority;
	NSMutableArray* _completionBlocks;
	PLLoadRequestKey* _key;
}
@property(readonly, assign, nonatomic) PLLoadRequestKey* key;
@property(readonly, assign, nonatomic) PLImageSource* source;	// @synthesize=_source
@property(readonly, assign, nonatomic) NSArray* completionBlocks;
@property(assign, nonatomic) int priority;	// @synthesize=_priority
+(id)requestWithAsset:(id)asset source:(id)source priority:(int)priority completion:(id)completion loadingQueue:(id)queue;
// declared property getter: -(id)source;
// declared property setter: -(void)setPriority:(int)priority;
// declared property getter: -(int)priority;
-(void)notifyImageLoadingQueuesOfImageAvailability:(id)imageAvailability;
-(BOOL)someImageLoadingQueuesRegistered;
-(BOOL)isImageLoadingQueueRegistered:(id)registered;
-(void)deregisterImageLoadingQueue:(id)queue;
-(void)registerImageLoadingQueue:(id)queue;
-(id)debugDescription;
-(void)addCompletionBlock:(id)block;
// declared property getter: -(id)completionBlocks;
-(BOOL)isEqual:(id)equal;
// declared property getter: -(id)key;
-(id)assetInPhotoLibrary:(id)photoLibrary;
-(void)dealloc;
-(id)initWithAsset:(id)asset source:(id)source priority:(int)priority;
@end

