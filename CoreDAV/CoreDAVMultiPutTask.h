/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTask.h"

@class NSMutableDictionary, NSDictionary, NSString, CoreDAVXMLData;

@interface CoreDAVMultiPutTask : CoreDAVTask {
	NSString* _appSpecificNamespace;
	NSString* _appSpecificDataProp;
	NSString* _checkCTag;
	CoreDAVXMLData* _pushedData;
	BOOL _validCTag;
	NSString* _nextCTag;
	NSMutableDictionary* _uuidToHREF;
	NSMutableDictionary* _hrefToETag;
	NSMutableDictionary* _uuidToErrorItems;
	NSMutableDictionary* _hrefToErrorItems;
	NSMutableDictionary* _uuidToStatus;
	NSMutableDictionary* _hrefToStatus;
}
@property(readonly, assign) NSDictionary* hrefToErrorItems;	// @synthesize=_hrefToErrorItems
@property(readonly, assign) NSDictionary* uuidToErrorItems;	// @synthesize=_uuidToErrorItems
@property(readonly, assign) NSDictionary* hrefToStatus;	// @synthesize=_hrefToStatus
@property(readonly, assign) NSDictionary* uuidToStatus;	// @synthesize=_uuidToStatus
@property(readonly, assign) NSDictionary* hrefToETag;	// @synthesize=_hrefToETag
@property(readonly, assign) NSDictionary* uuidToHREF;	// @synthesize=_uuidToHREF
@property(readonly, assign) NSString* nextCTag;	// @synthesize=_nextCTag
// declared property getter: -(id)hrefToStatus;
// declared property getter: -(id)uuidToStatus;
// declared property getter: -(id)hrefToErrorItems;
// declared property getter: -(id)uuidToErrorItems;
// declared property getter: -(id)hrefToETag;
// declared property getter: -(id)uuidToHREF;
// declared property getter: -(id)nextCTag;
-(void)finishCoreDAVTaskWithError:(id)error;
-(id)copyDefaultParserForContentType:(id)contentType;
-(void)fillOutDataWithUUIDsToAddActions:(id)addActions hrefsToModDeleteActions:(id)modDeleteActions;
-(id)requestBody;
-(id)httpMethod;
-(id)additionalHeaderValues;
-(void)dealloc;
-(id)initWithURL:(id)url checkCTag:(id)tag uuidsToAddActions:(id)addActions hrefsToModDeleteActions:(id)modDeleteActions;
@end

