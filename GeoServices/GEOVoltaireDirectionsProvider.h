/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GEODirectionsProvider.h"
#import "PBRequesterDelegate.h"

@class GEORequester;

@interface GEOVoltaireDirectionsProvider : GEODirectionsProvider <PBRequesterDelegate> {
@private
	GEORequester* _requester;
}
@property(retain, nonatomic) GEORequester* requester;	// @synthesize=_requester
+(void)setUsePersistentConnection:(BOOL)connection;
+(unsigned short)providerID;
+(void)resetProviderURL;
+(id)providerURL;
// declared property setter: -(void)setRequester:(id)requester;
// declared property getter: -(id)requester;
-(void)requesterDidCancel:(id)requester;
-(void)requester:(id)requester didFailWithError:(id)error;
-(void)requesterDidFinish:(id)requester;
-(void)cleanupRequester;
-(void)cancelProviderRequest;
-(void)startProviderWithRequest:(id)request;
-(void)dealloc;
-(id)init;
@end
