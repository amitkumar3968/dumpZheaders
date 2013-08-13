/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSRequest.h"
#import "SSXPCCoding.h"

@class SSPlayInfoRequestContext, SSPlayInfoResponse;
@protocol SSPlayInfoRequestDelegate;

@interface SSPlayInfoRequest : SSRequest <SSXPCCoding> {
@private
	SSPlayInfoRequestContext* _context;
	SSPlayInfoResponse* _response;
}
@property(assign, nonatomic) id<SSPlayInfoRequestDelegate> delegate;	// @dynamic
@property(readonly, assign) SSPlayInfoResponse* playInfoResponse;
@property(readonly, assign) SSPlayInfoRequestContext* playInfoContext;
-(id)initWithXPCEncoding:(id)xpcencoding;
-(id)copyXPCEncoding;
-(void)startWithCompletionBlock:(id)completionBlock;
-(BOOL)start;
-(void)startWithPlayInfoResponseBlock:(id)playInfoResponseBlock;
// declared property getter: -(id)playInfoResponse;
// declared property getter: -(id)playInfoContext;
-(void)dealloc;
-(id)initWithPlayInfoContext:(id)playInfoContext;
-(id)init;
@end

