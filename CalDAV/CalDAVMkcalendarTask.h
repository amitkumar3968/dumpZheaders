/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSSet;
@protocol CalDAVMkcalendarTaskDelegate, CoreDAVTaskDelegate;

@interface CalDAVMkcalendarTask : XXUnknownSuperclass {
	NSSet* _setElements;
}
@property(retain) NSSet* setElements;	// @synthesize=_setElements
@property(assign, nonatomic) id<CoreDAVTaskDelegate, CalDAVMkcalendarTaskDelegate> delegate;	// @dynamic
// declared property setter: -(void)setSetElements:(id)elements;
// declared property getter: -(id)setElements;
-(void)finishCoreDAVTaskWithError:(id)error;
-(id)copyDefaultParserForContentType:(id)contentType;
-(id)requestBody;
-(id)httpMethod;
-(id)description;
-(void)dealloc;
-(void)setSupportForEvents:(BOOL)events tasks:(BOOL)tasks;
-(id)initWithPropertiesToSet:(id)set atURL:(id)url;
-(id)initWithURL:(id)url;
@end

