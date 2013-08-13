/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTask.h"

@class NSSet, NSString;
@protocol CoreDAVContainerQueryTaskDelegate;

@interface CoreDAVContainerQueryTask : CoreDAVTask {
	NSSet* _searchTerms;
	unsigned _searchLimit;
	NSString* _appSpecificNamespace;
	NSString* _appSpecificQueryCommand;
	NSString* _appSpecificDataProp;
	Class _appSpecificDataItemClass;
}
@property(assign, nonatomic) id<CoreDAVContainerQueryTaskDelegate> delegate;	// @dynamic
+(id)_copySearchTermsFromSearchString:(id)searchString;
-(void)finishCoreDAVTaskWithError:(id)error;
-(id)copyDefaultParserForContentType:(id)contentType;
-(id)requestBody;
-(void)addFiltersToXMLData:(id)xmldata;
-(id)httpMethod;
-(void)dealloc;
-(id)_initWithSearchTerms:(id)searchTerms searchLimit:(unsigned)limit atURL:(id)url appSpecificDataItemClass:(Class)aClass;
-(id)initWithSearchString:(id)searchString searchLimit:(unsigned)limit atURL:(id)url appSpecificDataItemClass:(Class)aClass;
-(id)initWithSearchTerms:(id)searchTerms searchLimit:(unsigned)limit atURL:(id)url appSpecificDataItemClass:(Class)aClass;
@end
