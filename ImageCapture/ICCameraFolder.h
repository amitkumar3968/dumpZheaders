/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "ImageCapture-Structs.h"
#import "ICCameraItem.h"

@class NSArray;

@interface ICCameraFolder : ICCameraItem {
@private
	void* _folderProperties;
	int _filesLock;
	int _foldersLock;
}
@property(readonly, assign) NSArray* contents;
-(void)requestMetadata;
-(void)requestThumbnail;
-(id)metadata;
-(CGImageRef)thumbnail;
-(BOOL)hasThumbnail;
-(id)folders;
-(id)files;
-(id)valueForUndefinedKey:(id)undefinedKey;
// declared property getter: -(id)contents;
-(void)deleteFolder:(id)folder;
-(void)deleteFile:(id)file;
-(void)deleteItem:(id)item;
-(void)addFolder:(id)folder;
-(void)addFile:(id)file;
-(id)description;
-(void)unlockFolders;
-(void)lockFolders;
-(void)unlockFiles;
-(void)lockFiles;
-(void)finalize;
-(void)dealloc;
-(id)initWithName:(id)name parentFolder:(id)folder device:(id)device;
@end

