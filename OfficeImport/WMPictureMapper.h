/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMDrawableMapper.h"

@class WDPicture;

__attribute__((visibility("hidden")))
@interface WMPictureMapper : CMDrawableMapper {
@private
	WDPicture* wdPicture;
}
-(void)setBoundingBox;
-(void)mapBounds;
-(void)mapAt:(id)at withState:(id)state;
-(id)initWithWDPicture:(id)wdpicture parent:(id)parent;
@end

