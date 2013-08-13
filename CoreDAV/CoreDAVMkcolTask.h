/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVActionBackedTask.h"

@class NSSet, NSURL;
@protocol CoreDAVTaskDelegate;

@interface CoreDAVMkcolTask : CoreDAVActionBackedTask {
	NSSet* _propertiesToSet;
	BOOL _sendOrder;
	int _absoluteOrder;
	NSURL* _priorOrderedURL;
}
@property(retain) NSSet* propertiesToSet;	// @synthesize=_propertiesToSet
@property(assign, nonatomic) int absoluteOrder;	// @synthesize=_absoluteOrder
@property(retain, nonatomic) NSURL* priorOrderedURL;	// @synthesize=_priorOrderedURL
@property(assign, nonatomic) id<CoreDAVTaskDelegate> delegate;	// @dynamic
// declared property getter: -(id)priorOrderedURL;
// declared property getter: -(int)absoluteOrder;
// declared property setter: -(void)setPropertiesToSet:(id)set;
// declared property getter: -(id)propertiesToSet;
// declared property setter: -(void)setPriorOrderedURL:(id)url;
// declared property setter: -(void)setAbsoluteOrder:(int)order;
-(void)finishCoreDAVTaskWithError:(id)error;
-(id)copyDefaultParserForContentType:(id)contentType;
-(id)requestBody;
-(id)additionalHeaderValues;
-(id)httpMethod;
-(id)description;
-(void)dealloc;
-(id)initWithPropertiesToSet:(id)set atURL:(id)url;
-(id)initWithURL:(id)url;
@end

