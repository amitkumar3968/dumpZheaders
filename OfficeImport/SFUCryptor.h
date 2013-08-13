/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SFUCryptor : XXUnknownSuperclass {
}
-(BOOL)cryptDataFromStream:(id)stream toBuffer:(char*)buffer length:(unsigned long)length bytesRead:(unsigned*)read error:(id*)error;
-(BOOL)cryptDataFromBuffer:(const char*)buffer length:(unsigned long)length toStream:(id)stream finished:(BOOL)finished crc32:(unsigned*)a32 error:(id*)error;
-(BOOL)cryptDataFromBuffer:(const char*)buffer length:(unsigned long)length toStream:(id)stream finished:(BOOL)finished error:(id*)error;
-(id)initWithKey:(id)key operation:(int)operation iv:(const char*)iv ivLength:(unsigned long)length;
@end

