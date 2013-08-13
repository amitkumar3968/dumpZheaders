/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class DAMessageMoveRequest, NSString;

@interface DAMoveResponse : XXUnknownSuperclass {
	int _status;
	NSString* _sourceID;
	NSString* _destID;
	DAMessageMoveRequest* _origRequest;
}
@property(retain) DAMessageMoveRequest* origRequest;	// @synthesize=_origRequest
@property(readonly, assign) NSString* destID;	// @synthesize=_destID
@property(readonly, assign) NSString* sourceID;	// @synthesize=_sourceID
@property(readonly, assign) int status;	// @synthesize=_status
// declared property setter: -(void)setOrigRequest:(id)request;
// declared property getter: -(id)origRequest;
// declared property getter: -(id)destID;
// declared property getter: -(id)sourceID;
// declared property getter: -(int)status;
-(void)dealloc;
-(id)description;
-(id)initWithStatus:(int)status sourceID:(id)anId destID:(id)anId3;
@end

