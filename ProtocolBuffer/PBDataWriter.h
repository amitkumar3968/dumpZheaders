/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

#import <CFNetwork/_kCFStreamSSLCertificates.h>

@class NSMutableData;

@interface PBDataWriter : _kCFStreamSSLCertificates {
@private
	NSMutableData* _data;
}
@property(readonly, retain) NSMutableData* data;	// converted property
-(unsigned)write:(const char*)write maxLength:(unsigned)length;
-(BOOL)writeData:(id)data;
-(void)writeData:(id)data forTag:(unsigned short)tag;
-(void)writeString:(id)string forTag:(unsigned short)tag;
-(void)writeBOOL:(BOOL)aBool forTag:(unsigned short)tag;
-(void)writeSfixed64:(long long)a64 forTag:(unsigned short)tag;
-(void)writeSfixed32:(int)a32 forTag:(unsigned short)tag;
-(void)writeFixed64:(unsigned long long)a64 forTag:(unsigned short)tag;
-(void)writeFixed32:(unsigned)a32 forTag:(unsigned short)tag;
-(void)writeSint64:(long long)a64 forTag:(unsigned short)tag;
-(void)writeSint32:(int)a32 forTag:(unsigned short)tag;
-(void)writeUint64:(unsigned long long)a64 forTag:(unsigned short)tag;
-(void)writeUint32:(unsigned)a32 forTag:(unsigned short)tag;
-(void)writeInt64:(long long)a64 forTag:(unsigned short)tag;
-(void)writeInt32:(int)a32 forTag:(unsigned short)tag;
-(void)writeFloat:(float)aFloat forTag:(unsigned short)tag;
-(void)writeDouble:(double)aDouble forTag:(unsigned short)tag;
-(void)writeTag:(unsigned short)tag andType:(unsigned char)type;
-(void)writeBareVarint:(unsigned long long)varint;
-(void)writeUint8:(unsigned char)a8;
-(void)writeInt8:(BOOL)a8;
-(void)writeProtoBuffer:(id)buffer;
-(void)writeBigEndianShortThenString:(id)string;
-(void)writeBigEndianFixed32:(unsigned)a32;
-(void)writeBigEndianFixed16:(unsigned short)a16;
// converted property getter: -(id)data;
-(void)dealloc;
-(id)init;
@end
