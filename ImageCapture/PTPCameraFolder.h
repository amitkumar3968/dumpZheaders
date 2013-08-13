/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "ICCameraFolder.h"

@class NSString;

@interface PTPCameraFolder : ICCameraFolder {
@private
	void* _ptpCameraFolderProperties;
	NSString* _path;
}
@property(retain) NSString* path;	// @synthesize=_path
@property(copy) id info;
@property(readonly, assign) unsigned long objHandle;
@property(readonly, assign) unsigned long storageID;
@property(readonly, assign) unsigned type;
// declared property setter: -(void)setPath:(id)path;
// declared property getter: -(id)path;
-(id)description;
-(void)enumerateContent;
-(BOOL)hasDCIMParent;
-(id)folderForObjectHandleCreatingIfNeeded:(unsigned long)objectHandleCreatingIfNeeded addUsedObjectIDs:(id)ids numFoldersCreated:(int*)created;
-(id)folderForObjectHandle:(unsigned long)objectHandle;
-(id)itemForObjectHandle:(unsigned long)objectHandle;
-(void)refreshInfo;
-(BOOL)deleteItemFromCamera:(id)camera;
// declared property setter: -(void)setInfo:(id)info;
// declared property getter: -(id)info;
// declared property getter: -(unsigned long)objHandle;
// declared property getter: -(unsigned long)storageID;
// declared property getter: -(unsigned)type;
-(void)finalize;
-(void)dealloc;
-(id)initWithName:(id)name parentFolder:(id)folder device:(id)device type:(unsigned)type storageID:(unsigned long)anId objectHandle:(unsigned long)handle;
@end
