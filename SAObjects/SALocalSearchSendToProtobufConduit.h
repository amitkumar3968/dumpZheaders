/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSData, NSArray, NSURL;

@interface SALocalSearchSendToProtobufConduit : SABaseClientBoundCommand {
}
@property(assign, nonatomic) int timeoutInSeconds;
@property(copy, nonatomic) NSData* rawRequest;
@property(copy, nonatomic) NSURL* endpoint;
@property(copy, nonatomic) NSArray* attributes;
@property(copy, nonatomic) NSURL* targetAppId;
+(id)sendToProtobufConduitWithDictionary:(id)dictionary context:(id)context;
+(id)sendToProtobufConduit;
-(BOOL)requiresResponse;
// declared property setter: -(void)setTimeoutInSeconds:(int)seconds;
// declared property getter: -(int)timeoutInSeconds;
// declared property setter: -(void)setRawRequest:(id)request;
// declared property getter: -(id)rawRequest;
// declared property setter: -(void)setEndpoint:(id)endpoint;
// declared property getter: -(id)endpoint;
// declared property setter: -(void)setAttributes:(id)attributes;
// declared property getter: -(id)attributes;
// declared property setter: -(void)setTargetAppId:(id)anId;
// declared property getter: -(id)targetAppId;
-(id)encodedClassName;
-(id)groupIdentifier;
@end
