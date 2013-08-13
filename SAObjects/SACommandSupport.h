/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class NSString, NSArray, NSURL, SAObjectSupport;

@interface SACommandSupport : AceObject <SAAceSerializable> {
}
@property(assign, nonatomic) int weight;
@property(copy, nonatomic) NSArray* supportedConstraints;
@property(copy, nonatomic) NSURL* serverEndpoint;
@property(retain, nonatomic) SAObjectSupport* resultSupport;
@property(copy, nonatomic) NSString* commandId;
@property(copy, nonatomic) NSString* aceVersion;
+(id)commandSupportWithDictionary:(id)dictionary context:(id)context;
+(id)commandSupport;
// declared property setter: -(void)setWeight:(int)weight;
// declared property getter: -(int)weight;
// declared property setter: -(void)setSupportedConstraints:(id)constraints;
// declared property getter: -(id)supportedConstraints;
// declared property setter: -(void)setServerEndpoint:(id)endpoint;
// declared property getter: -(id)serverEndpoint;
// declared property setter: -(void)setResultSupport:(id)support;
// declared property getter: -(id)resultSupport;
// declared property setter: -(void)setCommandId:(id)anId;
// declared property getter: -(id)commandId;
// declared property setter: -(void)setAceVersion:(id)version;
// declared property getter: -(id)aceVersion;
-(id)encodedClassName;
-(id)groupIdentifier;
@end

