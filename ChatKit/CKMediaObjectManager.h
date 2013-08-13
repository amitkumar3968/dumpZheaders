/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary;

@interface CKMediaObjectManager : XXUnknownSuperclass {
	NSMutableDictionary* _mediaObjectDict;
}
+(id)sharedInstance;
-(void)dealloc;
-(Class)mediaObjectClassForMIMEType:(id)mimetype;
-(Class)mediaObjectClassForPath:(id)path;
-(id)newMediaObjectForTransferGUID:(id)transferGUID;
-(Class)mediaObjectClassForTransferGUID:(id)transferGUID;
-(id)newMediaObjectForData:(id)data mimeType:(id)type exportedFilename:(id)filename;
-(id)newMediaObjectForFilename:(id)filename mimeType:(id)type exportedFilename:(id)filename3 composeOptions:(id)options;
-(void)_registerAllMediaTypes;
@end

