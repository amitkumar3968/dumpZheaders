/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "MFDAMailAccountRequest.h"


@interface _MFDAMessageStoreGetUpdatesRequest : XXUnknownSuperclass <MFDAMailAccountRequest> {
	BOOL _isUserRequested;
}
@property(readonly, assign, nonatomic) BOOL isUserRequested;
@property(readonly, assign, nonatomic) BOOL shouldSend;
-(BOOL)mf_alwaysReportFailures;
-(id)deferredOperation;
// declared property getter: -(BOOL)isUserRequested;
// declared property getter: -(BOOL)shouldSend;
-(unsigned long long)generationNumber;
-(id)initRequestForBodyFormat:(int)bodyFormat withBodySizeLimit:(int)bodySizeLimit isUserRequested:(BOOL)requested;
@end
