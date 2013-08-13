/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "MSMMCSProtocol.h"
#import "MSPublishStorageProtocol.h"

@class NSMutableDictionary;
@protocol MSPublishStorageProtocolDelegate;

@interface MSPublishMMCSProtocol : MSMMCSProtocol <MSPublishStorageProtocol> {
@private
	id<MSPublishStorageProtocolDelegate> _delegate;
	NSMutableDictionary* _itemIDToAssetDict;
	unsigned long long* _itemIDs;
	const char** _signatures;
	char** _authTokens;
	unsigned* _itemFlags;
	int _itemsInFlight;
}
@property(assign, nonatomic) id<MSPublishStorageProtocolDelegate> delegate;	// @synthesize=_delegate
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property getter: -(id)delegate;
-(void).cxx_destruct;
-(void)_putItemsFailure;
-(void)_requestCompleted;
-(void)_putItemDone:(unsigned long long)done error:(id)error;
-(void)publishAssets:(id)assets URL:(id)url;
-(id)_getUTIFromItem:(unsigned long long)item;
-(void)_closeFDForAsset:(id)asset;
-(int)_getFileDescriptorFromItem:(unsigned long long)item;
-(void)computeHashForAsset:(id)asset;
-(void)dealloc;
-(void)deactivate;
-(id)initWithPersonID:(id)personID;
@end

