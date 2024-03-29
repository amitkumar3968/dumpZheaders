/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "PCInterfaceUsabilityMonitorDelegate.h"
#import "PersistentConnection-Structs.h"
#import "PCInterfaceUsabilityMonitorProtocol.h"

@class CUTWeakReference, NSString, NSMutableArray;

@interface PCNonCellularUsabilityMonitor : XXUnknownSuperclass <PCInterfaceUsabilityMonitorProtocol, PCInterfaceUsabilityMonitorDelegate> {
	dispatch_queue_s* _delegateQueue;
	dispatch_queue_s* _ivarQueue;
	dispatch_queue_s* _monitorDelegateQueue;
	CUTWeakReference* _delegateReference;
	BOOL _demoOverride;
	int _previousLinkQuality;
	BOOL _trackUsability;
	unsigned _thresholdOffTransitionCount;
	double _trackedTimeInterval;
	NSMutableArray* _interfaceMonitors;
}
@property(assign, nonatomic) id<PCInterfaceUsabilityMonitorDelegate> delegate;
@property(readonly, assign, nonatomic) BOOL isPoorLinkQuality;
@property(readonly, assign, nonatomic) NSString* linkQualityString;
@property(readonly, assign, nonatomic) BOOL isInternetReachable;
@property(readonly, assign, nonatomic) BOOL isInterfaceHistoricallyUsable;
@property(readonly, assign, nonatomic) BOOL isInterfaceUsable;
@property(readonly, assign, nonatomic) int linkQuality;
@property(readonly, assign, nonatomic) int interfaceIdentifier;
-(void)interfaceReachabilityChanged:(id)changed;
-(void)interfaceLinkQualityChanged:(id)changed previousLinkQuality:(int)quality;
-(void)_callDelegateOnIvarQueueWithBlock:(id)block;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property getter: -(id)delegate;
// declared property getter: -(BOOL)isPoorLinkQuality;
// declared property getter: -(id)linkQualityString;
// declared property getter: -(BOOL)isInternetReachable;
// declared property getter: -(BOOL)isInterfaceHistoricallyUsable;
// declared property getter: -(BOOL)isInterfaceUsable;
// declared property getter: -(int)linkQuality;
-(int)_linkQualityOnIvarQueue;
// declared property getter: -(int)interfaceIdentifier;
-(void)setTrackedTimeInterval:(double)interval;
-(void)setThresholdOffTransitionCount:(unsigned)count;
-(void)setTrackUsability:(BOOL)usability;
-(void)_forwardConfigurationOnIvarQueue;
-(void)_addMonitorWithInterfaceName:(id)interfaceName;
-(void)dealloc;
-(id)initWithDelegateQueue:(dispatch_queue_s*)delegateQueue;
@end

