/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSString;

@interface MCRemovalPasswordPayload : MCPayload {
@private
	NSString* _removalPasscode;
}
@property(retain, nonatomic) NSString* removalPasscode;	// @synthesize=_removalPasscode
+(id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;
+(id)typeStrings;
// declared property setter: -(void)setRemovalPasscode:(id)passcode;
// declared property getter: -(id)removalPasscode;
-(void).cxx_destruct;
-(id)stubDictionary;
-(id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id*)error;
@end

