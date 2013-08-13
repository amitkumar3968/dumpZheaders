/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "DAMailboxRequest.h"


@interface DAMailboxGetUpdatesRequest : DAMailboxRequest {
	int _maxSize;
	int _bodyFormat;
}
@property(readonly, assign) int maxSize;	// converted property
@property(readonly, assign) int bodyFormat;	// converted property
-(id)description;
-(BOOL)isEqual:(id)equal;
-(unsigned)hash;
// converted property getter: -(int)bodyFormat;
// converted property getter: -(int)maxSize;
-(id)initRequestForBodyFormat:(int)bodyFormat withBodySizeLimit:(int)bodySizeLimit;
@end
