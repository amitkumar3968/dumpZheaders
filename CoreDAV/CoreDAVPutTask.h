/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVPostOrPutTask.h"

@class NSString;
@protocol CoreDAVTaskDelegate;

@interface CoreDAVPutTask : CoreDAVPostOrPutTask {
	NSString* _nextETag;
}
@property(retain) NSString* nextETag;	// @synthesize=_nextETag
@property(assign, nonatomic) id<CoreDAVTaskDelegate> delegate;	// @dynamic
// declared property setter: -(void)setNextETag:(id)tag;
// declared property getter: -(id)nextETag;
-(void)finishCoreDAVTaskWithError:(id)error;
-(id)httpMethod;
-(id)description;
-(void)dealloc;
@end

