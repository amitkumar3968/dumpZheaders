/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSURL;

@interface PLFileSystemPersistenceBatchItem : XXUnknownSuperclass {
@private
	NSURL* fileURL;
	NSMutableDictionary* attributes;
}
@property(retain, nonatomic) NSMutableDictionary* attributes;	// @synthesize
@property(retain, nonatomic) NSURL* fileURL;	// @synthesize
// declared property setter: -(void)setAttributes:(id)attributes;
// declared property getter: -(id)attributes;
// declared property setter: -(void)setFileURL:(id)url;
// declared property getter: -(id)fileURL;
-(void)dealloc;
-(void)persist;
-(void)setString:(id)string forKey:(id)key;
-(void)setUInt16:(unsigned short)a16 forKey:(id)key;
-(void)setUUIDString:(id)string forKey:(id)key;
-(void)setData:(id)data forKey:(id)key;
-(id)description;
-(id)init;
@end

