/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class GEOURLConnectionSession;

@interface GEOURLConnection : XXUnknownSuperclass {
	CFURLConnectionRef _cfConnection;
	id _delegate;
	GEOURLConnectionSession* _connectionSession;
}
-(void)connectionDidTerminate;
-(void)connectionDidFailWithError:(id)connection;
-(void)connectionDidFinishLoading;
-(void)connectionDidReceiveData:(id)connection;
-(void)connectionDidReceiveResponse:(CFURLResponseRef)connection;
-(void)cancel;
-(void)dealloc;
-(id)initWithCFRequest:(CFURLRequestRef)cfrequest delegate:(id)delegate usingSession:(id)session;
@end

