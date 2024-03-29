/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import "HSRequest.h"


@interface HSBulkCloudArtworkInfoRequest : HSRequest {
@private
	BOOL _useLongIDs;
}
+(id)requestWithDatabaseID:(unsigned)databaseID itemIDs:(id)ids sessionID:(unsigned)anId useLongIDs:(BOOL)ids4;
-(id)_bodyDataForItemIDs:(id)itemIDs sessionID:(unsigned)anId;
-(id)canonicalResponseForResponse:(id)response;
-(id)initWithDatabaseID:(unsigned)databaseID itemIDs:(id)ids sessionID:(unsigned)anId useLongIDs:(BOOL)ids4;
@end

