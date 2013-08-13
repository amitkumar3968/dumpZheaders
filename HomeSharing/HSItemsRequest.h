/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import "HSRequest.h"


@interface HSItemsRequest : HSRequest {
@private
	BOOL _shouldParseResponse;
}
@property(assign, nonatomic) BOOL shouldParseResponse;	// @synthesize=_shouldParseResponse
+(id)requestWithDatabaseID:(unsigned)databaseID containerID:(unsigned)anId;
+(id)requestWithDatabaseID:(unsigned)databaseID;
// declared property setter: -(void)setShouldParseResponse:(BOOL)parseResponse;
// declared property getter: -(BOOL)shouldParseResponse;
-(void)setSongsRequestWithSessonID:(unsigned)sessonID metadataFilter:(id)filter purchaseTokenListing:(id)listing queryFilter:(id)filter4;
-(id)canonicalResponseForResponse:(id)response;
-(id)initWithDatabaseID:(unsigned)databaseID containerID:(unsigned)anId;
-(id)initWithDatabaseID:(unsigned)databaseID;
-(id)initWithAction:(id)action;
@end
