/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "CoreMediaStream-Structs.h"
#import "MSStreamsProtocol.h"

@class NSArray;

@interface MSPublishStreamsProtocol : MSStreamsProtocol {
@private
	MSPSPCContext _context;
	NSArray* _assetCollectionsInFlight;
	MSPSPCUCContext _UCContext;
}
@property(assign) id delegate;	// converted property
-(void).cxx_destruct;
-(void)_coreProtocolDidFinishUCResults:(id)_coreProtocol error:(id)error;
-(void)_coreProtocolDidFailAuthenticationError:(id)_coreProtocol;
-(void)_coreProtocolDidFinishResponse:(id)_coreProtocol error:(id)error;
-(void)abort;
-(void)sendUploadCompleteForAssetCollections:(id)assetCollections;
-(void)sendMetadataForAssetCollections:(id)assetCollections;
-(id)_metadataDictForAssetCollection:(id)assetCollection outError:(id*)error;
-(id)_metadataDictForAsset:(id)asset outError:(id*)error;
-(void)_resetConnectionVariables;
-(BOOL)_insertInfoAboutAsset:(id)asset intoDictionary:(id)dictionary outError:(id*)error;
-(id)_missingAssetFieldErrorWithFieldName:(id)fieldName;
-(void)dealloc;
-(id)initWithPersonID:(id)personID baseURL:(id)url;
// converted property setter: -(void)setDelegate:(id)delegate;
// converted property getter: -(id)delegate;
@end
