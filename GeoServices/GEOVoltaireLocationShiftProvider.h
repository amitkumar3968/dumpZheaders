/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GEOLocationShiftProvider.h"
#import "PBRequesterDelegate.h"

@class GEORequester;

@interface GEOVoltaireLocationShiftProvider : GEOLocationShiftProvider <PBRequesterDelegate> {
@private
	GEORequester* _requester;
	id _errorHandler;
	id _finishedHandler;
}
+(void)_resetURL;
+(unsigned short)providerID;
-(void)requesterDidFinish:(id)requester;
-(void)requesterDidCancel:(id)requester;
-(void)requester:(id)requester didFailWithError:(id)error;
-(void)cancelRequest;
-(void)startRequest:(id)request finished:(id)finished error:(id)error;
-(void)dealloc;
-(id)init;
@end

