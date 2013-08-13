/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "iTunesStoreUI-Structs.h"
#import "SUArtworkCellContext.h"


@interface SUItemCellContext : SUArtworkCellContext {
	CFDictionaryRef _cachedRatingImages;
	XXStruct_IrSbCA _stringSizeCacheKeyCallBacks;
	CFDictionaryRef _stringSizes;
}
@property(assign, nonatomic) XXStruct_IrSbCA stringSizeCacheKeyCallBacks;	// @synthesize=_stringSizeCacheKeyCallBacks
// declared property setter: -(void)setStringSizeCacheKeyCallBacks:(XXStruct_IrSbCA)backs;
// declared property getter: -(XXStruct_IrSbCA)stringSizeCacheKeyCallBacks;
-(void)resetLayoutCaches;
-(CGSize)sizeForString:(id)string font:(id)font constrainedToSize:(CGSize)size;
-(id)ratingImageForRating:(float)rating style:(int)style;
-(void)dealloc;
-(id)init;
@end

