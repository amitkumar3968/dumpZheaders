/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVPropertyFindBaseTask.h"

@class NSString;

@interface CoreDAVSyncReportTask : CoreDAVPropertyFindBaseTask {
	NSString* _previousSyncToken;
	NSString* _nextSyncToken;
	BOOL _moreToSync;
	BOOL _wasInvalidSyncToken;
}
@property(readonly, assign) BOOL wasInvalidSyncToken;	// @synthesize=_wasInvalidSyncToken
@property(readonly, assign) BOOL moreToSync;	// @synthesize=_moreToSync
@property(readonly, assign) NSString* nextSyncToken;	// @synthesize=_nextSyncToken
// declared property getter: -(BOOL)wasInvalidSyncToken;
// declared property getter: -(BOOL)moreToSync;
// declared property getter: -(id)nextSyncToken;
-(void)finishCoreDAVTaskWithError:(id)error;
-(id)copyDefaultParserForContentType:(id)contentType;
-(id)notFoundHREFs;
-(id)requestBody;
-(id)httpMethod;
-(id)description;
-(void)dealloc;
-(id)initWithPropertiesToFind:(id)find atURL:(id)url withDepth:(int)depth previousSyncToken:(id)token;
@end
