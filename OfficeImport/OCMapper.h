/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class TSUTemporaryDirectory, OCCancel;

__attribute__((visibility("hidden")))
@interface OCMapper : XXUnknownSuperclass {
@private
	OCCancel* mCancel;
	TSUTemporaryDirectory* mTemporaryDirectoryObject;
}
+(id)mapperForCurrentThread;
-(id)temporaryDirectoryPath;
-(void)teardown;
-(void)setup;
-(void)quit;
-(BOOL)isCancelled;
-(void)cancel;
-(void)dealloc;
-(id)init;
@end
