/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import "VectorKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class VKMapView;

__attribute__((visibility("hidden")))
@interface VKPerformanceTest : XXUnknownSuperclass {
@private
	VKMapView* _mapView;
	BOOL _running;
	int _loopCounter;
	int _resultCount;
	VKPerformanceTestResult_struct* _results;
}
+(void)runWithMapView:(id)mapView;
-(void)printResults;
-(void)runTest:(int)test step:(int)step;
-(void)tick:(int)tick;
-(void)abort;
-(void)loop;
-(void)dealloc;
-(id)initWithMapView:(id)mapView;
@end

