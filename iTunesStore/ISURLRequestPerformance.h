/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSURLResponse;

@interface ISURLRequestPerformance : XXUnknownSuperclass {
@private
	double _finishTime;
	double _receivedResponseTime;
	double _renderBeginTime;
	double _renderEndTime;
	double _startTime;
	NSURLResponse* _urlResponse;
}
@property(readonly, assign, nonatomic) double renderEndInterval;
@property(readonly, assign, nonatomic) double renderBeginInterval;
@property(readonly, assign, nonatomic) double receivedResponseInterval;
@property(readonly, assign, nonatomic) double finishInterval;
@property(copy, nonatomic) NSURLResponse* URLResponse;	// @synthesize=_urlResponse
@property(assign, nonatomic) double startTime;	// @synthesize=_startTime
// declared property setter: -(void)setURLResponse:(id)response;
// declared property getter: -(id)URLResponse;
// declared property setter: -(void)setStartTime:(double)time;
// declared property getter: -(double)startTime;
-(void)setRenderFinishTime:(double)time;
-(void)setRenderBeginTime:(double)time;
-(void)setReceivedResponseTime:(double)time;
-(void)setFinishTime:(double)time;
// declared property getter: -(double)renderEndInterval;
// declared property getter: -(double)renderBeginInterval;
// declared property getter: -(double)receivedResponseInterval;
// declared property getter: -(double)finishInterval;
-(void)dealloc;
@end

