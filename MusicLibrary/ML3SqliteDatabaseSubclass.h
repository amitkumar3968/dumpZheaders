/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import "NSObject.h"


@protocol ML3SqliteDatabaseSubclass <NSObject>
+(BOOL)migrateFromVersion:(int)version outUserVersion:(int*)version2 usingHandle:(sqlite3*)handle;
+(int)currentUserVersion;
+(id)allSchemaSQL;
+(id)databasePath;
@optional
+(void)registerFunctionsOnHandle:(sqlite3*)handle;
+(void)limitCacheSize:(sqlite3*)size;
+(BOOL)attachAuxiliaryDatabases:(sqlite3*)databases;
@end

