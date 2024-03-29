/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTask.h"
#import "CoreDAVContainerMultiGetSubmittable.h"

@class NSError, NSSet, NSString;
@protocol CoreDAVAccountInfoProvider, CoreDAVTaskManager;

@interface CoreDAVContainerMultiGetTask : CoreDAVTask <CoreDAVContainerMultiGetSubmittable> {
	NSSet* _urls;
	NSString* _appSpecificNamespace;
	NSString* _appSpecificMultiGetNameSpace;
	NSString* _appSpecificMultiGetCommand;
	NSString* _appSpecificDataProp;
	Class _appSpecificDataItemClass;
	BOOL _shouldIgnoreResponseErrors;
	NSSet* _additionalPropElements;
	NSSet* _parsedContents;
	NSSet* _missingURLs;
}
@property(assign, nonatomic) BOOL shouldIgnoreResponseErrors;	// @synthesize=_shouldIgnoreResponseErrors
@property(readonly, assign, nonatomic) NSSet* parsedContents;	// @synthesize=_parsedContents
@property(readonly, assign, nonatomic) NSSet* missingURLs;	// @synthesize=_missingURLs
@property(assign) double timeoutInterval;
@property(readonly, assign, nonatomic) NSError* error;
@property(assign, nonatomic) id<CoreDAVAccountInfoProvider> accountInfoProvider;
@property(assign, nonatomic) id<CoreDAVTaskManager> taskManager;
@property(copy, nonatomic) id completionBlock;
@property(retain) NSSet* additionalPropElements;	// @synthesize=_additionalPropElements
// declared property getter: -(id)missingURLs;
// declared property getter: -(id)parsedContents;
// declared property setter: -(void)setShouldIgnoreResponseErrors:(BOOL)ignoreResponseErrors;
// declared property getter: -(BOOL)shouldIgnoreResponseErrors;
// declared property setter: -(void)setAdditionalPropElements:(id)elements;
// declared property getter: -(id)additionalPropElements;
-(void)finishCoreDAVTaskWithError:(id)error;
-(id)copyDefaultParserForContentType:(id)contentType;
-(id)requestBody;
-(id)httpMethod;
-(void)dealloc;
-(void)setAdditionalProperties:(id)properties onDataItem:(id)item;
-(id)copyAdditionalPropElements;
-(id)initWithURLs:(id)urls atContainerURL:(id)containerURL appSpecificDataItemClass:(Class)aClass;
@end

