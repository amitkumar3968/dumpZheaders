/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVActionBackedTask.h"

@class NSString;
@protocol CoreDAVTaskDelegate;

@interface CoreDAVDeleteTask : CoreDAVActionBackedTask {
	NSString* _previousETag;
}
@property(retain) NSString* previousETag;	// @synthesize=_previousETag
@property(assign, nonatomic) id<CoreDAVTaskDelegate> delegate;	// @dynamic
// declared property setter: -(void)setPreviousETag:(id)tag;
// declared property getter: -(id)previousETag;
-(void)finishCoreDAVTaskWithError:(id)error;
-(id)requestBody;
-(id)additionalHeaderValues;
-(id)httpMethod;
-(id)description;
-(void)dealloc;
@end

