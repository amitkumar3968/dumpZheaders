/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSNumberFormatter, NSObject;
@protocol OS_dispatch_queue;

@interface MCFormatterVendor : XXUnknownSuperclass {
	NSNumberFormatter* _numberFormatter;
	NSObject<OS_dispatch_queue>* _syncQueue;
}
@property(readonly, retain) NSNumberFormatter* numberFormatter;	// converted property
+(id)sharedInstance;
-(void).cxx_destruct;
-(void)dealloc;
-(id)init;
-(void)_localeDidChange:(id)_locale;
// converted property getter: -(id)numberFormatter;
@end

