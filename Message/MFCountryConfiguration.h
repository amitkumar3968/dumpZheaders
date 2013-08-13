/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSObject, NSLock, NSString;
@protocol OS_dispatch_queue;

@interface MFCountryConfiguration : XXUnknownSuperclass {
@private
	NSObject<OS_dispatch_queue>* _queue;
	BOOL _isUpdating;
	id _networkObserver;
	NSLock* _countryCodeLock;
	NSString* _oldCountryCode;
	NSString* _countryCode;
}
@property(copy, nonatomic) NSString* countryCode;	// @synthesize=_countryCode
+(id)sharedConfiguration;
// declared property getter: -(id)countryCode;
// declared property setter: -(void)setCountryCode:(id)code;
-(void)_useCountryCode:(id)code;
-(void)_checkCountryCode;
-(void)updateCurrentCountry;
-(void)dealloc;
-(id)init;
@end

