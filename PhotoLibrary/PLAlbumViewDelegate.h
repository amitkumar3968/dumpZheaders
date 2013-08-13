/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "NSObject.h"


@protocol PLAlbumViewDelegate <NSObject>
@optional
-(BOOL)albumViewShouldShowPhotoCount:(id)albumView;
-(void)albumView:(id)view preheatImageDataAtIndexPath:(id)indexPath windowSize:(unsigned)size downDirection:(BOOL)direction;
-(void)albumView:(id)view didTapPhotoAtIndexPath:(id)indexPath;
-(void)albumViewSelectionDidChange:(id)albumViewSelection added:(id)added removed:(id)removed;
-(BOOL)albumView:(id)view canSelectPhotoAtIndexPath:(id)indexPath;
@end
