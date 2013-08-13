/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface DAMessageMoveRequest : XXUnknownSuperclass {
	NSString* _message;
	NSString* _fromFolder;
	NSString* _toFolder;
	id _context;
}
@property(retain) id context;	// @synthesize=_context
@property(readonly, assign) NSString* toFolder;	// @synthesize=_toFolder
@property(readonly, assign) NSString* fromFolder;	// @synthesize=_fromFolder
@property(readonly, assign) NSString* message;	// @synthesize=_message
// declared property setter: -(void)setContext:(id)context;
// declared property getter: -(id)context;
// declared property getter: -(id)toFolder;
// declared property getter: -(id)fromFolder;
// declared property getter: -(id)message;
-(void)dealloc;
-(id)description;
-(BOOL)isEqual:(id)equal;
-(unsigned)hash;
-(id)initMoveRequestWithMessage:(id)message fromFolder:(id)folder toFolder:(id)folder3;
@end

