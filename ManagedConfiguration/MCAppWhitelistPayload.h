/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSArray;

@interface MCAppWhitelistPayload : MCPayload {
@private
	NSArray* _whitelistedAppsAndOptions;
}
@property(retain, nonatomic) NSArray* whitelistedAppsAndOptions;	// @synthesize=_whitelistedAppsAndOptions
+(id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;
+(id)typeStrings;
// declared property setter: -(void)setWhitelistedAppsAndOptions:(id)options;
// declared property getter: -(id)whitelistedAppsAndOptions;
-(void).cxx_destruct;
-(id)description;
-(id)subtitle1Description;
-(id)subtitle1Label;
-(id)stubDictionary;
-(id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id*)error;
@end

