/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface GEODirectionsProvider : XXUnknownSuperclass {
	BOOL _isLoading;
	int _requestType;
@private
	id _finishedHandler;
	id _errorHandler;
}
@property(copy, nonatomic) id errorHandler;	// @synthesize=_errorHandler
@property(copy, nonatomic) id finishedHandler;	// @synthesize=_finishedHandler
@property(assign, nonatomic) BOOL isLoading;	// @synthesize=_isLoading
+(unsigned short)providerID;
// declared property setter: -(void)setErrorHandler:(id)handler;
// declared property getter: -(id)errorHandler;
// declared property setter: -(void)setFinishedHandler:(id)handler;
// declared property getter: -(id)finishedHandler;
// declared property setter: -(void)setIsLoading:(BOOL)loading;
// declared property getter: -(BOOL)isLoading;
-(void)providerDidCancel;
-(void)providerReceivedErrorCode:(int)code;
-(void)providerReceivedResponse:(id)response;
-(void)cancelProviderRequest;
-(void)startProviderWithRequest:(id)request;
-(void)cancelRequest;
-(void)startRequest:(id)request finished:(id)finished error:(id)error;
-(void)requestCompleted;
-(void)dealloc;
@end

