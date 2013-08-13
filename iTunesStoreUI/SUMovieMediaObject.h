/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "SUMediaObject.h"

@class NSMutableArray, NSArray;

@interface SUMovieMediaObject : SUMediaObject {
	NSMutableArray* _remakerOutputs;
}
@property(readonly, assign) NSArray* remadeVariants;
-(id)_newSnapshotImageWithMaximumSize:(float)maximumSize;
-(id)_activeRemadeVariant;
-(void)saveToLibraryWithCompletionBlock:(id)completionBlock;
-(id)newThumbnailImageWithMaximumSize:(float)maximumSize;
-(id)newComposeImageWithMaximumSize:(float)maximumSize;
-(id)newInputSource;
-(id)inputSourceMIMEType;
-(id)_fullSizeImage;
-(id)copyPreparationOperations;
// declared property getter: -(id)remadeVariants;
-(void)addRemadeVariant:(id)variant;
-(void)dealloc;
@end

