/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import "HSRequest.h"


@interface HSCloudArtworkInfoRequest : HSRequest {
}
+(id)requestWithDatabaseID:(unsigned)databaseID itemID:(unsigned long long)anId sessionID:(unsigned)anId3;
+(id)requestWithDatabaseID:(unsigned)databaseID itemID:(unsigned long long)anId;
-(id)canonicalResponseForResponse:(id)response;
-(id)initWithDatabaseID:(unsigned)databaseID itemID:(unsigned long long)anId sessionID:(unsigned)anId3;
-(id)initWithDatabaseID:(unsigned)databaseID itemID:(unsigned long long)anId;
@end

