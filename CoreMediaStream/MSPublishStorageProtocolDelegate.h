/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "NSObject.h"


@protocol MSPublishStorageProtocolDelegate <NSObject>
-(void)publishStorageProtocolDidFinishPublishingAllAssets:(id)publishStorageProtocol;
-(void)publishStorageProtocol:(id)protocol didFinishUsingFD:(int)fd forAsset:(id)asset;
-(int)publishStorageProtocol:(id)protocol didRequestFDForAsset:(id)asset;
-(void)publishStorageProtocol:(id)protocol didFinishUploadingAsset:(id)asset error:(id)error;
@end
