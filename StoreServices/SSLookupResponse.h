/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SSXPCCoding.h"

@class NSDate, NSDictionary;

@interface SSLookupResponse : XXUnknownSuperclass <SSXPCCoding> {
@private
	NSDate* _expirationDate;
	NSDictionary* _response;
}
@property(readonly, assign, nonatomic) NSDictionary* responseDictionary;
@property(copy, nonatomic) NSDate* expirationDate;	// @synthesize=_expirationDate
// declared property setter: -(void)setExpirationDate:(id)date;
// declared property getter: -(id)expirationDate;
-(id)initWithXPCEncoding:(id)xpcencoding;
-(id)copyXPCEncoding;
// declared property getter: -(id)responseDictionary;
-(id)valueForProperty:(id)property;
-(void)dealloc;
-(id)initWithResponseDictionary:(id)responseDictionary;
@end

