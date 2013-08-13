/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableData;

@interface GEONetworkDataReader : XXUnknownSuperclass {
@private
	NSMutableData* _data;
	unsigned _dataLength;
	const void* _bytes;
	unsigned _bookmarkOffset;
	unsigned _offset;
}
-(BOOL)hasUnreadData;
-(void)seekToMarkedOffset;
-(void)markOffset;
-(id)readData:(unsigned)data;
-(BOOL)readUnsignedInt:(unsigned*)int;
-(BOOL)readUnsignedShort:(unsigned short*)aShort;
-(id)readString;
-(void)appendNetworkData:(id)data;
-(id)allData;
-(void)dealloc;
-(id)initWithData:(id)data;
@end
