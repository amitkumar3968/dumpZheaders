/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface IMFileManager : XXUnknownSuperclass {
}
+(id)defaultHFSFileManager;
+(id)defaultManager;
-(id)UTITypeOfPathExtension:(id)pathExtension;
-(id)UTITypeOfPath:(id)path;
-(id)pathExtensionForUTIType:(id)utitype;
-(id)MIMETypeOfPath:(id)path;
-(id)MIMETypeOfPathExtension:(id)pathExtension;
-(id)UTITypeOfMimeType:(id)mimeType;
-(id)pathExtensionForMIMEType:(id)mimetype;
-(id)displayNameOfFileWithName:(id)name hfsFlags:(unsigned short)flags;
-(id)attributesOfItemAtPath:(id)path error:(id*)error;
@end

