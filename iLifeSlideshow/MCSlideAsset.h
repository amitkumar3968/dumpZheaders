/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "iLifeSlideshow-Structs.h"

@class NSString, MCAssetVideo;

@interface MCSlideAsset : XXUnknownSuperclass {
@private
	MCAssetVideo* _asset;
	NSString* _kenBurnsType;
@protected
	CGPoint center;
	float scale;
	float rotation;
}
@property(copy) NSString* kenBurnsType;	// @synthesize=_kenBurnsType
@property(retain) MCAssetVideo* asset;	// @synthesize=_asset
// declared property setter: -(void)setKenBurnsType:(id)type;
// declared property getter: -(id)kenBurnsType;
// declared property setter: -(void)setAsset:(id)asset;
// declared property getter: -(id)asset;
-(id)description;
-(void)dealloc;
-(id)init;
@end
