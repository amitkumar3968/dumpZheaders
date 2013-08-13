/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import "PhotoLibraryServices-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSFileManager, NSMutableIndexSet, NSURL, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface PLSimpleDCIMDirectory : XXUnknownSuperclass {
@private
	NSURL* _baseURL;
	NSString* _subDirSuffix;
	unsigned _directoryLimit;
	NSFileManager* _fileManager;
	NSMutableIndexSet* _availableFileNameNumbers;
	NSURL* _currentSubDirectory;
	unsigned _currentSubDirectoryNumber;
	NSString* _userInfoPath;
	BOOL _hasLoadedUserInfo;
	BOOL _representsCameraRoll;
	NSObject<OS_dispatch_queue>* _isolation;
}
@property(readonly, assign) NSURL* directoryURL;	// @synthesize=_baseURL
@property(assign) BOOL representsCameraRoll;	// @synthesize=_representsCameraRoll
@property(readonly, assign, nonatomic) NSURL* currentSubDirectory;
+(id)cameraRollPlistName;
+(id)migrateOldPlistToNewPlist:(id)newPlist;
// declared property getter: -(id)directoryURL;
// declared property setter: -(void)setRepresentsCameraRoll:(BOOL)roll;
// declared property getter: -(BOOL)representsCameraRoll;
-(void)reset;
-(id)nextAvailableFileURLWithExtension:(id)extension;
-(void)dealloc;
-(id)init;
-(id)initWithDirectoryURL:(id)directoryURL subDirectorySuffix:(id)suffix perDirectoryLimit:(unsigned)limit userInfoPath:(id)path;
-(BOOL)_ensureDirectoryExists:(id)exists;
-(void)_loadUserInfoLastDirectoryNumber:(id*)number lastFileNumber:(id*)number2;
-(void)_saveUserInfo;
-(NSRange)fileNameNumberRangeForDirNumber:(unsigned)dirNumber;
-(id)availableFileNameNumbersInDirNumber:(unsigned)dirNumber;
-(id)subDirURLForNumber:(unsigned)number create:(BOOL)create didCreate:(BOOL*)create3;
// declared property getter: -(id)currentSubDirectory;
@end
