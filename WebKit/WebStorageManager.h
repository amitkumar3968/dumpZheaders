/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import </libobjc.A.h>


@interface WebStorageManager : NSObject {
}
+(void)setStorageDatabaseIdleInterval:(double)interval;
+(id)_storageDirectoryPath;
+(id)sharedWebStorageManager;
-(void)syncFileSystemAndTrackerDatabase;
-(void)syncLocalStorage;
-(unsigned long long)diskUsageForOrigin:(id)origin;
-(void)deleteOrigin:(id)origin;
-(void)deleteAllOrigins;
-(id)origins;
-(id)init;
@end

