/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSURL, NSString;

@interface SSItemOfferDeviceError : XXUnknownSuperclass {
@private
	NSString* _localizedMessage;
	NSString* _localizedTitle;
	NSString* _localizedURLTitle;
	NSURL* _url;
}
@property(readonly, assign, nonatomic) NSURL* URL;	// @synthesize=_url
@property(readonly, assign, nonatomic) NSString* localizedURLTitle;	// @synthesize=_localizedURLTitle
@property(readonly, assign, nonatomic) NSString* localizedTitle;	// @synthesize=_localizedTitle
@property(readonly, assign, nonatomic) NSString* localizedMessage;	// @synthesize=_localizedMessage
// declared property getter: -(id)URL;
// declared property getter: -(id)localizedURLTitle;
// declared property getter: -(id)localizedTitle;
// declared property getter: -(id)localizedMessage;
-(void)dealloc;
-(id)_initWithMessage:(id)message title:(id)title URLTitle:(id)title3 URL:(id)url;
@end
