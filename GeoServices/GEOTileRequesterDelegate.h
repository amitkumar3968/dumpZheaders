/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"


@protocol GEOTileRequesterDelegate
-(void)tileRequesterFinished:(id)finished;
-(void)tileRequester:(id)requester receivedError:(id)error;
-(void)tileRequester:(id)requester receivedData:(id)data tileEdition:(unsigned)edition tileSet:(unsigned)set forKey:(GEOTileKey)key userInfo:(id)info;
@end

