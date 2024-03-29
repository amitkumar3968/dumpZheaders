/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "ISStoreURLOperationDelegate.h"
#import "SUArrayCellConfiguration.h"
#import "iTunesStoreUI-Structs.h"

@class NSMutableArray, NSMutableDictionary;

@interface SUArtworkCellConfiguration : SUArrayCellConfiguration <ISStoreURLOperationDelegate> {
	NSMutableDictionary* _artworkByURL;
	NSMutableArray* _artworkLoadOperations;
}
+(id)copyDefaultContext;
-(id)_artworkImageForURL:(id)url dataProvider:(id)provider;
-(void)operation:(id)operation finishedWithOutput:(id)output;
-(void)operation:(id)operation failedWithError:(id)error;
-(void)setRepresentedObject:(id)object;
-(void)reloadAfterArtworkLoad;
-(id)copyImageDataProvider;
-(void)cancelArtworkRequests;
-(id)artworkImageForURL:(id)url;
-(id)artworkImageForItemImage:(id)itemImage;
-(void)dealloc;
@end

